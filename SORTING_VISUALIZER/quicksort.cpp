
#include <graphics.h>
#include "quicksort.h"

void swap_line(int i, int j, int x, int y)
{
  int width = 500;
  setcolor(WHITE);
  line(i, width, i, width - x);
  delay(20);
  setcolor(BLACK);
  line(i, width, i, width - x);
  setcolor(GREEN);
  line(i, width, i, width - y);

  setcolor(WHITE);
  line(j, width, j, width - y);
  setcolor(BLACK);
  line(j, width, j, width - y);
  delay(20);
  setcolor(GREEN);
  line(j, width, j, width - x);
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
int partition(int A[], int l, int h)
{
  int gap = 4;
  int pivot = A[l];
  int i = l, j = h;
  do
  {
    do
    {
      i++;
    } while (A[i] <= pivot);
    do
    {
      j--;
    } while (A[j] > pivot);

    if (i < j)
    {
      swap(&A[i], &A[j]);
      swap_line(gap * i + 1, gap * (j) + 1, A[j], A[i]);
    }
  } while (i < j);

  swap(&A[l], &A[j]);
  swap_line(gap * l + 1, gap * j + 1, A[j], A[l]);
  return j;
}
void QuickSort(int A[], int l, int h)
{
  int j;
  if (l < h)
  {
    j = partition(A, l, h);
    QuickSort(A, l, j);
    QuickSort(A, j + 1, h);
  }
}


