#include "helper.h"
#include <iostream>
#include <cmath>
int fibbonaci(int iter, int digit1, int digit2, int sum) {
	int next = digit1 + digit2;
	if (iter - 1 == 0 || (next + digit2 > 4000000)) {
		if (!((next) % 2)) return sum + next;
		return sum;
	}
	if (!((next) % 2)) sum += next;
	fibbonaci(iter - 1, digit2, next, sum);
}

int primeCheck(long long n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (!(n % i)) return 0;
	}
	return 1;
}

int primeFactors(long long n) {
	if (primeCheck(n)) return n;
	for (int i = sqrt(n) + 1; i > 2; i--) {
		if (primeCheck(i)) {
			//std::cout << i << ", ";
			if (!(n % i)) return i;
		}
	}
	return 0;
}