// 1.3 ポインタ演算子について
#include <stdio.h>

int main(int argc, char *argv[])
{
  int vector[] = {28, 41, 7};

  int *pi = vector;

  // 28が表示
  printf("%d\n", *pi);

  // int型のポインタに1を足すことで、ポインタが指しているデータ型の大きさ(4)に整数1を
  // かけた値が増分となる
  pi += 1;

  // 41が表示
  printf("%d\n", *pi);

  pi += 1;

  // 7が表示
  printf("%d\n", *pi);

  // さらに pi += 1をすると、ポインタは自分自身を指すことになる
  // piは、最初の3つめまではvectorの要素で埋められ、その次にポインタ自身のアドレスを格納する
  // 意図しない動作になるので危険

  /**
   * voidポインタへの加算はシンタックスエラーとなる

    int num = 5;
    void *pv = &num;
    printf("%p\n", pv);
    pv = pv + 1; // シンタックス警告
  */  
}
