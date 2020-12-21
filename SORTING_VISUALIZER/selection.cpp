#include <graphics.h>
#include "selection.h"

void swap_colors(int i, int j, int x, int y)
{

  int size = 500;
  setcolor(WHITE);
  line(j, size, j, size - y);
  delay(20);
  setcolor(BLACK);
  line(j, size, j, size - y);

  setcolor(YELLOW);
  line(j, size, j, size - x);

  setcolor(BLACK);
  line(i, size, i, size - x);

  setcolor(WHITE);
  line(i, size, i, size - y);

  delay(20);
  setcolor(YELLOW);
  line(i, size, i, size - y);
}

void selectionsort(int numbers[], int width, int gap)
{
  int temp;
  for (int i = 0; i < width - 1; i++)
  {

    int k = i;

    for (int j = i + 1; j < width; j++)
    {
      if (numbers[j] < numbers[k])
      {
        k = j;
      }
    }

    temp = numbers[k];
    numbers[k] = numbers[i];
    numbers[i] = temp;

    swap_colors(gap * i + 1,
                gap * (k) + 1,
                numbers[k],
                numbers[i]);
  }
}
