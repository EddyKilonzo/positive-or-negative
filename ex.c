// program to determine if a number is positive or negative
 
#include <stdio.h>
 
int main() {
 //declaring variable 
  double x;

  //input data
  printf("Enter number:...");
  scanf("%lf", &x);

  // checking conditions
  if(x > 0) {
   printf("%lf is positive", x);
  } else if(x < 0) {
   printf("%lf is negative", x);
  } else {
    printf("%lf is zero", x);
  }
return 0;
}