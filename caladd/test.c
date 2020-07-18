#include<stdio.h>


int add(int x1, int x2){
	return x2 ? add(x1^x2, (x1&x2) << 1) : x1;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("Please entercyour data:>");
	scanf("%d %d", &a, &b);
	printf("%d+%d=%d\n", a, b, add(a, b));
	return 0;
}