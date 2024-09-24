
/* pointer basics file */
#include <stdio.h>
#include <string.h>
#define SIZE 5

int addUsingPointers(int* a, int* b);
void swap(int* a, int* b);
void squareInteger(int* x);

int main() {
	/* main starts here */
	printf("******* PointerBasics ******\n\n");

	int myVariable = 15;
	int* pnumber = &myVariable;

	int* pnumberNull = NULL;

	printf("The pnumber has the value %p\n",pnumber);
	printf("The pnumberNull has the value %p\n", pnumberNull);
	printf("The number stored at the address %p is %d\n", pnumber,myVariable);
	printf("The number stored at the address %p is %d\n", pnumber, *pnumber);

	int iVarA = 3, iVarB = 5, iResult =0;

	iResult = addUsingPointers(&iVarA, &iVarB);

	printf("%d %d\n",iVarA,iVarB);
	swap(&iVarA, &iVarB);
	printf("%d %d\n", iVarA, iVarB);
	
	
	int value = 0;
	int* pvalue = &value;

	printf("Input an integer: ");
	scanf_s("%d", pvalue);
	printf("The double of the value you have entered is %d\n", 2 * value);
	

	squareInteger(&value);

	

	int values[SIZE];
	int* pValues = values;
	
	for (int count = 0; count < SIZE; count++)
	{
		*(pValues + count) = 2 * count;
		printf("values[%d] = %d\n", count, values[count]);
	}

	char multiple[] = "a string";
	char* p = multiple;

	for (int i = 0; i < strnlen(multiple, sizeof(multiple)); i++)
		printf("multiple[%d]=%c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n", i, multiple[i],i, *(p + i), i, &multiple[i],i, p + i);
	

	printf("\n");
	system("pause");
	return 0;
}


