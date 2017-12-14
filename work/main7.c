#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// Строка таблицы частоты встречаемости символов
struct counter_pair {
	int symbol_code;    // Код символа
	int symbol_count;   // Сколько раз этот символ встретился
};

// Функция, которая сравнивает две строки таблицы
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
	
	struct counter_pair cp[256];    // Таблица подсчёта символов
	char str[1024];         // Обрабатываемая строка
	char *rc;           // Указатель, который вернёт fgets
	int j, len;

	// Настраиваем таблицу подсчёта
	for (j = 0; j<256; j++) {
		cp[j].symbol_code = j;  // Это счётчик символа с кодом "j"
		cp[j].symbol_count = 0; // Символ пока не встретился ни разу
	}

	// Обрабатываем введённую строку
	printf("Enter string: ");
	rc = fgets(str, 1023, stdin);
	if (rc != str) {
		printf("Error !!!\n");
		return -1;
	}
	// Счмтаем вхождения символов
	len = strlen(str);
	for (j = 0; j<len; j++) cp[str[j]].symbol_count += 1;

	// Сортируем таблицу
	qsort((void *)(&cp), 256, sizeof(struct counter_pair), compar);

	// Печатаем результат
	printf("Symbol frequency table\n");
	for (j = 0; j<256; j++) {
		if (cp[j].symbol_count == 0) continue;   // Дальше пошли нули
		printf("Symbol %c  ->   %d \n", cp[j].symbol_code, cp[j].symbol_count);
	}
	return 0;
}
