#include <stdio.h>

void incrementHEapVariable(void) 
{
	int *p = (int *)malloc(sizeof(int));
	printf("������� ����� ");
	scanf_s("%d", p);
	printf("����� ����������: %p ��������: %d.\n", p, *p);
	++*p;
	printf("����� ���������� �� 1 - %d\n", *p);
	free(p);
}