/*
입력
5
출력
*****
 ****
  ***
   **
	*
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int i, j, n;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j < i) printf(" ");
			else printf("*");
		}

		printf("\n");
	}

	return 0;
}