/* 2차원 배열 연습 문제 2.
 1  2  3  4  5
    6  7  8  9
      10 11 12
         13 14
            15
*/
#include <stdio.h>

int main_test2() 
{
	int b[10][10]= {0,};
	int i, j, cnt = 0;
	// 배열에 값을 넣는 코드
	for (i = 0; i < 5; i++)
	{
		for (j = i; j < 5; j++)
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
