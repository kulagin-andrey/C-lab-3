#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//for strlen
#include "task1.h"
#define OUT 0
#define IN 1
#define N 256
int main()
{
	char buf[N] = { 0 };//массив для ввода строки пользователем
	int flag = 0;// флаг состояний 
	int count = 0;//счетчик
	int i = 0;
	printf("Enter words:>");
	fgets(buf, 512, stdin);// считывется строка размером 512 со стандартного потока ввода клавиатуры(stdin) и помещает в массив= buf 
	buf[strlen(buf) - 1] = '\0';// удаление \n
	
		printf("Number of words:> %d\n",wordCount(buf));
		return 0;
}  