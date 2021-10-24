#include<stdio.h>
#include"my_math.h"

int main() {
	double a;
	int b, Choice;
	double eps;
	printf("Input element  ");
	scanf_s("%lf", &a);
	printf("Input number  ");
	scanf_s("%d", &b);
	printf("Select function: \n exp: 1 \n sin: 2 \n cos: 3 \n arcsin: 4 \n arccos: 5 \n");
	scanf_s("%d", &Choice);
	switch (Choice) {
	case 1:
		printf("%lf", my_exp(a, b, &eps));
		printf(" %lf", eps);
		break;
	case 2:
		printf("%lf", my_sin(a, b, &eps));
		printf(" %lf", eps);
		break;
	case 3:
		printf("%lf ", my_cos(a, b, &eps));
		printf(" %lf", eps);
		break;
	case 4:
		printf("%lf ", my_asin(a, b, &eps));
		printf(" %lf", eps);
		break;
	case 5:
		printf("%lf ", my_acos(a, b, &eps));
		printf(" %lf", eps);
		break;
	default:
		printf("Invalid value");
	}
	return 0;
}