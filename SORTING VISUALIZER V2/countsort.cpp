#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "countsort.h"


long long time_c;
char str1[3];
void change(int i,int x, int y)
{

    int x1=10,y1 =10;
    setcolor(RED);
    outtextxy(x1,y1, "COUNT SORT : O(n)" );
    int size=500;
    setcolor(GREEN);
    line(i,size,i,size-x);
    setcolor(BLACK);
    line(i, size, i, size-x);
    delay(100);
    setcolor(RED);
    line(i, size, i, size - y);
    delay(10);

}

int findMax(int A[],int n)
{
 int max=INT32_MIN;
 int i;
 for(i=0;i<n;i++)
 {
 if(A[i]>max)
 max=A[i];
 }
 return max;
}

void CountSort(int A[],int n)
{

 setcolor(RED);
 outtextxy(10,30,"Time");
 int gap=4;
 int i,j,max,*C;

 max=findMax(A,n);

 C=(int *)malloc(sizeof(int)*(max+1));

 for(i=0;i<max+1;i++)
 {
    C[i]=0;
 }
 for(i=0;i<n;i++)
 {
    C[A[i]]++;
 }

 i=0;j=0;
 while(j<max+1)
 {
    if(C[j]>0)
    {
        time_c++;
        setcolor(WHITE);
        sprintf(str1,"%ld",time_c);
        outtextxy(60,30,str1);
        int temp=A[i];
        A[i]=j; //i for original array // j for count array
        change(gap*i+1,temp,j);
        i++;
        C[j]--;
    }
 else
    j++;
 }
}
