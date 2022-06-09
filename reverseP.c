/* reverse.c */
#include<stdio.h>
#define N 50

int main(){
	char arr[N],i;
	char *ch;

	printf("Enter a message: ");
	/* Put code here to get input from user by using getchar() */

	for(ch = &arr[0]; ch < &arr[0] + N; ch++){
		if ((i = getchar()) == '\n') break;
		*ch = i;
	}
	printf("Reversal is: ");
	/* Put code here to print out the reversal by using putchar()*/

	for (ch = ch-1; ch >= &arr[0]; ch--){
        	putchar(*ch);
	}
	printf("\n");
	return 0;
}
