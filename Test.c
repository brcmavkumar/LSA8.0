#include <stdio.h>
int callmeFunc(char *string)
{
	printf("Value =%s\n",string);
}
int main()
{
	//commenting out as this function is not defined
	callmeFunc("i am not defined");
	printf("Hello world\n");
	return 0;
}
