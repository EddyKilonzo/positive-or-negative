#include <stdio.h>
 
int main() {
  //declaring 
  int numb1, numb2, numb3;
  //input data
  printf("Enter first number:");
  scanf("%d", &numb1);
  printf("Enter second number:");
  scanf("%d", &numb2);
  printf("Enter third number:");
  scanf("%d", &numb3);

  //checking through all numbers

   if(numb1 > numb2 && numb1 > numb2) {
   printf("%d is the largest number",numb1);
   } else if(numb2 > numb1 && numb2 > numb3) {
    printf("%d is the largest number ",numb2);
   } else {
   printf("%d is the  largest number",numb3);
   }
   return 0;
}