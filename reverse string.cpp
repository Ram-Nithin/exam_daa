#include <stdio.h>
#include <string.h>
int main()
{
	char n[50];
	printf("Enter the string:");
	scanf("%s",n);
	printf("Reverse:%s",strrev(n));
}