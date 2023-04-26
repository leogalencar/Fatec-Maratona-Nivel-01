#include <stdio.h>
 
int main() {
    
    int n, square;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            square = i * i;
            printf("%d^2 = %d\n", i, square);
        }
    }
    
    return 0;
}
