#include <graphics.h>
#include "shell.h"

long long comp_s=0;
char shell_str[3];
void replace_s(int i, int x, int y)
{

    int x1=10,y1 =10;
    setcolor(GREEN);
    outtextxy(x1,y1, "SHELL SORT : O(nlogn) or O(n^3/2) or O(n^5/3)");
    setcolor(WHITE);
    outtextxy(10,30, "ADAPTIVE AND IN-PLACE SORT");
    int size=500;
    setcolor(GREEN);
    line(i, size, i, size - x);
    setcolor(BLACK);
    line(i, size, i, size - x);
    setcolor(RED);
    line(i, size, i, size - y);
    delay(10);

}

void ShellSort(int A[],int n)
{
 setcolor(GREEN);
 outtextxy(10,50, "Comp: ");
 int gap,i,j,temp;
 int o_gap=4;
 for(gap=n/2;gap>=1;gap/=2)
 {
 for(i=gap;i<n;i++)
 {
    temp=A[i];
    j=i-gap;
    while(j>=0 && A[j]>temp)
    {
        comp_s++;
        setcolor(WHITE);
        sprintf(shell_str,"%ld",comp_s);
        outtextxy(80,50,shell_str);
        int temp2=A[j+gap];
        A[j+gap]=A[j];
        replace_s(o_gap*(j+gap)+1 , temp2 , A[j]);
        j=j-gap;
    }
    replace_s(o_gap*(j+gap)+1 , A[j+gap] ,temp );
    A[j+gap]=temp;

 }
 }
}

