#include <stdio.h>
#include <math.h>


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

}



