
// Calculates the approximate value of e

#include <stdio.h>

int main()
{
	int n = 0;
	float e = 1.0f;
	float factorial = 1.0f;

	// Taking an input of n
	printf("Enter a number: ");
	scanf("%d", &n);

	// Calculating approximate value
	for(int i = 1; i <= n; i++){
		factorial *= i;
		e += 1.0f / factorial;
	}
	printf("Approximate value of e: %f\n", e);

	return 0;
}
