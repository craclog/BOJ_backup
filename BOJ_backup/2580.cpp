#include <cstdio>
#include <tuple>
using namespace std;
typedef tuple<int, int, int> t3;
int a[10][10]; // sudoku information
int able[10][10][10]; // [row][column][number] if able, 0
bool isable(int r, int c, int v) { // if able to put v in a[r][c], return true
	for (int k = 1; k < 10; k++)
	{
		// if there is already v, return false
		if( a[r][k] == v) return false;
		if (a[k][c] == v) return false;
	}
	// Calculate sector(3X3)
	int rb = r - (r - 1) % 3;
	int cb = c - (c - 1) % 3;
	for (int k = rb; k < rb + 3; k++)
		for (int l = cb; l < cb + 3; l++)
			if( a[k][l] == v ) return false;
	return true;	// able to insert
}
t3 findmin() {		// Find r,c which has minimum number of cases
	int cnt;
	int nr, nc, minn = 100;
	for(int i=1; i<10; i++)
		for (int j = 1; j < 10; j++)
		{
			if (a[i][j] != 0) continue;
			cnt = 0;
			int tmp[10] = { 0, };		// Availablity Check, Init with 0
			for (int k = 1; k < 10; k++)
			{
				tmp[a[i][k]] = 1;
				tmp[a[k][j]] = 1;
			}
			// Calculate sector(3X3)
			int rb = i - (i - 1) % 3;
			int cb = j - (j - 1) % 3;
			for (int k = rb; k < rb + 3; k++)
				for (int l = cb; l < cb + 3; l++)
					tmp[a[k][l]] = 1;
			for (int k = 1; k < 10; k++)
				if (tmp[k] == 0) cnt++;	// Count number of cases
			if (cnt == 0) return make_tuple(i, j, -1);	// Error ( a[i][j] = 0, but Cannot put anything in a[i][j] )
			if (cnt == 1) return make_tuple(i, j, cnt);	// return i,j,cnt
			if (cnt < minn)
				nr = i, nc = j, minn = cnt;				// Renew nr,nc,minn
		}
	return  make_tuple(nr, nc, minn); // if minn = 100, there is Nothing to choose (complete)
}
// Recursively solve sudoku
int sol() {
	t3 tmp = findmin(); // Find r,c which has minimum number of cases
	if (get<2>(tmp) == -1) return 0;	// Get Third value of tmp
	if (get<2>(tmp) == 100) return 1;	// If -1 : Fail,  100 : Success
	int r = get<0>(tmp);	// Get r,c from tmp
	int c = get<1>(tmp);
	for (int i = 1; i < 10; i++)
	{
		if (able[r][c][i] > 0) continue;	// Unable to put i in a[r][c]
		if (isable(r, c, i))				// If able to put i in a[r][c]
		{
			a[r][c] = i;					// Set put i in a[r][c]
			if (sol()) return 1;			// Recursively solve
			else a[r][c] = 0;				// Reset a[r][c]
		}
	}
	return 0;
}
int main() {
	for (int i = 1; i < 10; i++)
		for (int j = 1; j < 10; j++)
		{
			scanf("%d", &a[i][j]);		// Receive input
			if (a[i][j] == 0)			// if 0, Check Availablity
			{
				for (int k = 1; k < 10; k++)
				{
					able[i][j][a[i][k]] = 1;	
					able[i][j][a[k][j]] = 1;
				}
				// Calculate sector(3X3)
				int rb = i - (i - 1) % 3;
				int cb = j - (j - 1) % 3;
				for (int k = rb; k < rb + 3; k++)
					for (int l = cb; l < cb + 3; l++)
						able[i][j][a[k][l]] = 1;
			}
		}
	sol(); // Recursively sol
	for (int i = 1; i < 10; i++)	// Print result
	{
		for (int j = 1; j < 10; j++)
			printf("%d ", a[i][j]);
		puts("");
	}
	return 0;
}