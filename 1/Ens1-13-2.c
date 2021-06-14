#include <stdio.h>

#define IN  0
#define OUT 1
int main(){
  int wordsize[10];
  int c;
  int i,j,k,l,m;
  int wordstatus;
  wordstatus = OUT;
  i = 0;
  for(j = 0; j < 10; j++){
    wordsize[j] = 0;
  }

  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\t' || c == '\n'){
      if(wordstatus == IN){
        if(i <= 9){
          wordsize[i] += 1;
        }else{
          wordsize[9] += 1;
        }
        wordstatus = OUT;
        i = 0;
      }
    }else{
      wordstatus = IN;
      i += 1;
    }
  }

  int output[50];
  for(k = 0; k < 50; k++){
    output[k] = 0;
  }

  for(l = 0; l < 10; l++){
    if(wordsize[l] >= 5){
      output[l] = 1;
    }
    if(wordsize[l] >= 4){
      output[10 + l] = 1;
    }
    if(wordsize[l] >= 3){
      output[20 + l] = 1;
    }
    if(wordsize[l] >= 2){
      output[30 + l] = 1;
    }
    if(wordsize[l] >= 1){
      output[40 + l] = 1;
    }
  }

  for(m = 0; m < 50; m++){
    if(output[m] == 1){
      printf("□");
    }else{
      printf(" ");
    }
    if((m % 10) == 9){
      printf("\n");
    }
  }
  printf("0123456789\n");
}