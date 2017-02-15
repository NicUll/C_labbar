#include <stdio.h>

int main(){
  int i;
  int star_amount;
  printf("Antal stjärnor: ");
  while(scanf("%d",&star_amount)==1){
    
    for (i = 1; i <= star_amount; i = i + 1)
    	putchar ('*');
    putchar ('\n');
    printf("Antal stjärnor: ");
  }
  putchar('\n');
  return 0;
}

