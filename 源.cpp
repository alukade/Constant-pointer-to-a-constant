#include<stdio.h>
/*指针的值和指针指向的值都不能被修改,const接近谁就修饰谁*/
int main()
{
	int num = 520;
	const int cnum = 880;
	const int * const p = &cnum;//如果int前没有const那么就是普通的整型常量，可以被修改

	*p = 1024;//无法被修改
	printf("*p: %d\n", *p);

	p = *cnum;//无法被修改
	printf("*p: %d\n", *p);

	return 0;

}