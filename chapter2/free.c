// 2.3 free関数に湯おるメモリの解放
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i = 0;

  int *ip = &i;

  printf("ip: %p %d", ip, *ip);

  // freeが呼ばれた時点で、メモリが解放される
  // ipポインタ自体は同じメモリを指し続けている(ぶら下がりポインタとも呼ばれる)
  // 解放後のメモリは常にゴミなので使ってはいけない
  // メモリの解放は出来る限り同じ階層で行うべき つまり関数の中で割り当てたら、その関数内で開放する
  free(ip);
}
