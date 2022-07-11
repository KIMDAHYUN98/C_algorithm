#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int p[1010], a[1010];
int main_mixing_milk() {

    // 1. 사야할 우유 양(n)과 우유를 파고자 하는 업자 수(m) 입력
    // 2. 업자 수 만큼 for문 반복
    // 2-1. 1리터 당 가격(p)와 업자가 가진 우유양(a) 입력

    int n, m, i, j, k, t1, t2;
    int sum = 0;

    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &p[i], &a[i]);
    }

    // 3. 정렬
    // 3-1. 선택정렬로 p(리터당 가격) 기준으로 오름차순 정렬
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

    // 3-2. 선택 정렬 후 사야할 우유양에 차례대로 각 기업이
    // 가지고 있는 우유양을 뺀다

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

    // 4. 출력
    printf("%d", sum);
    return 0;
}