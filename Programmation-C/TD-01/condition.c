#include <stdio.h>
int main() {
	int val = 10050;
	if(val <100) printf("vous êtes bcp trop petit\n");
	else if(val<1000) printf("vous êtes trop petit\n");
	if(val == 1000) printf(" vous êtes dans le mille !!!\n");
	if(val > 10000) printf("vous êtes bcp trop grand ^^\n");
	else if(val >1000) printf("vous êtes trop grand\n");
}

