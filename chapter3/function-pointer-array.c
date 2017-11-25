// 3.3.5 関数ポインタの配列
#include <stdio.h>
#include <string.h>

// int2つを入力に持ち、intを返す関数のポインタ
typedef int (*fptrOperation)(int, int);
fptrOperation operations[128] = {NULL};


int add (int num1, int num2) {
  return num1 + num2;
}

int sub(int num1, int num2) {
  return num1 - num2;
}

// 文字をインデックスとして使い、文字に対応する関数を選択するために使う
// 計算用関数の配列を初期化する
void initializeOperationsArray() {
  operations['+'] = add;
  operations['-'] = sub;
}

int evaluateArray(char opcode, int num1, int num2) {
  fptrOperation operation;
  operation = operations[opcode];
  return operation(num1, num2);
}

int main(int argc, char *argv[])
{
  char ope;
  printf("Please input operator. +: add, -: sub\n");
  ope = getchar();

  // 計算用関数の配列を初期化する
  initializeOperationsArray();
  int ans = 0;
  ans = evaluateArray(ope, 1, 3);
  printf("%d\n", ans);
  return 0;
}
