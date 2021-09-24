#include <stdio.h>
int main() {
	int val = 3;
	switch(val) {
		case 1:
			printf("hello 1!\n");
			break;
		case 2:
			printf("Hello 2!\n");
			break;
		case 3:
			printf("Hello 3!\n");
			break;
		default:
			printf("Other Hello!\n");
			break;
	}
	return 0;
}

