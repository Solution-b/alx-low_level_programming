#include "Main.h"
#include <string.h>
/**
*  reverse_array - a function that reverses the content of an array of integers
* @a: pointer to int array
* @n: is the number of elements to swap
* Return: nothing
*/

void reverse_array(int *a, int n)
{
  int x, y;

  for (x = 0; x < (n / 2); x++)
  {
    y = a[x];
    a[x] = a[n - x - 1];
    a[n - x - 1] = y;
  }
}