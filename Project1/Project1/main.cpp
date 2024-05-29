/*
Project Euler Problems

Austin Maryanski - 5/28/2024
*/

#include <iostream>
#include "helper.h"
int problem1() {
	// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, 9. The sum of these multiples is 23.
	// Find the sum of all multiples of 3 or 5 below 1000

	// Brute force
	int sum = 0;
	for (int i = 0; i < 1000; i += 1) {
		if (!(i % 3)) {
			sum += i;
		}
		else if (!(i % 5)) {
			sum += i;
		}
	}

	return sum;

}

int problem2() {
	// Find the sum of the even fibbonaci numbers less that 4e9
	int sum = 0;
	sum = fibbonaci(35, 0, 1, 0);
	return sum;
}

int problem3() {
	// Find the largest prime factor of 600851475143
	long long largeNum = 600851475143;
	return primeFactors(largeNum);
}

int problem4() {
	// Find the largest palindromic number made from the product of 3 digits
	// Product of two 3 digit numbers will be on the scale of 10e6

}
int main() {
	std::cout << problem1() << std::endl;
	std::cout << problem2() << std::endl;
	std::cout << problem3() << std::endl;
	std::cin.get();
}