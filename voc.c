#include "stdio.h"

int swap(int *a, int *b) {

	int tmp = *a;
	*a = *b;
	*b = tmp;

	return 0;
}

int min(int a, int b) {
	return a<b ? a : b;	
}

int main(int, int)
{

	return 0;
}
