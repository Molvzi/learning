#define _CRT_SECURE_NO_WARNINGS 1//����Դ�ļ��ĵ�һ��

//#include<stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);  //scanf//strcpy//strlen//strcat,,,,�ǲ���ȫ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>9
//int main()
//{
//	const int num = 4;//const--������  //��ʱnum��const���εĳ�����
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
	//3;	
	//100;
    //3.14;//���泣��
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[n] = {0};
//	n = 20;
//	return 0;
//}

//#include <stdio.h>

//#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {10};
//	printf("%d\n", MAX);
//	return 0;
//}


//ö�ٳ���  //ö�ٹؼ�--enum
//#include <stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,//MALE,FEMALE,SECRET����ö�ٳ���
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
//	char arr1[] = "abc";//����     //"abc"--'a' 'b' 'c''\0'--�ַ����Ľ�����־�������ַ���������
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
//	printf("%d\n", strlen(arr1));//strlen--string length--�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("abc\n");//\n--����
//	return 0;
//}



//\--ת���ַ�
//#include <stdio.h>
//int main()
//{
//	printf("c:\\test\32\\test.c");//\t--ˮƽ�Ʊ��������Tab����
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//printf("%c\n", '\'');//%c--��ӡ�ַ�
//	printf("%s\n", "\"");//%s--��ӡ�ַ���
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>

//int main()
//{
	//printf("%d\n", strlen("c:\test\32\test.c"));//32--������8�����ַ���32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII���Ӧ���ַ�
	//printf("%c\n", '\32');
	//printf("%c\n", '\132');//\dddΪ8���ƣ�8����ֻ��0--7
//	printf("%c\n", '\x61');//\xddΪ16����
//}



//if���
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0)>: "); 
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;  
//}


//whileѭ��
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���, %d\n", line);
//		line++;
//	}
//	if(line>=20000)
//		printf("��offer\n");
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

//����
//f(x) = 2*x+1:
//f(x) = x + y;

//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����//0--9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//
//	//printf("%d\n", arr[4]);//���±�ķ�ʽ����Ԫ��
//	//arr[�±�]��
//	//char ch[20];
//	//float arr2[5];
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 5%2;//ȡģ
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//��(2����)λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�--32bitλ
//	//01
//	int b = a << 2;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//��2���ƣ�λ����
//	//& ��λ��
//	//| ��λ��
//	//^ ��λ���  //���ļ�����ɣ���Ӧ��2������ͬ����Ϊ0��������Ϊ1
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;	 
//
//	printf("%d\n", c);
//	return 0;
//}



////��Ŀ������
//// ˫Ŀ������
//// ��Ŀ������
//#include <stdio.h>
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+--˫Ŀ������
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);//��"%d\n", sizeof (arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//10������Ԫ�ص�����
//	int sz = 0;
//	//10*sizeof(int) = 40
//	printf("%d\n", sizeof(arr));
//	//���������Ԫ�ظ���
//	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	return 0;
//
//}