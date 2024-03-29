#include <stdio.h>
#include <graphics.h>
#include <windows.h>
#include "bubble.h"
#include "selection.h"
#include "quicksort.h"
#include "insertion.h"
#include "countsort.h"
#include "shell.h"


int main()
{

  printf("-----------------------------------------------------------------------------------------------------------------------\n");
  printf("\n");
  printf("                                                   SORTING VISUALISER                                                   \n");
  printf("-----------------------------------------------------------------------------------------------------------------------\n");


  int numbers[500] = {100, 256, 152, 103, 330, 293, 445, 205, 112, 278, 340, 161, 283, 216, 405, 452, 238, 276, 301, 98, 148, 275, 367, 257, 82, 70, 370, 11, 110, 77, 114, 155, 154, 200, 362, 453, 255, 303, 421, 36, 18, 341, 92, 427, 198, 290, 401, 147, 176, 308, 414, 498, 51, 420, 440, 461, 166, 391, 403, 333, 297, 437, 13, 132, 311, 185, 470, 302, 495, 478, 455, 349, 436, 230, 500, 286, 1, 17, 118, 67, 267, 378, 424, 402, 188, 145, 212, 400, 254, 334, 389, 263, 352, 466, 90, 180, 69, 84, 317, 127, 398, 6, 28, 353, 380, 497, 327, 374, 266, 417, 491, 457, 178, 395, 47, 361, 196, 124, 206, 305, 339, 410, 251, 287, 134, 299, 481, 499, 144, 204, 57, 348, 465, 111, 429, 87, 304, 337, 29, 406, 331, 224, 96, 342, 76, 376, 73, 131, 422, 197, 476, 388, 113, 486, 7, 435, 97, 102, 123, 433, 143, 232, 234, 37, 412, 153, 344, 34, 444, 480, 126, 156, 223, 458, 179, 483, 195, 242, 366, 203, 382, 258, 472, 189, 225, 186, 269, 56, 438, 277, 240, 252, 149, 328, 493, 211, 209, 253, 288, 48, 343, 463, 30, 62, 35, 159, 71, 183, 419, 129, 233, 393, 107, 52, 371, 108, 243, 397, 335, 53, 105, 386, 368, 316, 360, 475, 487, 237, 244, 336, 122, 10, 469, 202, 99, 313, 168, 228, 364, 42, 404, 26, 119, 291, 226, 12, 3, 485, 379, 271, 133, 199, 66, 41, 59, 314, 383, 281, 351, 187, 365, 64, 241, 346, 273, 496, 248, 295, 184, 262, 2, 261, 416, 411, 356, 219, 140, 49, 117, 88, 489, 60, 137, 239, 432, 442, 456, 236, 135, 315, 181, 306, 174, 460, 91, 396, 165, 86, 441, 468, 326, 79, 494, 279, 247, 44, 208, 63, 355, 172, 231, 431, 319, 259, 175, 325, 214, 381, 177, 167, 294, 350, 377, 246, 19, 33, 358, 40, 250, 151, 65, 323, 357, 409, 322, 270, 265, 464, 5, 300, 387, 45, 193, 249, 8, 272, 451, 75, 201, 375, 138, 318, 372, 449, 38, 459, 210, 399, 430, 439, 310, 128, 363, 46, 320, 61, 83, 488, 285, 390, 423, 482, 43, 338, 116, 394, 191, 408, 190, 447, 289, 312, 158, 89, 120, 479, 268, 85, 434, 31, 407, 462, 27, 142, 471, 80, 23, 72, 125, 384, 369, 94, 329, 296, 9, 173, 95, 106, 32, 182, 474, 354, 4, 392, 21, 484, 160, 25, 121, 426, 450, 221, 415, 141, 264, 229, 207, 150, 274, 359, 446, 74, 192, 215, 170, 347, 78, 307, 280, 235, 385, 139, 115, 157, 136, 22, 81, 171, 428, 16, 58, 162, 163, 467, 213, 220, 298, 260, 321, 68, 473, 282, 55, 20, 169, 24, 292, 15, 194, 418, 39, 443, 490, 222, 425, 217, 413, 477, 50, 109, 101, 227, 492, 345, 104, 373, 14, 454, 164, 284, 245, 448, 146, 130, 324, 218, 93, 309, 54, 332};
  int width = 500;
  int gap = 4;
  int gd = DETECT, gm;
  int wid1;
  initgraph(&gd, &gm, NULL);
  wid1 = initwindow(gap * width + 1, width);
  setcurrentwindow(wid1);
  for (int i = 1; i <= gap * width; i += gap)
  {
    line(i, width, i, (width - numbers[i / gap]));
  }
  delay(200);
  char s;
  printf("\n");
  printf("Which Sorting Algorithm would you like to visualize\n");
  printf(" B - Bubble sort\n");
  printf(" Q - Quick sort\n");
  printf(" I - Insertion sort\n");
  printf(" S - Selection sort\n");
  printf(" C - Count sort\n");
  printf(" H - Shell sort\n");
  scanf("%c",&s);
  switch(s){
    case 'Q':
           QuickSort(numbers,0,499);
           break;
    case 'B':
           bubblesort(numbers,width,gap);
           break;
    case 'S':
           selectionsort(numbers,width,gap);
           break;
    case 'I':
           insertionsort(numbers,width);
           break;
    case 'C':
           CountSort(numbers,width);
           break;
    case 'H':
           ShellSort(numbers,width);
           break;

    default:
           printf("Invalid choice, run your program again and re-enter your choice");
           break;
  }
  printf("\n");
  printf("ARRAY AFTER SORTING:\n");
  for (int i = 0; i < width; i++)
  {
    printf("%d ",numbers[i]);
  }
  printf("\n");
  closegraph();

}
