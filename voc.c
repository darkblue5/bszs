#include "stdio.h"

int swap(int *a, int *b) {

	int tmp = *a;
	*a = *b;
	*b = tmp;

	return 0;
}

int main(int, int)
{

	return 0;
}
