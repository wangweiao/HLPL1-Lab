#include <stdio.h>

int main() 
{
	int a = 0, b = 0;
	char op = '+';
	const int true = 1, false = 0;
	while (true)
	{
		scanf("%d %c %d", &a, &op, &b);
	
		if (a == 0 || b == 0)
		{
			break;
		}
		
		
		switch (op)
		{
			case '+': printf("%d\n", a+b); break;
			case '-': printf("%d\n", a-b); break;
			case '*': printf("%d\n", a*b); break;
			case '/': printf("%d\n", a/b); break;
			case '%': printf("%d\n", a%b); break;
			default: printf("Error!\n");
		}
	}
	return 0;
}
