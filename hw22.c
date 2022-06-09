#include <stdio.h>

float main()
{
float height = 100;
float bounces = 10;
for ( height = 100; bounces > 0; bounces-- )
	height/=2;

printf("Height of 10th bounce: %f meters\n", height);
return 0;
}

