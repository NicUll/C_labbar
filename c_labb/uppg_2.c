#include <stdio.h>

int main(){
  int i;
  int star_amount;
  printf("Antal stjärnor: ");
  scanf("%d", &star_amount);
  for (i=1;i<=star_amount;i=i+1){
    putchar('*');
  }
  putchar('\n');
  return 0;
}

