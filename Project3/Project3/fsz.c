#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    for (int i = 0, x; i < n; i++) scanf("%d", &x); 

    int ans = (n - 1 + (k - 2)) / (k - 1);
    printf("%d\n", ans);
	return 0;	
}