#include <stdio.h>

int C(int n, int k) 
{
	if (k==0 || k==n)
		return 1;
	else if (k > n)
		return 0;
	else
		return C(n-1,k-1)+C(n-1,k);
}

int main() 
{	
	int n, k;

	FILE *cache;
	cache=fopen("cache", "a");

	printf("Enter n and k values, separated by space: ");
	scanf("%i %i", &n, &k);
	printf("C(%d,%d)=%d\n", n, k, C(n,k));
	fprintf(cache, "C(%d,%d)=%d\n", n, k, C(n,k));
}
