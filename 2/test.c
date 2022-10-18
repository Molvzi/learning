#define _CRT_SECURE_NO_WARNINGS 1//加在源文件的第一行

//#include<stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);  //scanf//strcpy//strlen//strcat,,,,是不安全的
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>9
//int main()
//{
//	const int num = 4;//const--常属性  //此时num是const修饰的常变量
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
	//3;	
	//100;
    //3.14;//字面常量
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
	//int arr[n] = {0};
//	n = 20;
//	return 0;
//}

//#include <stdio.h>

//#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {10};
//	printf("%d\n", MAX);
//	return 0;
//}


//枚举常量  //枚举关键--enum
//#include <stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,//MALE,FEMALE,SECRET叫做枚举常量
//};
//int main()
//{
	//enum Sex s = MALE
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}

//#include <stdio.h>
//
//enum Color
//{
//	  RED,
//    YELLOW,
//    BLUE,
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
	//BLUE =6; //err
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";//数组     //"abc"--'a' 'b' 'c''\0'--字符串的结束标志，不算字符串的内容
//	char arr2[] = { 'a', 'b', 'c' , '\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};//'\0' = 0
//	printf("%d\n", strlen(arr1));//strlen--string length--计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("abc\n");//\n--换行
//	return 0;
//}



//\--转义字符
//#include <stdio.h>
//int main()
//{
//	printf("c:\\test\32\\test.c");//\t--水平制表符（类似Tab建）
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//printf("%c\n", '\'');//%c--打印字符
//	printf("%s\n", "\"");//%s--打印字符串
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>

//int main()
//{
	//printf("%d\n", strlen("c:\test\32\test.c"));//32--是两个8进制字符，32作为8进制代表的那个十进制数字，作为ASCII码对应的字符
	//printf("%c\n", '\32');
	//printf("%c\n", '\132');//\ddd为8进制，8进制只有0--7
//	printf("%c\n", '\x61');//\xdd为16进制
//}



//if语句
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0)>: "); 
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;  
//}


//while循环
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码, %d\n", line);
//		line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//	return 0;
//}



//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	int sum = 0;
//	int num1 = 10;
//	int num2 = 20;
//	//int a = 0;
//	//int b = 7;
//	//sum = num1 + num2; 
//	sum = Add(num1, num2);
//	//sum = a + b;
//	//sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//函数
//f(x) = 2*x+1:
//f(x) = x + y;

//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组//0--9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//
//	//printf("%d\n", arr[4]);//用下标的方式访问元素
//	//arr[下标]；
//	//char ch[20];
//	//float arr2[5];
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 5%2;//取模
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//移(2进制)位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节--32bit位
//	//01
//	int b = a << 2;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//（2进制）位操作
//	//& 按位与
//	//| 按位或
//	//^ 按位异或  //异或的计算规律：对应的2进制相同，则为0；相异则为1
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;	 
//
//	printf("%d\n", c);
//	return 0;
//}



////单目操作符
//// 双目操作符
//// 三目操作符
//#include <stdio.h>
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+--双目操作符
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);//！"%d\n", sizeof (arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//10个整型元素的数组
//	int sz = 0;
//	//10*sizeof(int) = 40
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	//个数 = 数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	return 0;
//
//}