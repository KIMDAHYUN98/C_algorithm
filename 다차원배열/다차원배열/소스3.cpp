/* 2차원 배열 연습 문제 4.
              1
           3  2
        6  5  4
    10  9  8  7
 15 14 13 12 11
*/

#include <stdio.h>

int main()
{
	int b[10][10] = { 0, };
	int i, j, cnt = 0;
	// 배열에 값을 넣는 코드
	for (i = 0; i <= 4; i++)
	{
		for (j = 4; j >= 4-i; j--)
		{
			b[i][j] = ++cnt;
		}
	}
	// 배열을 출력하는 코드
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (b[i][j] != 0) printf("%3d", b[i][j]);
			else printf("   ");
		}
		printf("\n");
	}
	return 0;
}