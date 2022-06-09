/* reverse.c */
#include<stdio.h>
#define N 50

int main(){
	int i;
	char arr[N],ch;

	printf("Enter a message: ");
	/* Put code here to get input from user by using getchar() */

	for(i =0; i < N; i++){
		if ((ch = getchar()) == '\n') break;
		arr[i] = ch;
	}
	printf("Reversal is: ");
	/* Put code here to print out the reversal by using putchar()*/

	for (i = i-1; i>= 0; i--){
        	putchar(arr[i]);
	}
	printf("\n");
	return 0;
}
