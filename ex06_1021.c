#include <stdio.h>
 
int main() {
 
    int nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda050, moeda025, moeda010, moeda005, moeda001;
    double dinheiro;
    
    scanf("%lf", &dinheiro);
    
    nota100 = dinheiro / 100;
    dinheiro = dinheiro - nota100 * 100;
    
    nota50 = dinheiro / 50;
    dinheiro = dinheiro - nota50 * 50;
    
    nota20 = dinheiro / 20;
    dinheiro = dinheiro - nota20 * 20;
    
    nota10 = dinheiro / 10;
    dinheiro = dinheiro - nota10 * 10;
    
    nota5 = dinheiro / 5;
    dinheiro = dinheiro - nota5 * 5;
    
    nota2 = dinheiro / 2;
    dinheiro = dinheiro - nota2 * 2;
    
    moeda1 = dinheiro;
    dinheiro = dinheiro - moeda1;
    
    moeda050 = dinheiro / 0.50;
    dinheiro = dinheiro - moeda050 * 0.50;
    
    moeda025 = dinheiro / 0.25;
    dinheiro = dinheiro - moeda025 * 0.25;
    
    moeda010 = dinheiro / 0.10;
    dinheiro = dinheiro - moeda010 * 0.10;
    
    moeda005 = dinheiro / 0.05;
    dinheiro = dinheiro - moeda005 * 0.05;
    
    moeda001 = dinheiro / 0.01;
    dinheiro = dinheiro - moeda001 * 0.01;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda050);
    printf("%d moeda(s) de R$ 0.25\n", moeda025);
    printf("%d moeda(s) de R$ 0.10\n", moeda010);
    printf("%d moeda(s) de R$ 0.05\n", moeda005);
    printf("%d moeda(s) de R$ 0.01\n", moeda001);
 
    return 0;
}
