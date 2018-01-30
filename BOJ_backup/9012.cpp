#include <cstdio>
#include <stack>
using namespace std;

int main() {
	stack<char> st;
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		char c;
		bool isfail = false;
		
		while (1) {
			scanf("%c", &c);
			if (c == '\n' || c == '\0') break;
			if (c == '(') {
				st.push(c);
			}
			else if (c == ')') {
				if (st.size() == 0) {
					isfail = true;
				}
				if (st.size() != 0 && st.top() == '(') {
					st.pop();
				}
			}
		}
		if (!isfail && st.size() == 0) puts("YES");
		else puts("NO");
		while (st.size()) st.pop();
	}
	return 0;
}