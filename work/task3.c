#define _CRT_SECURE_NO_WARNINGS
#define IN 1
#define OUT 0
#include <stdio.h>
int getMaxWord(char buf[], char word[])//в buf передается строка ,в word записывается самое длинное слово
{
	char words[512] = { 0 };
	int flag=0;
	int max = 0;
	int i = 0;
	int j = 0;
	int count;
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			words[j++] = buf[i];
			count++;
			flag = IN;//âîøëè â ñëîâî
		}
		else if (buf[i] != ' '&& flag == IN)
		{
			words[j++] = buf[i];
			count++;
		}
		else if (buf[i] == ' '&& flag == IN)
		{
			flag = OUT;//âûøëè èç ñëîâà
		if (count > max)
		{
			max = count;
			words[j] = '\0';
			sprintf(word, "%s", words);
		}
		count = j = 0;
	}

	i++;
}
		if (flag==IN && count>max)
		{
			max = count;
			words[j] = '\0';
			sprintf(word, "%s", words);
	
	}
	return max;
}