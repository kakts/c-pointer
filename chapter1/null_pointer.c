// 1.1 NULLポインタの使用例
#include <stdio.h>

int main(int argc, char *argv[])
{
  int num;
  int *pi1 = 0;

  if (pi1) {
    printf("pi1 is not null %d\n", *pi1);
  } else {
    printf("pi1 is null\n");
  }
  int *pi2 = NULL;

  if (pi2) {
    printf("pi2 is not null %d\n", *pi1);
  } else {
    printf("pi2 is null\n");
  }
}
