#include "holberton.h"
#include <stdio.h>
void _puts(char *str);
/**
 * main: prints out a tring
 * @*str: Pointer to a 
 *
 * Return: Always 0
 */
int main(void)
{
  char *str;
  str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
  _puts(str);
  return (0);
}

/**
 * _puts: returns lenght of string
 * @*str: pointer variable of type char
 *
 * Return: 0
 */
void _puts(char *str)
{ 
  int c = -1;
  while(str[c] != sizeof(str[c]))
    {
      c++;
      printf("%c",str[c]);
    }
    
}
