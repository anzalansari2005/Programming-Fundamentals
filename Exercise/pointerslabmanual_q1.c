#include<stdio.h>

int main()
{
	long value1 = 200000;
	long value2;
	long *lPtr; //Define the variable lPtr to be a pointer to an object of type long.
	
	lPtr = &value1; //Assign the address of variable value1 to pointer variable lPtr.
	printf("%p\n", &value1); //Print the value of the object pointed to by lPtr. (memory address of value1)
	
	value2 = *lPtr; //Assign the value of the object pointed to by lPtr to variable value2.
	printf("value2: %d\n", value2); //Print the value of value2.
	
	printf("Address of value1: %p\n", &value1); //Print the address of value1.
	printf("Address stored in lPtr: %p", lPtr); //Print the address stored in lPtr. 
	
	/*Is the value printed the same as the address of value1? 
	ans: Yes 	*/
}