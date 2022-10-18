#define _CRT_SECURE_NO_WARNINGS 1 
int g_val = 2020;//定义为全局变量（若在前加static则无法全局使用）

//定义一个函数
int Add(int x, int y)
{
	int z = x + y;
	return z;
}