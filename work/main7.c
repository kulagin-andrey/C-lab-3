#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// ������ ������� ������� ������������� ��������
struct counter_pair {
	int symbol_code;    // ��� �������
	int symbol_count;   // ������� ��� ���� ������ ����������
};

// �������, ������� ���������� ��� ������ �������
int compar(const void *a, const void *b) {
	struct counter_pair *p1 = (struct counter_pair *)a;
	struct counter_pair *p2 = (struct counter_pair *)b;

	if (p1->symbol_count > p2->symbol_count)
		return -1;
	else if (p1->symbol_count < p2->symbol_count)
		return 1;
	else
		return 0;
}


int main() {
	
	struct counter_pair cp[256];    // ������� �������� ��������
	char str[1024];         // �������������� ������
	char *rc;           // ���������, ������� ����� fgets
	int j, len;

	// ����������� ������� ��������
	for (j = 0; j<256; j++) {
		cp[j].symbol_code = j;  // ��� ������� ������� � ����� "j"
		cp[j].symbol_count = 0; // ������ ���� �� ���������� �� ����
	}

	// ������������ �������� ������
	printf("Enter string: ");
	rc = fgets(str, 1023, stdin);
	if (rc != str) {
		printf("Error !!!\n");
		return -1;
	}
	// ������� ��������� ��������
	len = strlen(str);
	for (j = 0; j<len; j++) cp[str[j]].symbol_count += 1;

	// ��������� �������
	qsort((void *)(&cp), 256, sizeof(struct counter_pair), compar);

	// �������� ���������
	printf("Symbol frequency table\n");
	for (j = 0; j<256; j++) {
		if (cp[j].symbol_count == 0) continue;   // ������ ����� ����
		printf("Symbol %c  ->   %d \n", cp[j].symbol_code, cp[j].symbol_count);
	}
	return 0;
}
