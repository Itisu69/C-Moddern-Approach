
// Moodifying PP11 so that the program continues adding terms until the current
// term becomes less than epsilon(e) which is entered by the user as well.

#include <stdio.h>

int main(void)
{
	double e = 1.0f;
	double epsilon = 0.0;
	double factorial = 1.0;
	double current_term = 1.0;
	int i = 1;

	printf("Enter the value of epsilon: ");
	scanf("%lf", &epsilon);

	while (1) {
		factorial *= i;
		current_term = 1.0f / factorial;

		// If term is less than epsilon break out of loop
		if (current_term < epsilon) {
			break;	
		}

		e += current_term;
		i++;
	}

	printf("Approximate value of e: %.15lf\n", e);
	printf("Total terms added: %d\n", i);

	return 0;
}
