/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int  avg, mark1, mark2;
   /* avg = average of the marks*/
   
      printf("Enter the marks of subject 1: ");
      scanf("%d", &mark1);
      printf("Enter the marks of subject 2: ");
      scanf("%d", &mark2);
   
   avg = (mark1 + mark2)/2;
   
   printf("Your average mark is: %d", avg);
  
  return 0;
}

