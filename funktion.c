#include <stdio.h>
#include "funktion.h"

int k=10;

int funktion(void)
{
	static int j=1;

	printf("Value of global Variable j : %d\n",j);
	j++;

	return j;
}
