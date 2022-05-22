#include <graphics.h>
#include "selection.h"

char str3[3];
long long comparison=0;
void swap_colors(int i, int j, int x, int y)
{

  int x1=10,y1 =30;
  setcolor(YELLOW);
  outtextxy(x1,y1, "SELECTION SORT : NOT ADAPTIVE AND STABLE" );
  outtextxy(10,10,"O(n^2)");
  int size = 500;
  setcolor(WHITE);
  line(j, size, j, size - y);
  delay(50);
  setcolor(BLACK);
  line(j, size, j, size - y);

  setcolor(YELLOW);
  line(j, size, j, size - x);

  setcolor(BLACK);
  line(i, size, i, size - x);

  setcolor(WHITE);
  line(i, size, i, size - y);

  delay(50);
  setcolor(YELLOW);
  line(i, size, i, size - y);
}

void selectionsort(int numbers[], int width, int gap)
{
  setcolor(YELLOW);
  outtextxy(10,50,"comp:");
  int temp;
  for (int i = 0; i < width - 1; i++)
  {

    int k = i;

    for (int j = i + 1; j < width; j++)
    {
      if (numbers[j] < numbers[k])
      {
        comparison++;
        setcolor(WHITE);
        sprintf(str3,"%ld",comparison);
        outtextxy(70,50,str3);
        k = j;
      }
    }
    comparison++;
    setcolor(WHITE);
    sprintf(str3,"%ld",comparison);
    outtextxy(70,50,str3);

    temp = numbers[k];
    numbers[k] = numbers[i];
    numbers[i] = temp;

    swap_colors(gap * i + 1,
                gap * (k) + 1,
                numbers[k],
                numbers[i]);
  }
}
