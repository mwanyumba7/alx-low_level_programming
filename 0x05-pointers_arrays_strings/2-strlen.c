#include "holberton.h"
#include <stdio.h>
int _strlen(char *s);
/**
 * main: returns lenth of string
 * @*str: Pointer varible of type char
 * @len: length of string of type int
 *
 * Return: Always 0
 */
int main(void)
{
  char *str;
  int len;

  str = "Holberton!";
  len = _strlen(str);
  printf("%d\n", len);
  return (0);
}

/**
 * _strlen: returns lenght of string
 * @*s: pointer variable of type char
 * @*c: counter variable
 *
 * Return: integer value
 */
int _strlen(char *s)
{
  int c = 0;
  while(s[c] != '\0')
    c++;
  return c;
    
}
