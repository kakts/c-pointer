// 1.1.4
#include <stdio.h>

int main(int argc, char *argv[])
{
  int num = 0;
  // 宣言時にnumのアドレスで初期化できる
  int *pi = &num;

  for (int i = 0; i < 50; i++) {
    num = i;
    printf("num: %d\n", num);

    // piというポインタ変数自体のアドレスと、piが保持するnumのアドレスを表示する
    // piが指し示しているnumの値が変わっていることを確認する
    printf("Address of pi: %d Value: %d\n ValueOfNum: %d\n", &pi, pi, *pi);

    // piが指し示しているnumの値を間接的に変更する
    *pi = 100;
    // piが指し示しているnumの値が100に変わっていることを確認する
    printf("Address of pi: %d Value: %d\n ValueOfNum: %d\n", &pi, pi, *pi);
  }



}
