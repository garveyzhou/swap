# include <stdlib.h>
# include <stdio.h>
# include <time.h>

int main(){
  int ary[10];
  srand( time(NULL) );
  int i = 0;
  while(i < 10){
    ary[i] = rand();
    i++;
  }
  ary[9] = 0;
  i = 0;
  while(i < 10){
    printf("ary[%d] = %d\n",i,ary[i]);
    i++;
  }
  int ray[10];
  i = 9;
  while(i >= 0){
    *(ray+i) = *(ary +i);
    printf("ray[%d] = %d\n",i,ray[i]);
    i--;
  }
  return 0;
}
