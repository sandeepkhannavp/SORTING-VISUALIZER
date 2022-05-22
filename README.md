# SORTING-VISUALIZER

Implementation of sorting visualizer using graphics.h - for (20XT17) C PROGRAMMING LAB @PSG COLLEGE OF TECHNOLOGY

A sorting visualizer written in c++ using its graphics.h library where I have implemented an interface to
Visualize various sorting algorithms including

Here we populate the array initially - you can also add the inout functionality

Menu

![MENU](https://user-images.githubusercontent.com/51514697/169706600-382befbd-34cc-4591-a4d4-44d9d14557f2.png)


INITIAL ARRAY
![POPULATE](https://user-images.githubusercontent.com/51514697/169706616-550a2b87-e4c5-4f2d-80c2-96185e9ef9d5.png)

## 1) BUBBLE SORT:

--> It is an adaptive and stable algorithm with O(n^2) time complexity\
--> For n elements , if you perform K passes , K elements are sorted down - K largest elements - lighter elements move up, heavier moves down\
--> We perform n-1 passes

Execution time - 979.461 seconds

![BUBBLE_SORT](https://user-images.githubusercontent.com/51514697/169706623-236fc4fb-848d-4aa2-a48b-6448255a475a.png)





https://user-images.githubusercontent.com/51514697/169708206-d448ade0-d16b-43a8-b718-c0f627c8e419.mp4



## 2) QUICK SORT:

--> We select an element and find the position, also it works on partitions\
--> Has the average case time complexity of O(nlogn)

Execution time - 175.550 seconds

![QUICK SORT](https://user-images.githubusercontent.com/51514697/169706628-5d9e48dd-73ae-4759-aef0-96b8258b6473.png)




https://user-images.githubusercontent.com/51514697/169708226-442a0f33-1f42-4129-9d88-d8ff25416b26.mp4



## 3) INSERTION SORT:

--> We assume first element is sorted , take out an element insert and sort and we repeat the same process\
--> (n-1) passes , O(n^2) comparisons , O(n^2) number of swaps\
--> Intermediate results are not useful like bubble sort 
--> It is adaptive and stable by nature\

Execution time - 1355.872 seconds

![INSERTION](https://user-images.githubusercontent.com/51514697/169706636-17bdc701-1b0f-493c-9ff6-5b5a71acb7d7.png)



https://user-images.githubusercontent.com/51514697/169708237-4cec0cb3-ed0c-4182-98ea-55169cb88e72.mp4




## 4) SELECTION SORT

--> In k passes , we sort k smaller elements unlike bubble sort where we sort k largest elements\
--> The sort performs minimum number of swaps\
--> It is neither adaptive nor stable - O(n^2) time complexity

Execution time -  81.901 seconds

![SELECTION](https://user-images.githubusercontent.com/51514697/169706645-3175eba0-ae3f-4f63-9a5a-41833a1e614d.png)




https://user-images.githubusercontent.com/51514697/169708243-caefab59-d745-4644-bb90-293bcf689584.mp4




