#include <stdio.h>

int sum(int s, int e);

int main() {
	int i, start, end;//ganze Zahlen
	
	//input first number
	printf("A numbers please: ");
	scanf("%d", &start);

	//input second number
	printf("Another number please (a bit higher than before): ");
	scanf("%d", &end);
	printf("\n");
	
	if (end < start)
	{//condition true
		//do this
		printf("Oida wast du ned das ");
		printf("%d klana ois %d is ? Seit wann is da Spar Gourmet deppat???", end, start);
		return -1;
	}
	else
	{//conditon false
		//do this
		printf("The sum between %d and %d is: %d\n", start, end, sum(start, end));
		return 0;
	}

	
}
int sum(int s, int e)
{
	int i, sum = 0;
	//initalisierung, bevor die Schleife beginnt;
		//Bedingung, Schleife wird bei wahr ausgeführt
		//Anwendung, am Ende jeder Schleife
	for (i = s; i <= e; i = i + 1)
	{
		sum = sum + i;
		//printf("%d, sum: %d\n", i, sum);
	}
	return sum;
}