// 3.2.1 データのポインタを関数に渡す

#include <stdlib.h>
#include <stdio.h>

// 参照渡しでpnum1とpnum2の向き先の値を交換する
void swapWithPointers(int* pnum1, int* pnum2)
{
  int tmp;
  tmp = *pnum1;
  *pnum1 = *pnum2;
  *pnum2 = tmp;
}


int main(int argc, char *argv[])
{
  int num1 = 10;
  int num2 = 20;

  int *pnum1, *pnum2;

  pnum1 = &num1;
  pnum2 = &num2;

  printf("Before calling swapWithPointers \n");
  printf("pnum1: %d, pnum2: %d\n", *pnum1, *pnum2);
  swapWithPointers(pnum1, pnum2);
  printf("After calling swapWithPointers \n");
  printf("pnum1: %d, pnum2: %d\n", *pnum1, *pnum2);
}
