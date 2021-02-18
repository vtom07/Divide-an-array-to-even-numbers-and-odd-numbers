// Targil01.c : This file contains the 'main' function. Program execution begins and ends there.
//


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* TheArray; int* EvenArray; int* OddArray; int size; int sizeEven=0; int sizeOdd=0;
	printf("Insert the  Size of the group :"); 
	scanf("%d",&size);
	TheArray = (int*)malloc(size * sizeof(int));
	EvenArray = (int*)malloc(size * sizeof(int));
	OddArray = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{	
		printf("Enter the number : \n");
		scanf("%d", &TheArray[i]);
		if (TheArray[i] % 2 == 0)
		{
			EvenArray[sizeEven] = TheArray[i];
			sizeEven++;
		}
		else
		{
			OddArray[sizeOdd] = TheArray[i];
			sizeOdd++;
		}
	}
	EvenArray = (int*)realloc (EvenArray,sizeEven * sizeof(int));
	OddArray = (int*)realloc (OddArray,sizeOdd * sizeof(int));
	printf("This is the group of the numbers  you've entered: { ");
	for (int i = 0; i < size; i++)
	{
		printf("%d  ", TheArray[i]);
	}
	printf("} \n his is the group of Even  numbers  you've entered { ");

	for (int i = 0; i < sizeEven; i++)
	{
		printf("%d  ", EvenArray[i]);
	}
	printf("} \n his is the group of Odd  numbers  you've entered { ");
	for (int i = 0; i < sizeOdd; i++)
	{
		printf("%d  ", OddArray[i]);
	}
	printf("} \n");
}