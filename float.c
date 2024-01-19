#include  <stdio.h>

int main() {
  	float subtotal;
  	float tax;
 	printf("How much are your grocieries? ");
	scanf("%f", &subtotal);
 	printf("What is your tax rate? ");
	scanf("%f", &tax);
  	printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  	return 0;
}
