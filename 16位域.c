#include <stdio.h>

struct bs
{
	int a:2;
	int b:1;
	

};
 
struct bs1{
    int a:8;
    int b:2;
    int c:6;
}data;


int main(void)
{
	//printf("bs�Ĵ�С%d\n",sizeof(struct bs));
	struct bs one;
	one.a=2;
	one.b=-3;
	printf("a��ֵ��%d\n",one.a);
	printf("b��ֵ��%d\n",one.b);

	 // struct bs{
  //       unsigned a:1;
  //       unsigned b:3;
  //       unsigned c:4;
  //   } bit,*pbit;
  //   bit.a=1;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
  //   bit.b=7;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
  //   bit.c=15;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
  //   printf("%d,%d,%d\n",bit.a,bit.b,bit.c);    /* ����������ʽ�������������� */
  //   pbit=&bit;     ��λ����� bit �ĵ�ַ�͸�ָ����� pbit 
  //   pbit->a=0;    /* ��ָ�뷽ʽ��λ�� a ���¸�ֵ����Ϊ 0 */
  //   pbit->b&=3;    /* ʹ���˸��ϵ�λ����� "&="���൱�ڣ�pbit->b=pbit->b&3��λ�� b ��ԭ��ֵΪ 7���� 3 ����λ������Ľ��Ϊ 3��111&011=011��ʮ����ֵΪ 3�� */
  //   pbit->c|=1;    /* ʹ���˸���λ�����"|="���൱�ڣ�pbit->c=pbit->c|1������Ϊ 15 */
  //   printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* ��ָ�뷽ʽ��������������ֵ */
}

