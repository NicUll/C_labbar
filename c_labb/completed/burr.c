#include <stdio.h>


int main(){
  int burr;
  printf("Ge burrsiffran: ");
  scanf("%d", &burr);
  for(int i=1;i<100;i++){
    if(i%burr == 0 || i%10 == burr || i/10 == burr){
      printf("burr ");
    }
    else{
      printf("%d ", i);
    }
  }
  putchar('\n');
  return 0;
}





