#define _CRT_SECURE_NO_WARNINGS 1 


//#include <stdio.h>
//int main()
//{
//	//�ַ����Ľ�����־��'\0'
//	//'\0'--ת���ַ�-0
//	//0--����0
//	//'0'--�ַ�0
//	//EOF-- end of file --�ļ�������־ -1
//	return 0;
//}



//�������������ֵ--1
//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", num2);
//	return 0;
//}



//�������������ֵ--2
//#include <stdio.h>
//
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("%d\n", max);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4 = 24���ֽ�-->int[6]
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4  int���Ų���ʡ��
//	printf("%d\n", sizeof(arr));//����������С����λ���ֽ�	
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6  //�ܴ�С/ÿ��Ԫ�صĴ�С=Ԫ���������
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a = 0;//4���ֽڣ�32��bitλ
//	int b = ~a;//b���з��ŵ�����
//	//~--���������ƣ�λȡ����1010-->0101��
//	//00000000000000000000000000000000��0�Ķ��������У�
//	//11111111111111111111111111111111�����룩
//	//11111111111111111111111111111110�����룩
//	//10000000000000000000000000000001��ԭ�룩
//	//ԭ�룬���룬���루ԭ��ȡ���÷��룬����+1�ò��룩
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	printf("%d\n", b);//ʹ�õģ���ӡ�������������ԭ��
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++���Ȱ�a��ֵ����b,��ʹa������
//	//int b = ++a;//ǰ��++����++����ʹ��
//	int b = a--;//����--����ʹ�ã���--
//	int b = --a;//ǰ��--����--����ʹ��
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = (int)3.14;//(����)--ǿ������ת������ԭ����double-->int��
//	return 0;
//}


//#include <stdio.h>
//int main()
//{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
//	//��  -  ��0
//	//��  -  0
//	//&&  -  �߼��루ͬʱΪ���Ϊ��,��һ���ټ�Ϊ�٣�
//	//||-�߼�����һ���漴Ϊ�棬ͬʱΪ�ٲ��Ǽ٣�
//	int a = 0;
//	int b = 5;
//	//int c = a && b;//a��b,aΪ����bΪ��ʱ��c��Ϊ��
//	int c = a || b;//a��b��Ϊ�٣�c��Ϊ��
//	printf("c = %d\n", c);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int max = 0;
//
//	max = (a > b ? a : b);//����������(a > b ? a : b)--���a>bΪ�棬�����a����֮�����b
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//��������
//	arr[4];//[]---�±����ò�����
//	return 0;
//}


//#include <stdio.h>
//
//int Add(int x, int y)//��������
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()---�������ò�����
//	return 0;
//}


//ֻҪ���������ڴ��д洢�Ķ���2���ƵĲ���
//����---ԭ�룬���룬���� ��ͬ
//����---����
//
//ԭ��--ֱ�Ӱ�������д����2��������
//����--ԭ��ķ���λ���䣬����λȡ��
//����--����+1
// 
//eg. д�� -2 ԭ��
//10000000000000000000000000000010--ԭ��
//11111111111111111111111111111101--����
//11111111111111111111111111111110--����


//�����ؼ��֣��������������ͻ��
// 
//auto,break,case,char,const,continue,default,do,double,else,enum(ö��)
// extern�������ⲿ���ţ�,float,for,goto,if,int,long,register���Ĵ����ؼ��֣�
//return,short,signed,sizeof,static����̬�ģ�,struct���ṹ��ؼ��֣�,switch
//typedef�����Ͷ��壬�����ض��壩,union������������壩,unsigned,void���޻�գ�,volatile,while


//auto
//#include <stdio.h>j
//int main()
//{
//	auto int a = 10;//�ֲ��������ֲ����������Զ�����������auto��ʡ�ԣ�
//	return 0;
//}


//register
//#include <stdio.h>
//int main()
//{
//	register int a = 10;//�����顯��a����ɼĴ�������
//	return 0;
//}


//signed
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�  int = signed int(ͨ����signedʡ��)
//	//unsigned int num = 0;  //��num������Ϊ�޷�������
//	return 0;
//}


//typedef
//#include <stdio.h>
//int main()
//{//typedef--�����ض���
//	typedef unsigned int u_int;//��unsigned int��������Ϊu_int;(����)
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}


//static--���ξֲ�����
//�ֲ��������������ڱ䳤
//static����ȫ�ֱ���,�ı��˱�����������
// �þ�̬��ȫ�ֱ���ֻ�����Լ���Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷�ʹ��
// static���κ���,Ҳ�Ǹı��˺����������򣨲�����ȫ׼ȷ�����ı��˺�������������
//�ⲿ��������->�ڲ���������



//#include <stdio.h>
//
//void test()
//{
//	static int a = 1;//��ʱaΪ��̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);//2 3 4 5 6
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	//extern--�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}



//�����ⲿ����
//extern int Add(int, int);
//
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}


//#define����ı�ʶ������
//define ���Զ����---������
//#include <stdio.h>
//
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	return 0;
//}
//
//#include <stdio.h>
////������ʵ��
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(X,Y) X>Y?:Y;int main()
//{//��a��b�����ֵ�������ķ�ʽ��
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = Max(a, b);//(��ķ�ʽ)
//	//max = (a>b?a:b);//�����a>b,���a����max
//	printf("max = %d\n", max);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ,��a�ĵ�ַ����p
//	//printf("%p\n", &a);//%p��ӡ��ַ
//	//printf("%p\n", p);
//	*p = 20;//*---�����ò�����
//	printf("a = %d\n", a);
//	//��һ�ֱ�����������ŵ�ַ��---ָ�����
//	
//	return 0;
//}



#include <stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	//*pc = 'a';
	//printf("%c\n", ch);
	return 0;
}//ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�