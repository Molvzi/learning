#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char*));//���ʹ�С8  
//	printf("%d\n", sizeof(short*));//
//	printf("%d\n", sizeof(int*));//
//	printf("%d\n", sizeof(double*));//
//

	//double d = 3.14;
	//double* pd = &d;
	//printf("%d\n", sizeof(pd));//32ΪΪ4��64λΪ8

	//*pd = 5.5;
	//printf("%lf\n", d);
	//printf("%lf\n", *pd);
	//int a = 10;//������4���ֽڵĿռ�
	////printf("%p\n", &a);
	//int* p = &a;//p��һ������---ָ�����
	////printf("%p\n", p);
	//*p = 20;//*---�����ò�������/��ӷ��ʲ�����
	//printf("a = %d\n", a);

	//return 0;
//}



//�ṹ��
//char int double.....
//�� = 3.14
//��w��
//��----���Ӷ���
//
//����+���+����....
//����+����.....
//���Ӷ���----�ṹ��--�����Լ����������һ������


#include <string.h>
//����һ���ṹ������-����һ�������͵Ľṹ�����
struct Book
{ 
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	//���ýṹ������--
	struct Book b1 = {"C���Գ������", 55};
	strcpy(b1.name, "C++");//strcpy--string copy--�ַ�������--�⺯��--string.h
	printf("%s\n", b1.name);

	//printf("������%s\n", b1.name);//%s--��ӡ�ַ�����%c--��ӡ���ַ�
	//printf("�۸�%d\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
	//return 0;

	//struct Book b1 = { "C���Գ������", 55 };
	//struct Book* pb = &b1;
	//����pb��ӡ���ҵ������ͼ۸�
	// .----�ṹ�����.��Ա
	// ->---�ṹ��ָ��->��Ա
	// 
	// 
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);

	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
}