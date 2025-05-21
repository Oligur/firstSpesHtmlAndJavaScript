#include<stdio.h>
int main() {
	unsigned __int64 limit;
	char isPrime = 'y';
	unsigned __int64 i;
	printf("what is the biggest number?");
	scanf("%llu", &limit);
	for (i = 2; i < limit && isPrime == 'y'; i++) {  
		if (limit % i == 0)
			isPrime = 'n';
	}
	
	/*if (isPrime == 'n')
		printf("\n%llu is not prime, it took %llu steps\n", limit, i-2);
	else if (isPrime == 'y')
		printf("\n%llu is prime\n", limit);
	return 1;
	*/
}

__int64 isPrime ( unsigned __int64 n ) {
	char isPrime = 'y';

	if (limit % 2 == 0)
		return 1;

	for (unsigned __int64 i = 3; i < n == 'y'; i = i + 2) {
		if (n % i == 0)
			return (__int64)i;
	}

	return -1;

}
