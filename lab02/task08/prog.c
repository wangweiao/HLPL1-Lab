#include <stdio.h>

int main() {
	int n = 0, p = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &p);
		switch (p/10) {
			case 10: 
			case 9:
			case 8: printf("jeles\n"); break;
			case 7: printf("jo\n"); break;
			case 6: printf("kozepes\n"); break;
			case 5: printf("elegseges\n"); break;
			case 4:
			case 3:
			case 2:
			case 1:
			case 0: printf("elegtelen\n"); break;
			default: printf("Error!\n");
		}
	}
	return 0;
}
