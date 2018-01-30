#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char str[100][103];
	int N = 0;
	int i, j, k;
	int so = 0, dae = 0, num = 0, space = 0;
	for (j = 0; j < sizeof(str[j]); j++)
	{
		gets(str[j]);
		
		if (feof(stdin))
			break;
		N++;
	}

	for (k = 0; k < N; k++)
	{
		so = 0;
		dae = 0;
		num = 0;
		space = 0;
		for (i = 0; i < strlen(str[k]); i++)
		{
			if (islower(str[k][i]))
				so++;
			else if (isupper(str[k][i]))
				dae++;
			else if (isdigit(str[k][i]))
				num++;
			else if (isspace(str[k][i]))
				space++;
		}
		printf("%d %d %d %d\n", so, dae, num, space);
	}
	return 0;
}