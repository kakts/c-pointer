// 1.1.8.2 voidポインタの使用例
#include <stdio.h>
int main(int argc, char *argv[])
{
  int num;
  int *pi = &num;

  printf("Value of pi: %p %d\n", pi, *pi);

  // void型のポインタにint型のポインタを代入する
  void *pv = pi;

  // 元の型へキャストして戻すこともできる
  // 値は元のポインタと同じになる
  pi = (int*) pv;
  printf("Value of pi: %p %d\n", pi, *pi);
}
