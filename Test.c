#include <stdio.h>
int callmeFunc(char *string);
int callmeFunc1(char *string);

int callmeFunc(char *string)
{
	printf("Value =%s\n",string);
	return 0;
}

int callmeFunc1(int number)
{
	printf("Number is  =%n\n",number);
	return 0;
}

int main()
{
	//commenting out as this function is not defined
	callmeFunc("i am not defined");
	printf("Hello world\n");
	return 0;
}
