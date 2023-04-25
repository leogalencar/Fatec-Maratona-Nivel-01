#include <stdio.h>
 
int main() {
 
    int product_code, quantity;
    float item_price, price;

    scanf("%d", &product_code);
    scanf("%d", &quantity);

    switch (product_code) 
      {
        case 1: // Cachorro Quente
          item_price = 4.00;
          break;
        case 2: // X-Salada
          item_price = 4.50;
          break;
        case 3: // X-Bacon
          item_price = 5.00;
          break;
        case 4: // Torrada Simples
          item_price = 2.00;
          break;
        case 5: // Refrigerante
          item_price = 1.50;
          break;
        default:
          item_price = 0;
      }

    price = item_price * quantity;

    printf("Total: R$ %.2f\n", price);
 
    return 0;
}
