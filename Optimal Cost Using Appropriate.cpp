#include <stdio.h>
#include <limits.h>

int main() {
    int n = 4;
    int p[] = {10, 20, 30, 40, 30}; // Matrix dimensions
    int m[n][n];

    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }

    printf("Optimal cost for matrix chain multiplication is: %d\n", m[1][n-1]);
    return 0;
}
