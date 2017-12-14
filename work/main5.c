#include <stdio.h>
#include <stdlib.h>// for srand
#include <time.h>
#include "task5.h"
#define N 10
#define MAX 100
int main ()
{
	int arr[N] = { 0 };
	int max_h = MAX / 2;
	int len_h = N / 2;
	int buf;
	int p = 0; // count positive value
	int n = 0; // count negative value
	int i = 0;

	srand(time(0));

	while (i < N) {
		buf = rand() % MAX - max_h;

		if ((buf < 0) && (n < len_h)) {
			arr[i] = buf;
			n++;
			i++;
		}

		if ((buf >= 0) && (p < len_h)) {
			arr[i] = buf;
			p++;
			i++;
		}

	}
	for (i = 0; i < N; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\nSum=%d\n", getSumInt(arr, N));

	return 0;
 }