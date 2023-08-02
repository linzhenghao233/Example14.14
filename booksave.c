/* booksave.c -- 在文件中保存结构中的内容 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL	40
#define MAXAUTL	40
#define MAXBKS	10		//最大书籍数量
char* s_gets(char* st, int n);
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int mian(void) {
	struct book library[MAXBKS];	//结构数组
	int count = 0;
	int index, filecount;
	FILE* pbooks;
	int size = sizeof(struct book);

	if((pbooks = fopen("book.dat", "a + b")) == NULL)
}