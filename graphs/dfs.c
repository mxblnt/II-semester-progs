#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int a[20][20],reach[20],n;

void dfs(int v)
{
	int i;
	reach[v]=1;

	for(i=1;i<=n;i++) {
		if(a[v][i] && !reach[i]) {
			printf("%d->%d\n",v,i);
			dfs(i);
		}
	}
}

int main()
{
	FILE *adjMatrix;
	adjMatrix=fopen("./adjmatrix.txt","r");
	int i,j,count=0,con_count=1;
	
    char temp[400];
    fgets(temp, 400, adjMatrix);
    n=sqrt(strlen(temp)-1);

	for(i=1;i<=n;i++) {
		reach[i]=0;
		for(j=1;j<=n;j++)
		a[i][j]=0;
	}

	printf("\n Adjacency matrix:\n");
	
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			a[i][j]=temp[count] - '0';
			printf("%d", a[i][j]);
			count++;
		}
		printf("\n");
	}
	
	printf("\n DFS result: \n");
	for (i=1;i<=n;i++)
		if (reach[i]==0) {
			printf("Component %d:\n", con_count);
			dfs(i);
			con_count++;
		}
	
	return 0;
}
