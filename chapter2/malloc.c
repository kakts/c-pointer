// 2.1 動的メモリ割り当て
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // int型のサイズのメモリをヒープに確保し、確保したメモリのポインタを取得する
  int *pi = (int*) malloc(sizeof(int));
  if (pi != NULL) {
    printf("valid pointer.\n");
    *pi = 5;
    printf("*pi: %d\n", *pi);
    free(pi);
  } else {
    printf("malloc failed.\n");
  }
}
