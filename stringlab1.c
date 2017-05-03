#include <stdio.h>
#include <string.h>
#include <ctype.h>

void changeRegister(char * stringX)
{
  for (int i = 0; i < (int)strlen(stringX); i++) {
    if (islower(stringX[i])) stringX[i] = toupper(stringX[i]);
    else stringX[i] = tolower(stringX[i]);
  }
}

int main()
{
  char stringA[256];
  printf("Your input: ");
  fgets(stringA, 256, stdin);
  changeRegister(stringA);
  printf("Output: %s\n", stringA);

  return 0;
}
