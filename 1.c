//#include <stdio.h>

//int main()//int--整型
//{
//	printf("hello world\n");
//	return 0;
//}

//#include<stdio.h>

//char-字符类型
//int main()
//{
	//char ch = 'A';
	//printf("%c\n", ch);//%c--打印字符格式的数据  %p--以地址的形式打印  %x--打印16进制数字 %o,,,,
	//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int age = 20;
//printf("%d\n", age);//%d--打印整型十进制数据  %f--打印浮点数字--打印小数
//return 0; 
//}

//short int--短整型
//long--长整型
//#include <stdio.h>

//int main()
//{
	//long num = 100;
	//printf("%d\n", num);
	//return 0;
//}

//#include <stdio.h>
//int main()
//{
	//float f = 5.0;
	//printf("%f\n", f);
	//return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
	//printf("%d\n", sizeof(char));//1字节               bit--比特位
	//printf("%d\n", sizeof(short));//2字节              byte--字节   一字节=8个比特位大小
	//printf("%d\n", sizeof(int));//4字节           
	//printf("%d\n", sizeof(long));//4\8字节
	//printf("%d\n", sizeof(long long));//8字节
	//printf("%d\n", sizeof(float));//4字节
	//printf("%d\n", sizeof(double));//8字节

	//return 0;
//}

//#include <stdio.h>
//int main()
//{
//	short age = 20;//向内存申请2个字节=16个比特位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数
//	return 0;
//}

//#include<stdio.h>
//int a = 20;//全局变量--定义在代码块（{})之外的变量  //全局变量的作用域是整个工程
//int main()
//{
//	int a1 = 10;//局部变量--定义在代码块（{})之内的变量
//	printf("%d\n", a);
//	return 0;//局部变量和全局变量的名字建议不要相同--容易误会，产生bug   //当局部变量和全局变量的名字相同的时候，局部变量优先
//}

//#include<stdio.h>
//int main()//计算2个数的和
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//c语言语法规定，变量要定义在当前代码块的最前面
//	scanf_s("%d%d", &num1, &num2);//输入数据--使用输入函数scanf   //取地址符号&
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int global = 2020;
//
//void test()
//{
//	printf("test()-- %d\n", global);
//}
//int main()
//{
//	test(); 
//}

//#include <stdio.h>
//int main()
//{
//	extern int g_val;//未声明的标识符//声明extern外部符号的  //见sum.c代码
//	printf("g_val = %d\n", g_val);
//	return 0;
//}