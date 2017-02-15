#include <stdio.h>
#include <math.h>


int main(){

  int burr;
  printf("Ge burrsiffran: ");
  scanf("%d", &burr);
  printf("Siffran är: %d", burr);
  getchar();
  return 0;

}



/*
int main(){
  int star_amount;
  for(double x=0;x<=6.3;x=x+0.3){
    star_amount = round(30 + (15 * sin(x)));
    for(int i=0;i<star_amount;i++){
      putchar('x');
    }
    putchar('\n');
  }
  return 0;

  }*/


