#include <stdio.h>

int n_fibonacci(int n) {
	if (n <= 1) return 1;
	else return n_fibonacci(n-1) + n_fibonacci(n-2);
}

int main() {
	int n = 0, num = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		printf("%d\n", n_fibonacci(num));
	}
	
	return 0;
}

