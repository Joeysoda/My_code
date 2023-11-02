#define _CRT_SECURE_NO_WARNINGS 1


int recursiveFib(int n)
{
	if (n <= 0)
	{
		return 0;

	}
	else if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return recursiveFib(n - 1) + recursiveFib(n - 2);
	}
}




int iterativeFib(int n)
{
	int a = 0;
	int b = 1;
	int temp = 0;
	if (n <= 0)
	{
		return a;
	}
	else if (n == 1)
	{
		return b;
	}
	for (int i = 2; i < n; i++)
	{
		temp = a + b;
		a = b;
		b = temp;
	}
	return b;
}