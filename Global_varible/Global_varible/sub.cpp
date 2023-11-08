#define _CRT_SECURE_NO_WARNINGS 1

//定义一个全局变量

static int g_val = 2029;//如果这里有static则test文件中不能再使用这个变量

int Add(int x, int y)//如果这里有static则test文件中不能再使用这个变量
{
	return x + y;
}