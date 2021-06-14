#include <stdio.h>

#define IN  0
#define OUT 1

int main(){
  int nowstatus = OUT;
  int c;
  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\t' || c == '\n'){
      if(nowstatus == IN){
        printf("\n");
        nowstatus = OUT;
      }
    }
    else {
      nowstatus = IN;
      putchar(c);
    }
  }
}