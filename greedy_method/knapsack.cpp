#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, k;
	int w[1], v[1]; // int 배열
	double m[1];// double 배열
	double t, t1;

	// 1. 입력

	scanf("%d", &n);
	scanf("%d", &k);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &w[i], &v[i]);
		m[i] = (double)v[i] / w[i];
	}

	// 2. 선택 정렬 => 가방과 무게에 대한 비율, 내림차순으로 정렬
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (m[i] < m[j])
			{
				// 교체 작업
				t1[i] = m[i]; m[i] = m[j]; m[j] = t1;
				t = w[i]; w[i] = w[j]; w[j] = t;
				t = v[i]; v[i] = v[j]; v[j] = t;
			}
		}
	}


	// 3. 가방에 실질적으로 담는다.

	for (i = 0; i < n; i++)
	{
		if (k > w[i]) // 현재 보석의 무게보다 현재 넣을 수 있는 가방이 더 클 경우
		{
			sum += v[i];
			k += w[i];
		}
		else
		{
			sum += m[i] * k; // (보석 한개에 해당하는 가치) * (남아 있는 무게)
			break; // 더이상 담을 공간이 없으므로 break문 사용
		}
	}

	// 4. 출력

	printf("%d", sum);

	return 0;
}