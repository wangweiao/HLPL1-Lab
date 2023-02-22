#include <stdio.h>

int gcd(int a, int b) {
	int r = 0;
	r = a % b;
	
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
	
	return b;
}

int main() {
	int a = 0, b = 0, n = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", gcd(a, b));
	}
	
	return 0;
}

