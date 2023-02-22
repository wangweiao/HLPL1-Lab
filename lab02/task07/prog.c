#include <stdio.h>
#include <math.h> //gcc prog.c -lm -o prog
#include <stdbool.h> //contains boolean type and values introduced in C99

int main() {
	int num = 0, i = 0;
	bool flag = true;
	scanf("%d", &num);
	
	if (num == 1) flag = false;
	
	for (i = 2; i <= sqrt(num); i++)
		if (num % i == 0) 
			flag = false;
	
	if (flag) printf("IGEN\n");
	else printf("NEM\n");

	return 0;
}
