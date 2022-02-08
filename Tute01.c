/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float total,average;
  printf("Enter your mark:");
  scanf("%d",&mark1);
  printf("Enter your mark:");
  scanf("%d",&mark2);

  total= mark1+mark2;
  average= total/2;
  printf("average is=%.2f",average);
  
  return 0;
}

