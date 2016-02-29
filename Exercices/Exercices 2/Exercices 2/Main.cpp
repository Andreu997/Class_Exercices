#include <stdio.h>

int main(){

	{
		printf("Ex 1\nChoose 2 numbers for doing the product ");
		int n1, n2, n3 = 0;
		scanf_s("%d %d", &n1, &n2);
		int count = n1;
		getchar();
		while (count--){
			n3 += n2;
		}
		printf("\nThe product of %d and %d is %d", n1, n2, n3);
		getchar();
	}

	{
	printf("Ex 2\nChoose 10 numbers ");
	int num = 10, minorn = 0;
	for (int n1; 0 < num; num--){
		scanf_s("%d", &n1);
		getchar();
		if (n1 < minorn)
			minorn = n1;
	}
	printf("\nThe minor number is %d", minorn);
	getchar();
}

	{
		printf("Ex 3\nChoose a number ");
		int n1, answer = 0;
		scanf_s("%d", &n1);
		getchar();
		do{
			printf("\nYour number is '%d' what do you want to do with it? \n1- increment  \n2- decrement  \n3- ^2 \n 4- exit\n", n1);
			scanf_s("%d", &answer);
			getchar();
			switch (answer){
			case 1: n1++; continue;
			case 2: n1--; continue;
			case 3: n1 *= n1; continue;
			case 4: continue;
			default: printf("\nthis is not a valid option!");
			}

		} while (answer != 4);
	}

	return 0;
}