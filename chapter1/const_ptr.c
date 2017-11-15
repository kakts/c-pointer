// 1.4.2 定数とポインタ
#include <stdio.h>

int main(int argc, char *argv[])
{
  int num = 5;
  const int limit = 500;

  int *pi; // intへのポインタ
  const int *pci; // const intへのポインタ

  pi = &num;
  pci = &limit;

  printf("num - Address: %p value: %d\n", &num, num);
  printf("limit - Address: %p value: %d\n", &limit, limit);
  printf("pi - Address: %p value: %p\n", &pi, pi);
  printf("pci - Address: %p value: %p\n", &pci, pci);
}
