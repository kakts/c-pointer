// 2.2.3 realloc
#include <stdio.h>

int main(int argc, char *argv[])
{
  char *string1;
  char *string2;
  char *string3;
  char *string4;
  string1 = (char*) malloc(16);
  strcpy(string1, "0123456789AB");

  printf("string1: %s \n", string1);

  // reallocをつかって、メモリ領域を小さくする
  // メモリ領域を変更した後のポインタアドレスをstring2に渡す
  // string1 と 2はアドレスが変わらない
  string2 = realloc(string1, 8);
  printf("string1: %p [%s] \n", string1, string1);
  printf("string2: %p [%s] \n", string2, string2);

}
