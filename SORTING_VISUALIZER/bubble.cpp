
#include <graphics.h>
#include "bubble.h"

void swap_lines(int i, int j, int x, int y)
{

  int width = 500;
  setcolor(WHITE);
  line(i, width, i, width - x);
  setcolor(BLACK);
  line(i, width, i, width - x);
  setcolor(RED);
  line(i, width, i, width - y);
  setcolor(WHITE);
  line(j, width, j, width - y);
  setcolor(BLACK);
  line(j, width, j, width - y);
  setcolor(RED);
  line(j, width, j, width - x);
}

void bubblesort(int numbers[], int width, int gap)
{
  int temp, i, j;

  for (i = 1; i < width; i++)
  {
    for (j = 0; j < width - i; j++)
    {
      if (numbers[j] > numbers[j + 1])
      {
        temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;

        swap_lines(gap * j + 1,
             gap * (j + 1) + 1,
             numbers[j + 1],
             numbers[j]);
      }
    }
  }
}
