#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 500

struct BigNumber {
  int digit;
  struct BigNumber *next;
};

typedef struct BigNumber BigNumber;

int main ()
{
  //Collecting data
  char *in_str;
  in_str = malloc(500*sizeof(char));
  scanf("%s",in_str);

  
  int current_value;
  BigNumber *current;
  BigNumber *prev = NULL;
  
  for(int i=0;i<500;i++){
    if(in_str[i] == '\0'){
      break;
    }
    current_value = in_str[i] - '0';

    current = malloc(sizeof(BigNumber));
    current->digit = current_value;
    current->next = prev;
    prev = current; 
  }

  while(current != NULL){
    printf("%d", current->digit);
    current = current->next;
  }

  
  free(in_str);
  getchar();
  getchar();
  return 0;
}
