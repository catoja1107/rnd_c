#include <stdio.h>

int main()
{
	int i=1,j=2,k=3;
	printf("Input phone number XXX-XXX-XXXX: ");
	scanf("%3d-%3d-%4d", &i, &j, &k);
	printf("(%d)%d-%d\n", i, j, k);
	return 0;
}
