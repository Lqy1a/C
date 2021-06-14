/*Undefined symbols for architecture x86_64:
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/
#include <stdio.h>
int main (void)
{
    int x = 3.14;
    printf("%d",x);
    return 0;
}