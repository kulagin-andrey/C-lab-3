#define OUT 0
#define IN 1
int wordCount(char buf[])
{
	int flag = 0;// флаг состояний 
	int count = 0;//счетчик
	int i=0 ;
	while (buf[i])
	{
		if (buf[i] != ' '&& flag == OUT)
		{
			count++;
			flag = IN;//вход в слово
		}
		else if (buf[i] == ' '&& flag == IN)
			flag = OUT;//выход из слова
		i++;
	}
	return count;
}
