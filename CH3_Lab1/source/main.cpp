#include<stdio.h>
#include<stdlib.h>

int odd(int U);
int even(int U);
int total(int U);

int main(void) 
{
	int n, Sum;
	char Addchoice;
	printf("1+2+....+n=?�п�Jn=");
	scanf_s("%d", &n);
	getchar();
	fflush(stdin);
	printf("�аݭn����ƦX(O),���ƦX(E),�٬O��ƦX(I)?�п��:");
	scanf_s("%c", &Addchoice);

	switch (Addchoice) 
	{
	case 'o':
		Sum = odd(n);
		break;
	case 'E':
		Sum = even(n);
		break;
	case 'I':
		Sum=total(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n",Sum);
	system("pause");
	return 0;
}

int odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
		return total;
}
int even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}
int total(int U)
{
	return odd(U) + even(U);
}