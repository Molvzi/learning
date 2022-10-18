#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char*));//类型大小8  
//	printf("%d\n", sizeof(short*));//
//	printf("%d\n", sizeof(int*));//
//	printf("%d\n", sizeof(double*));//
//

	//double d = 3.14;
	//double* pd = &d;
	//printf("%d\n", sizeof(pd));//32为为4，64位为8

	//*pd = 5.5;
	//printf("%lf\n", d);
	//printf("%lf\n", *pd);
	//int a = 10;//申请了4个字节的空间
	////printf("%p\n", &a);
	//int* p = &a;//p是一个变量---指针变量
	////printf("%p\n", p);
	//*p = 20;//*---解引用操作符或/间接访问操作符
	//printf("a = %d\n", a);

	//return 0;
//}



//结构体
//char int double.....
//人 = 3.14
//‘w’
//书----复杂对象
//
//名字+身高+年龄....
//书名+作者.....
//复杂对象----结构体--我们自己创造出来的一种类型


#include <string.h>
//创建一个结构体类型-创建一个该类型的结构体变量
struct Book
{ 
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型--
	struct Book b1 = {"C语言程序设计", 55};
	strcpy(b1.name, "C++");//strcpy--string copy--字符串拷贝--库函数--string.h
	printf("%s\n", b1.name);

	//printf("书名：%s\n", b1.name);//%s--打印字符串，%c--打印单字符
	//printf("价格：%d\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d\n", b1.price);
	//return 0;

	//struct Book b1 = { "C语言程序设计", 55 };
	//struct Book* pb = &b1;
	//利用pb打印出我的书名和价格
	// .----结构体变量.成员
	// ->---结构体指针->成员
	// 
	// 
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);

	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
}