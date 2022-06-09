#include <stdio.h>

char* mystrcpy(char* strDest, const char* strSrc);

int main (void)
{
	char strSrc[60] = "Lab Test";
	char strDest[60] = "";

	mystrcpy (strDest, strSrc);
	
	printf("Copied string: %s\n", strDest);
}

char* mystrcpy (char* strDest, const char* strSrc)
{
	int i;
	for(i=0; strSrc[i]!='\0'; i++)
	{
		strDest[i] = strSrc[i];
	}	
	strDest[i]='\0';
	return strDest;
}
