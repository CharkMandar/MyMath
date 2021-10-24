#include "my_math.h"

double my_exp(double x, int N, double* eps) {
	double S, sum, c = 1.0;
	sum = 1;
	for (int n = 1; n < N; n++) {
		S = c * (x / n);
		sum += S;
		c = S;
	}
	*eps = c;

	return sum;
}

double my_sin(double x, int N, double* eps) {
	double sum = 0.0, S;
	S = x;
	for (int n = 1; n < N; n++) {
		sum += S;
		S *= (-1) * x * x / ((2 * n) * (2 * n + 1));
	}
	*eps = S;

	return sum;
}

double my_cos(double x, int N, double* eps) {
	double sum = 0.0, S = 1.0;
	for (int n = 1; n < N; n++) {
		sum += S;
		S *= (-1.0) * x * x / ((2 * n - 1) * (2 * n));
	}
	*eps = S;

	return sum;
}

double my_asin(double x, int N, double* eps) {
	double  sum = 0.0, S = 1.0;
	S = x;
	sum = x;
	for (int n = 0; n < N; n++) {
		S *= (x * x * (2 * n + 1) * (2 * n + 1) / (2 * (n + 1) * (2 * n + 3)));
		sum += S;
	}
	*eps = S;

	return sum;
}

double my_acos(double x, int N, double* eps) {
	double sum = 0.0, S = 1.0;
	S = x;
	sum = x;
	for (int n = 0; n < N; n++) {
		S *= (x * x * (2 * n + 1) * (2 * n + 1) / (2 * (n + 1) * (2 * n + 3)));
		sum += S;
	}
	*eps = S;

	double tmp = 3.14159265358979323846 / 2;
	tmp -= sum;
	return tmp;
}