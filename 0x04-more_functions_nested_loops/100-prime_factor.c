#include <stdio.h>

/* Function to find the largest prime factor of a number
*/
long long largestPrimeFactor(long long n) {
	long long maxPrime = -1;

	while (n % 2 == 0) {
	maxPrime = 2;
	n /= 2;
    }

	for (int i = 3; i * i <= n; i += 2) {
	while (n % i == 0) {
	maxPrime = i;
	n /= i;
        }
    }

	if (n > 2) {
	maxPrime = n;
    }

	return (maxPrime);
}

int main() {
	long long number = 612852475143;
	long long result = largestPrimeFactor(number);

	printf("%lld\n", result);

	return (0);
}
