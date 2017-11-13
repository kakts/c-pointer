// 1.4.1 多重間接参照
// ポインタへのポインタを使用する際のサンプル

#include <stdio.h>

int main(int argc, char *argv[])
{
  // 書籍タイトルの配列
  char *titles[] = {
    "A Tale of Two Cities",
    "Wuthering Heights",
    "Don Quixote",
    "Odyssey",
    "Moby-Dick",
    "Hamlet",
    "Gulliver's Travels"
  };

  // 英語の書籍と良書のリストを管理するために使う
  // 配列の各要素は文字列をコピーするのではなく、 titlesの各要素のポインタを持つ
  // こうすることでリスト追加時に文字列をコピーする必要がない
  char **bestBooks[3];
  char **englishBooks[4];

  bestBooks[0] = &titles[0];
  bestBooks[1] = &titles[3];
  bestBooks[2] = &titles[5];

  englishBooks[0] = &titles[0];
  englishBooks[1] = &titles[1];
  englishBooks[2] = &titles[5];
  englishBooks[3] = &titles[6];

  int i = 0, j = 0;
  for (i = 0; i < 3; i++) {
    printf("%s\n", *bestBooks[i]);
  }
  for (j = 0; j < 4; j++) {
    // englishBooksの間接参照
    printf("%s\n", *englishBooks[j]);
  }
}
