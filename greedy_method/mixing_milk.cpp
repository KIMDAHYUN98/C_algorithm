#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int p[1010], a[1010];
int main_mixing_milk() {

    // 1. ����� ���� ��(n)�� ������ �İ��� �ϴ� ���� ��(m) �Է�
    // 2. ���� �� ��ŭ for�� �ݺ�
    // 2-1. 1���� �� ����(p)�� ���ڰ� ���� ������(a) �Է�

    int n, m, i, j, k, t1, t2;
    int sum = 0;

    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &p[i], &a[i]);
    }

    // 3. ����
    // 3-1. �������ķ� p(���ʹ� ����) �������� �������� ����
    for (i = 0; i < m - 1; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (p[i] > p[j])
            {
                t1 = p[i];
                p[i] = p[j];
                p[j] = t1;

                t2 = a[i];
                a[i] = a[j];
                a[j] = t2;
            }
        }
    }

    // 3-2. ���� ���� �� ����� �����翡 ���ʴ�� �� �����
    // ������ �ִ� �������� ����

    for (i = 0; i < m; i++)
    {
        if (n > a[i])
        {
            // 100 - 10 ...

            sum += p[i] * a[i];
            n -= a[i];
        }
        else
        {
            sum += n * p[i];
            break;
        }
    }

    // 4. ���
    printf("%d", sum);
    return 0;
}