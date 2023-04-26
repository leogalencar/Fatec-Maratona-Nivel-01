#include <stdio.h>
 
int main() {
    
    int n, mult;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= 10; i++)
    {
        mult = i * n;
        printf("%d x %d = %d\n", i, n, mult);
    }
    
    return 0;
}
