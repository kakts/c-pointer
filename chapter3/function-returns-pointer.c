// 3.2.4 ポインタを返す関数

#include <stdio.h>
#include <stdlib.h>

// 指定したサイズの整数配列を作成し、各要素にvalueをセットし、その配列のポインタを返す
int* allocateArray(int size, int value) {
  // 要素数分のintサイズのメモリをarrポインタに割り当てる
  int* arr = (int*)malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    arr[i] = value;
  }
  return arr;
}

int main(int argc, char *argv[])
{
  int size = 5;
  int value = 45;
  int* vector = allocateArray(size, value);
  for (int i = 0; i < size; i++) {
    printf("%d\n", vector[i]);
  }
  free(vector);
}
