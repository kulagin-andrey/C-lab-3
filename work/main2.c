#include <stdio.h>
#include <string.h>
#define IN 1//������ �����
#define OUT 0// ������� ����� 
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
	buf[strlen(buf) - 1] = ' ';//�������� \n
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			word = 0;
			++word;
			count++;
			flag = IN;//����� � �����
			putchar(buf[i]);
		}
		else if (buf[i] != ' '&& flag == IN)
		{
			word++;
			putchar(buf[i]);//������ �����
		}
		else if (buf[i] == ' '&& flag == IN)
		{
			flag = OUT;//����� �� �����
			printf(" %d", word);
			putchar('\n');
		}
		i++;
	}
	putchar('\n');
	PR("%d words\n", count);
	return 0;
}