#include<stdio.h>
#include<string.h>

int main()
{
	int k,cnt=0;
	char s1[256], s2[256];
	
	printf("Enter string A:\n");
	fgets(s1, 256, stdin);
	printf("Enter string B:\n");
	fgets(s2, 256, stdin);
	
	int const ls1 = strlen(s1);
	int const ls2 = strlen(s2);
	
	s1[ls1-1]='\0';
	s2[ls2-1]='\0';

	printf("%s %s\n", s1, s2);

	for(int i=0; i<ls1; i++) {
        char tmp[256];
        k=0;
        if(s1[i]==s2[0]){
			int j=i;
            while(s1[j]==s2[k]) {
                tmp[k]=s1[j];
                j++; k++;
            }
			tmp[k]='\0';
			if(strcmp(s2,tmp)==0) cnt++;
        }
    }    

	printf("Number of occurences of B in A: %d", cnt);
}
