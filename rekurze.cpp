#include <stdio.h>

long faktorial(int x) {
	if (x <= 1) return 1;
	else return x * faktorial(x - 1);
}

long bunky(int x) {
	if (x <= 1) return 1;
	else return 2 * bunky(x - 1);
}

long fibonacci(int x) {
	if (x == 0) return 0;
	else if (x <= 1) return 1;
	else return fibonacci(x - 1) + fibonacci(x - 2);
}

float urok(int x) {
	if (x <= 1) return x * 1.01;
	else return urok(x - 1) * 1.01;
}

int main() {
	printf("%d\n", faktorial(1));
	printf("%d\n", faktorial(2));
	printf("%d\n", faktorial(3));
	printf("%d\n", faktorial(4));
	printf("Bunky\n");
	printf("%d\n", bunky(5));
	printf("Fibonacci\n");
	printf("%d\n", fibonacci(0));
	printf("%d\n", fibonacci(1));
	printf("%d\n", fibonacci(2));
	printf("%d\n", fibonacci(3));
	printf("%d\n", fibonacci(4));
	printf("%d\n", fibonacci(5));
	printf("Slozeny urok\n");
	printf("%f\n", urok(1));
	printf("%f\n", urok(2));
	printf("%f\n", urok(3));
	printf("%f\n", urok(4));
}
