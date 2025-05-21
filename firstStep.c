#include <stdio.h>


int main() {
	int i, end;//ganze Zahlen
	printf("A numbers please: ");
	scanf("%d", &end);
	printf("\n");
	for (i = 0; i <= end; i = i + 1)
		//initalisierung, bevor die Schleife beginnt;
		//Bedingung, Schleife wird bei wahr ausgeführt
		//Anwendung, am Ende jeder Schleife
	{
		printf("%d\n ", i);
	}
	printf("Hello sweet World");
	return 0;
}