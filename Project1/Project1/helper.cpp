#include "helper.h"
int fibbonaci(int iter, int digit1, int digit2) {
	if (iter - 1 == 0 || (digit1 + 2*digit2 > 4000000)) {
		return digit1 + digit2;
	}
	fibbonaci(iter - 1, digit2, digit1 + digit2);
}