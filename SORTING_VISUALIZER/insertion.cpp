
#include <graphics.h>
#include "insertion.h"

void replace(int i, int j, int x, int y)
{
  int size = 500;
  setcolor(GREEN);
  line(i, size, i, size - x);
  setcolor(BLACK);
  line(i, size, i, size - x);
  setcolor(RED);
  line(i, size, i, size - y);
  setcolor(BLACK);
  line(j, size, j, size - y);
  delay(20);
}

void put(int k, int v)
{
  int size = 500;
  setcolor(RED);
  line(k, size, k, size - v);
  delay(20);
}

void insertionsort(int arr[], int n)
{
  int gap = 4;
  int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      replace(gap * (j + 1) + 1, gap * j + 1, arr[j + 1], arr[j]);
      j = j - 1;
    }
    arr[j + 1] = key;
    put(gap * (j + 1) + 1, key);
  }
}
