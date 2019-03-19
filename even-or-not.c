#include <stdio.h>

// check whether a number is even or not

int main () {
 int num;
 printf ("Enter a number to check if it's even\n");
 scanf ("%d", &num);
 
 if (num%2==0)
  printf ("%d is even", num);
 else
  printf ("%d is not even", num);
  
 return 0;
 }
 
 
