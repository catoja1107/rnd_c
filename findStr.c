#include <stdio.h>
#include <string.h>

int main(void){

	char smallest_word[20]="©";
	char largest_word[20]="";
	char word[20]="";

	while(1) {
		int i = 0;
		char ch;

		strcpy(word, "");		

		printf("Enter word: ");
		while(i<19 && (ch = getchar()) != '\n' && ch !=EOF)
		{
			word[i++] = ch;
		}
		word[i] = '\0';
		if (strlen(word) == 4)
		{
			break;
		}
		if (strcmp(smallest_word, word) > 0)
		{
			strcpy(smallest_word, word);	
		}
		if (strcmp(word, largest_word) > 0)
		{
			strcpy(largest_word, word);
		}
	}	
	printf("Small: %s\n", smallest_word);
	printf("Large: %s\n", largest_word);
}

