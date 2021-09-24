#include <stdio.h>
int main() {
	int grades[3];
	int average;
	grades[0] = 80;
	grades[2] = 90;
	average = (grades[0] + grades[2]) / 2;
	printf("The average of the 3 grades is: %d", average);
	return 0;
}
