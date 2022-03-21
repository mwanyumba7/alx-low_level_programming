#include <stdio.h>
/*#include "holberton.h"*/
void reset_to_98(int *n);
/**
 * main: prints an integer
 * @n: variable of type integer
 *
 * Return: Always 0
 */
int main(void)
{
  int n, *m;
  n = 402;
  m = &n;
  putchar(n);
  reset_to_98(m);
  putchar(n);
  return (0);
}

/**
 * reset_to_98: prints an integer
 * @*n: pointer variable of type integer
 *
 * Return: void
 */
void reset_to_98(int *n)
{
  *n = 98;
    
}
