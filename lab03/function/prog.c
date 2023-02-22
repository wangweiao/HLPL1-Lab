#include <stdio.h>

int echo(int n) {
	return n;
}

int main() {
	int n = 0, num = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		printf("%d\n", echo(num));
	}

	return 0;
}
