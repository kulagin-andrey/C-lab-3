#include <stdio.h>
int getSumInt(int arr[], int N)
{
	int i = 0;
	int sum = 0;
	int first = 0;//begin string
	int last = 0;//end string
	for (first = 0; first < N; ++first)//0->9
	{
		if (arr[first] < 0)   break;
	}
	for (last = N - 1; last > first; --last)//0<-9
	{
		if (arr[last] > 0)    break;
		}
	for (i = first + 1; i < last; ++i)
		sum += arr[i];
	return sum;
}