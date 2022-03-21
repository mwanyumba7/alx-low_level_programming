#include "holberton.h"
#include <stdio.h>
void swap_int(int *a, int *b);
/**
 * main: prints outs integers
 * @a: variable of type integer
 * @b: variable of type integer
 * @*n: Pointer to a
 * @*m: Pointer to b
 *
 * Return: Always 0
 */
int main(void)
{
  int a,b, *n,*m;
  a = 98;
  b = 42;
  n=&a;
  m=&b;
    
  printf("a=%d, \t",a);
  printf("b=%d \n",b);
  swap_int(n,m);
  printf("a=%d, \t",a);
  printf("b=%d \n",b);
  return (0);
}

/**
 * swap_int: swaps integers
 * @*a: pointer variable of type integer
 * @*b: pointer variable of type integer
 * @tmp: Temporary variable
 *
 * Return: void
 */
void swap_int(int *a,int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
    
}
