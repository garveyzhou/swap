#include <stdio.h>
#include <string.h>

int main(){
  char source[10] = "Hello";
  char destin[10] = "NICE ONE";
  printf("String 1 = %s\n",source);
  printf("String 2 = %s\n",destin);

  strcpy(destin,source);

  printf("String 1 = %s\n",source);
  printf("String 2 = %s\n",destin);

  return 0;
}
