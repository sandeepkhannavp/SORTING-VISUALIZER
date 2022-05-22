#include <graphics.h>
#include <windows.h>
#include "bubble.h"

long long swap_c=0;
char str[3];
long long comp_c;

void swap(int i, int j, int x, int y)
{
  // Beep(1800,30);
  outtextxy(10,10,"O(n^2)");
  int x1=10,y1 =30;
  setcolor(WHITE);
  outtextxy(x1,y1, "BUBBLE SORT : ADAPTIVE AND STABLE" );
  int width=500;
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

// Bubble sort function
void bubblesort(int numbers[] , int width , int gap )
{
  int temp, i, j;
  for (i = 1; i < width; i++)
  {
    for (j = 0; j < width - i; j++)
    {
      if (numbers[j] > numbers[j + 1])
      {
        comp_c++;
        setcolor(WHITE);
        sprintf(str,"%ld",comp_c);
        outtextxy(70,50,str);
        outtextxy(10,50,"comp:");
        temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
        // As we swapped the last two numbers
        // just swap the lines with the values.
        // This is function call
        // for swapping the lines
        swap(gap * j + 1,
             gap * (j + 1) + 1,
             numbers[j + 1],
             numbers[j]);

      }

    }
  }
}
