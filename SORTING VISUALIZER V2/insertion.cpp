#include <graphics.h>
#include "insertion.h"

int s_c=0;
long long counter=0;
char s[3];
void replace(int i, int j, int x, int y)
{

    int x1=10,y1 =10;
    setcolor(GREEN);
    outtextxy(x1,y1, "INSERTION SORT : O(n^2)");
    int size=500;
    setcolor(GREEN);
    line(i, size, i, size - x);
    setcolor(BLACK);
    line(i, size, i, size - x);
    setcolor(RED);
    line(i, size, i, size - y);
    setcolor(BLACK);
    line(j,size,j,size-y);
    delay(10);

}

void put(int k,int v){
    int size=500;
    setcolor(RED);
    line(k,size,k,size-v);
}

void insertionsort(int arr[], int n)
{
    setcolor(GREEN);
    outtextxy(10,30,"Comp:");
    int x1=10,y1 =10;
    setcolor(WHITE);
    outtextxy(x1,y1, "SELECTION SORT" );
    int gap=4;
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            counter++;
            setcolor(WHITE);
            sprintf(s,"%ld",counter);
            outtextxy(70,30,s);
            arr[j + 1] = arr[j];
            replace (gap*(j+1)+1,gap*j+1,arr[j+1],arr[j]);
            j = j - 1;
        }
        arr[j + 1] = key;
        put(gap*(j+1)+1,key);

    }
}


