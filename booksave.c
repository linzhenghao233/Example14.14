/* booksave.c -- ���ļ��б���ṹ�е����� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL	40
#define MAXAUTL	40
#define MAXBKS	10		//����鼮����
char* s_gets(char* st, int n);
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int mian(void) {
	struct book library[MAXBKS];	//�ṹ����
	int count = 0;
	int index, filecount;
	FILE* pbooks;
	int size = sizeof(struct book);

	if((pbooks = fopen("book.dat", "a + b")) == NULL)
}