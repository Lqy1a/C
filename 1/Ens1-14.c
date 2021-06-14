#include <stdio.h>

int main(){
  int ascii[128];
  int c;
  int count;
  int i,j,k;
  for(i = 0; i < 128; ++i){
    ascii[i] = 0;
  }

  while((c = getchar()) != EOF){
    ascii[c] += 1;
  }
  for(j = 0; j< 128; ++j){
    if(ascii[j] > 0){
      count = ascii[j];
      printf("\n%c:", j);
      for(k = 0; k < count; k++){
        printf("*");
      }
      printf("\n");
    }
  }
}
