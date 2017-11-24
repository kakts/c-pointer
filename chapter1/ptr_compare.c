// 1.3.2 ポインタの比較
// ポインタから別のポインタを引くとアドレスの差を得られる。
// 配列要素の順番を調べる以外にはとくに便利ではない

// ポインタ間の差 ＝ ポインタ間に何「単位」の差がある化を表す
#include <stdio.h>

int main(int argc, char *argv[])
{
  int vector[] = {28, 41, 7};
  int *p0 = vector;
  int *p1 = vector + 1;
  int *p2 = vector + 2;

  printf("p2 > p0: %d \n", p2 > p0);
  printf("p2 < p0: %d \n", p2 < p0);
  printf("p0 > p1: %d \n", p0 > p1);
}
