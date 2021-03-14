#include <stdio.h>
#include <math.h>

int main() {

	float A[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
   
	double average;
   
	int i;

	for (i = 0; i < 10; i++) {
   
		average += sqrt(A[i]) / 10;
      
	}
	printf("The average of the squareroots is %lf\n", average);
   
	return 0;
   
}