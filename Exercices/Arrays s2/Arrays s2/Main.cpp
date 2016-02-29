#include <stdio.h>


void print(int array[], int size){
	for (int i = 0; i < size; ++i)
		printf("%d ", array[i]);
	array[0] += 1;
}

int main(){

	int x[4] = { 0, 2, 2, 5 };
	print(x, 4);
	printf("\n");
	print(x, 4);
	getchar();
	return 0;
}