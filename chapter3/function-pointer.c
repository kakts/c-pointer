// 3.3.2 関数ポインタを使った関数呼び出し

#include <stdio.h>

int square(int num) {
  return num * num;
}

int main(int argc, char *argv[])
{
  // doubleを渡して、intを返す関数へのポインタ
  int (*fptr1)(int);

  // charへのポインタを渡して、何も返さない関数へのポインタ
  // void (*f2)(char*);

  // 2つのintをわたして、doubleへのポインタを返す関数へのポインタ
  // double (*f3)(int, int);

  int n = 5;

  // 関数の名前地震は関数のアドレスとして評価されるのでそのまま関数ポインタに渡せる
  fptr1 = square;

  printf("%d squared is %d\n", n, fptr1(n));

}
