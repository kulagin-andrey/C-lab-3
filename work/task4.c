#include <stdio.h>
int getSum(char *buf) {
	int sum = 0, n = 0, i = 0;
	for (; buf && *buf; ++buf) {
		if ('0' <= *buf && *buf <= '9') {
			n = n * 10 + (*buf - '0');
			if (++i == 4) {  // dddd
				sum += n / 100 + n % 100; // dd + dd
				n = 0;
				i = 0;
			}
		
		}
		else if (n) { 
			sum += n;
			n = 0;
			i = 0;
		}
	}
	return sum + n;
}