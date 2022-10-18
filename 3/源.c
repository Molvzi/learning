#define _CRT_SECURE_NO_WARNINGS 1 


//#include <stdio.h>
//int main()
//{
//	//字符串的结束标志：'\0'
//	//'\0'--转义字符-0
//	//0--数字0
//	//'0'--字符0
//	//EOF-- end of file --文件结束标志 -1
//	return 0;
//}



//求两个数的最大值--1
//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//	return 0;
//}



//求两个数的最大值--2
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
//	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4 = 24个字节-->int[6]
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4  int括号不能省略
//	printf("%d\n", sizeof(arr));//计算组数大小，单位是字节	
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6  //总大小/每个元素的大小=元素数组个数
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a = 0;//4个字节，32个bit位
//	int b = ~a;//b是有符号的整型
//	//~--按（二进制）位取反【1010-->0101】
//	//00000000000000000000000000000000（0的二进制序列）
//	//11111111111111111111111111111111（补码）
//	//11111111111111111111111111111110（反码）
//	//10000000000000000000000000000001（原码）
//	//原码，反码，补码（原码取反得反码，反码+1得补码）
//	//负数在内存中存储的时候，存储的是二进制的补码
//	printf("%d\n", b);//使用的，打印的是这个数的有原码
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++（先把a的值赋给b,再使a自增）
//	//int b = ++a;//前置++，先++，再使用
//	int b = a--;//后置--，先使用，再--
//	int b = --a;//前置--，先--，再使用
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = (int)3.14;//(类型)--强制类型转换（将原来的double-->int）
//	return 0;
//}


//#include <stdio.h>
//int main()
//{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
//	//真  -  非0
//	//假  -  0
//	//&&  -  逻辑与（同时为真才为真,又一个假即为假）
//	//||-逻辑或（有一个真即为真，同时为假才是假）
//	int a = 0;
//	int b = 5;
//	//int c = a && b;//a并b,a为真且b为真时，c才为真
//	int c = a || b;//a和b都为假，c才为假
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
//	max = (a > b ? a : b);//条件操作符(a > b ? a : b)--如果a>b为真，则输出a，反之则输出b
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//创建数组
//	arr[4];//[]---下标引用操作符
//	return 0;
//}


//#include <stdio.h>
//
//int Add(int x, int y)//建立函数
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()---函数调用操作符
//	return 0;
//}


//只要是整数，内存中存储的都是2进制的补码
//正数---原码，反码，补码 相同
//负数---补码
//
//原码--直接按照正负写出的2进制序列
//反码--原码的符号位不变，其他位取反
//补码--反码+1
// 
//eg. 写出 -2 原码
//10000000000000000000000000000010--原码
//11111111111111111111111111111101--反码
//11111111111111111111111111111110--补码


//常见关键字（不能与变量名冲突）
// 
//auto,break,case,char,const,continue,default,do,double,else,enum(枚举)
// extern（引入外部符号）,float,for,goto,if,int,long,register（寄存器关键字）
//return,short,signed,sizeof,static（静态的）,struct（结构体关键字）,switch
//typedef（类型定义，类型重定义）,union（联合体或共用体）,unsigned,void（无或空）,volatile,while


//auto
//#include <stdio.h>j
//int main()
//{
//	auto int a = 10;//局部变量（局部变量都是自动变量，所以auto可省略）
//	return 0;
//}


//register
//#include <stdio.h>
//int main()
//{
//	register int a = 10;//‘建议’把a定义成寄存器变量
//	return 0;
//}


//signed
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的  int = signed int(通常把signed省略)
//	//unsigned int num = 0;  //则num被定义为无符号数字
//	return 0;
//}


//typedef
//#include <stdio.h>
//int main()
//{//typedef--类型重定义
//	typedef unsigned int u_int;//将unsigned int重新起名为u_int;(别名)
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}


//static--修饰局部变量
//局部变量的生命周期变长
//static修饰全局变量,改变了变量的作用域，
// 让静态的全局变量只能在自己的源文件内部使用，出了源文件则无法使用
// static修饰函数,也是改变了函数的作用域（并不完全准确），改变了函数的链接属性
//外部链接属性->内部链接属性



//#include <stdio.h>
//
//void test()
//{
//	static int a = 1;//此时a为静态的局部变量
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
//	//extern--声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}



//声明外部函数
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


//#define定义的标识符常量
//define 可以定义宏---带参数
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
////函数的实现
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(X,Y) X>Y?:Y;int main()
//{//求a和b的最大值（函数的方式）
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = Max(a, b);//(宏的方式)
//	//max = (a>b?a:b);//即如果a>b,则把a赋给max
//	printf("max = %d\n", max);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址,把a的地址赋给p
//	//printf("%p\n", &a);//%p打印地址
//	//printf("%p\n", p);
//	*p = 20;//*---解引用操作符
//	printf("a = %d\n", a);
//	//有一种变量是用来存放地址的---指针变量
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
}//指针大小在32位平台是4个字节，64位平台是8个字节