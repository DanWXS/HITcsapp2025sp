#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        if (n < 0) {
            printf("n must be a non-negative integer.\n");
            continue;
        }

        long long *f = (long long *)malloc((n + 1) * sizeof(long long));
        if (f == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        f[0] = 1;
        f[1] = 1;

        for (int i = 2; i <= n; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }

        printf("%.8Lf\n", (long double)f[n - 1] / f[n]);

        free(f);
    }

    return 0;
}