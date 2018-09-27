#include <stdio.h>
#include <string.h>

int main(){
  char source[10] = "Hello";
  char destin[10] = "NICE ONE";
  
  printf("String 1 = %s  Hex: %x\n",source,&source);
  printf("String 2 = %s  Hex: %x\n",destin,&destin);

  strcpy(destin,source);
  printf("String 1 = %s  Hex: %x\n",source,&source);
  printf("String 2 = %s  Hex: %x\n",destin,&destin);

  return 0;
}
