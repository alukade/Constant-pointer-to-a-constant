#include<stdio.h>
/*ָ���ֵ��ָ��ָ���ֵ�����ܱ��޸�,const�ӽ�˭������˭*/
int main()
{
	int num = 520;
	const int cnum = 880;
	const int * const p = &cnum;//���intǰû��const��ô������ͨ�����ͳ��������Ա��޸�

	*p = 1024;//�޷����޸�
	printf("*p: %d\n", *p);

	p = *cnum;//�޷����޸�
	printf("*p: %d\n", *p);

	return 0;

}