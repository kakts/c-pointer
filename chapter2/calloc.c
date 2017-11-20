// 2.2.2 calloc

int main(int argc, char *argv[])
{
  // 5 * 4 = 20バイトのメモリを割り当て、中身を0で埋めて返す
  int *pi = calloc(5, sizeof(int));

  // 以下の2行はcallocと同じ
  int *pi2 = malloc(5 * sizeof(int));
  memset(pi2, 0, 5 * sizeof(int));
}
