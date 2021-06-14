#include <stdio.h>
int main(void)
{
  float selsius;
  int lower, upper, step;

  lower = 300;
  upper = 0;
  step = 20;

  selsius = lower;
  while(selsius >= upper){
    printf("%3.0f %6.1f\n", selsius, ((9.0/5.0) * selsius + 32.0));
    selsius -= step;
  }
}