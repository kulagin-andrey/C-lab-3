#include <stdio.h>
#include "task4.h"
#define N 512

int main()
	{
	char buf[N] = { 0 };
	int sum = getSum(fgets(buf, N, stdin));
	printf("%d\n", sum);
	return sum;
}