#include <stdio.h>

int main() {
	char c, lowerLetters[26], upperLetters[26];
	int i, letter[26], count=0;
	for(i = 65; i <= 90; i++){
		lowerLetters[count] = 0;
		upperLetters[count] = 0;
		upperLetters[count] = i;
		lowerLetters[count] = i + 32;
		letter[count] = 0;
		count++;
	}
	while((c = getchar()) != EOF){
		for(i=0; i<sizeof(lowerLetters)/sizeof(char); i++){
			if(lowerLetters[i] == c || upperLetters[i] == c) {
				letter[i]++;
			}
		}
	}
	for(i=0; i<sizeof(letter)/sizeof(int); i++){
		printf("Letter %c or %c appears %d times\n", lowerLetters[i], upperLetters[i], letter[i]);
	}
	return 0;
}
