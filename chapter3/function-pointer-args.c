// 3.3.3 関数ポインタを関数に返す
#include <stdio.h>
#include <string.h>

int add (int num1, int num2) {
  return num1 + num2;
}

int sub(int num1, int num2) {
  return num1 - num2;
}

// int2つを入力に持ち、intを返す関数のポインタ
typedef int (*fptrOperation)(int, int);

int compute(fptrOperation operation, int num1, int num2) {
  return operation(num1, num2);
}

int main(int argc, char *argv[])
{
  char ope;
  printf("Please input operator. a: add, s: sub\n");
  ope = getchar();
  int ans = 0;

  switch(ope) {
    case 'a':
      ans = compute(add, 1, 3);
      break;
    case 'b':
      ans = compute(sub, 1, 3);
      break;
    default:
      printf("Invalid operator.\n");
  }

  printf("%d", ans);
  return 0;
}
