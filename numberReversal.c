#include <stdio.h>

int rev(int num)
{
	int rev_num = 0;
	for ( rev_num = 0 ; num > 0 ; num/=10) 
	rev_num = rev_num*10 + num%10;

return rev_num;
}

int main()
{
	int num;
	printf("Please input num: ");
	/* truncated to 9 digits to prevent buffer overflow of 4 byte int */
	scanf("%9d", &num);
	printf("Result is %d\n", rev(num));
	return 0;
}

