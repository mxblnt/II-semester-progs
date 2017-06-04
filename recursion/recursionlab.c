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
	int n, k, res, resArray[20][20];

	FILE *cache;
	cache=fopen("cache", "r+w");

	printf("Enter n and k values, separated by space (max 20): ");
	scanf("%i %i", &n, &k);

	if (n > 20 || k > 20) {
		printf("n or k is greater than 20");
		return 0;
	}

	for (int i=0;i<20;i++)
		for (int j=0;j<20;j++)
			fscanf(cache, "%i ", &resArray[i][j]);
	rewind(cache);

	if (resArray[n][k] == 0) {
		res=C(n,k);
		resArray[n][k]=res;
		printf("C(%d,%d)=%d\n", n, k, res);
	}
	else {
		res=resArray[n][k];
		printf("C(%d,%d)=%d (from cache)\n", n, k, res);
	}

	for (int i=0;i<20;i++) {
		for (int j=0;j<20;j++)
			fprintf(cache, "%i ", resArray[i][j]);
		fputc('\n', cache);
	}
	
	return 0;
}
