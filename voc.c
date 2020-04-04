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

int max(int a, int b) {
	return a>b ? a : b;
}

int comp(int a, int b) {
	if (a == b) 
		return 0;
	else
		return -1;
}

int main(int, int)
{

	return 0;
}
