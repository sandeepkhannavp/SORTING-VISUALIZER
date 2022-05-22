#include <graphics.h>
#include "quicksort.h"

long long partition_n=0;
long long compare=0;
char string1[3];
char string2[3];
void swap_line (int i, int j, int x, int y)
{
  int x1=10,y1 =10;
  setcolor(GREEN);
  outtextxy(x1,y1, "QUICK SORT : O(nlogn)" );
  int width=500;
  setcolor(WHITE);
  line(i, width, i, width - x);
  delay(50);
  setcolor(BLACK);
  line(i, width, i, width - x);
  setcolor(GREEN);
  line(i, width, i, width - y);

  setcolor(WHITE);
  line(j, width, j, width - y);
  setcolor(BLACK);
  line(j, width, j, width - y);
  delay(50);
  setcolor(GREEN);
  line(j, width, j, width - x);
}

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
int partition(int A[],int l,int h)
{
 partition_n++;
 setcolor(WHITE);
 sprintf(string1,"%ld",partition_n);
 outtextxy(80,30,string1);
 int gap=4;
 int pivot=A[l];
 int i=l,j=h;
 do
 {
 do{
  i++;
  compare++;
  setcolor(WHITE);
  sprintf(string2,"%ld",compare);
  outtextxy(80,60,string2);
 }while(A[i]<=pivot);

 do{
  j--;
   compare++;
  setcolor(WHITE);
  sprintf(string2,"%ld",compare);
  outtextxy(80,60,string2);

 }while(A[j]>pivot);


 if(i<j){
    compare++;
    setcolor(WHITE);
    sprintf(string2,"%ld",compare);
    outtextxy(80,60,string2);
    swap(&A[i],&A[j]);
    swap_line(gap*i+1 , gap*(j)+1 , A[j] , A[i] );
 }
 }while(i<j);

 swap(&A[l],&A[j]);
 swap_line(gap*l+1 , gap*j+1 , A[j] , A[l]);
 return j;
}
void QuickSort(int A[],int l,int h)
{
 outtextxy(10,30,"Partition:");
 outtextxy(10,60,"Comp:");
 int j;
 if(l<h)
 {
 j=partition(A,l,h);
 QuickSort(A,l,j);
 QuickSort(A,j+1,h);
 }
}










