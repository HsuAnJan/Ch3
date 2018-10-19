#include<stdio.h>
#include<stdlib.h>

long int ref(int p);

void main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = ref(m);
	b = ref(n);
	c = ref(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}

long int ref(int p)
{
	if (p > 1)
	{
		long int r = p * ref(p - 1);
		return r;
	}
	else
	{
		return 1;
	}
}