#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//for strlen
#include "task1.h"
#define OUT 0
#define IN 1
#define N 256
int main()
{
	char buf[N] = { 0 };//������ ��� ����� ������ �������������
	int flag = 0;// ���� ��������� 
	int count = 0;//�������
	int i = 0;
	printf("Enter words:>");
	fgets(buf, 512, stdin);// ���������� ������ �������� 512 �� ������������ ������ ����� ����������(stdin) � �������� � ������= buf 
	buf[strlen(buf) - 1] = '\0';// �������� \n
	
		printf("Number of words:> %d\n",wordCount(buf));
		return 0;
}  