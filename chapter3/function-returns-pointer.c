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

// 上記の関数の誤った例
// 局所変数であるarrのポインタを返してしまっている。
// 局所変数は関数が終了した時点で、関数のスタックフレームはスタックからポップして取り除かれる
// この関数の呼び出し元では、戻り値の配列のアドレスは無効になっている
int* wrongAllocateArray(int size, int value) {
  // 要素数分のintサイズのメモリをarrポインタに割り当てる
  int arr[size];
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

  // 局所変数の配列のアドレスを返してしまったパターン
  // この関数が呼び出しが終わった時点で、戻り値のアドレスは無効になっているので、
  // 意図しない値が表示される
  int* vector2 = wrongAllocateArray(size, value);
  for (int j = 0; j < size; j++) {
    printf("%d\n", vector2[j]);
  }
}
