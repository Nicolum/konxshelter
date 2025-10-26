#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main(void) {
    int a, b, d;
    if (scanf("%d %d %d", &a, &b, &d) != 3) return 0;
    long long cnt = 0;
    for (int x = a; x <= b; ++x) {
        int t = x;
        for (int k = 0; k < 4; ++k) { // 每个数都是 4 位（1000..9999）
            if (t % 10 == d) ++cnt;
            t /= 10;
        }
    }
    printf("%lld\n", cnt);
    return 0;
}
