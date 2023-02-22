#include <stdio.h>

int main() {
	int a = 0, b = 0, r = 0;
	scanf("%d %d", &a, &b);
	r = a % b;
	
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
	
	if (b == 1) {
		printf("IGEN\n");
	} else {
		printf("NEM\n");
	}
	
	return 0;
}
