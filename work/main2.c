#include <stdio.h>
#include <string.h>
#define IN 1//внутри слова
#define OUT 0// снаружи слова 
#define PR printf

int main()
{
	char buf[256] = { 0 };
	int flag = OUT;
	int i = 0;
	int count = 0;
	int word = 0;
	PR("Enter a line ,please:\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = ' ';//удаление \n
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			word = 0;
			++word;
			count++;
			flag = IN;//вошли в слово
			putchar(buf[i]);
		}
		else if (buf[i] != ' '&& flag == IN)
		{
			word++;
			putchar(buf[i]);//внутри слова
		}
		else if (buf[i] == ' '&& flag == IN)
		{
			flag = OUT;//вышли из слова
			printf(" %d", word);
			putchar('\n');
		}
		i++;
	}
	putchar('\n');
	PR("%d words\n", count);
	return 0;
}