#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, k;
	int w[1], v[1]; // int �迭
	double m[1];// double �迭
	double t, t1;

	// 1. �Է�

	scanf("%d", &n);
	scanf("%d", &k);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &w[i], &v[i]);
		m[i] = (double)v[i] / w[i];
	}

	// 2. ���� ���� => ����� ���Կ� ���� ����, ������������ ����
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (m[i] < m[j])
			{
				// ��ü �۾�
				t1[i] = m[i]; m[i] = m[j]; m[j] = t1;
				t = w[i]; w[i] = w[j]; w[j] = t;
				t = v[i]; v[i] = v[j]; v[j] = t;
			}
		}
	}


	// 3. ���濡 ���������� ��´�.

	for (i = 0; i < n; i++)
	{
		if (k > w[i]) // ���� ������ ���Ժ��� ���� ���� �� �ִ� ������ �� Ŭ ���
		{
			sum += v[i];
			k += w[i];
		}
		else
		{
			sum += m[i] * k; // (���� �Ѱ��� �ش��ϴ� ��ġ) * (���� �ִ� ����)
			break; // ���̻� ���� ������ �����Ƿ� break�� ���
		}
	}

	// 4. ���

	printf("%d", sum);

	return 0;
}