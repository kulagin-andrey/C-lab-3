#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task3.h"
#define N 512
int main()
{
	char word[N] = { 0 };
	char buf[N] = { 0 };
	fgets(buf, N, stdin);
	printf("%s %i symbols\n",word, getMaxWord(buf, word));

	return 0;
}