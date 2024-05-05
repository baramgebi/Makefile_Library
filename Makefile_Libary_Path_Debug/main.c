#include <stdio.h> 
#include "funktion1.h" 
#include "funktion2.h" 

int main(int argc, char** argv)
{
	int i=0;

	i=funktion1();
	printf("Main Beispiel %d\n",i);
	
	i=funktion2();
	printf("Main Beispiel %d\n",i);

	return 0;
}

