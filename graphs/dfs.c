#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int a[20][20],reach[20],n;

void dfs(int v)
{
	int i;
	reach[v]=1;

	for(i=0;i<n;i++) {
		if(a[v][i] && !reach[i]) {
			printf("%d->%d\n",v+1,i+1);
			dfs(i);
		}
	}
}

int main()
{
	FILE *adjMatrix;
	adjMatrix=fopen("./adjmatrix","r");
	int i,j,con_count=1;

	fscanf(adjMatrix, "%i", &n);

	for(i=0;i<n;i++) {
		reach[i]=0;
		for(j=1;j<=n;j++)
		a[i][j]=0;
	}

	printf("\n Adjacency matrix:\n");
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			fscanf(adjMatrix, "%i ", &a[i][j]);
			printf("%d", a[i][j]);
		}
	    printf("\n");
	}
	
	printf("\n DFS result: \n");
	for (i=0;i<n;i++)
		if (reach[i]==0) {
			printf("Component %d:\n", con_count);
			dfs(i);
			con_count++;
		}
	
	return 0;
}
