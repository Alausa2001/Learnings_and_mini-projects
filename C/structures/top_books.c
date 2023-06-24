#include <stdio.h>

struct books {
  char title[20];
  char author[20];
  int year;
};

int main(void)
{
  struct books top_books[3];
  int i;

  printf("Hey, I am boltt and I'll love to know your top 3 books\n\n");
  for (i = 0; i < 3; i++)
  {
    printf("Book %d\n", i + 1);
    printf("Title: ");
    scanf("%s", top_books[i].title);
    printf("Author: ");
    scanf("%s", top_books[i].author);
    printf("Year of publication: ");
    scanf("%d", &(top_books[i].year));
  }
  printf("\nNice choice, your top 3 books are\n");
  for (i = 0; i < 3; i++)
  {
    printf("%s by %s published in %d\n", top_books[i].title, top_books[i].author, top_books[i].year);
  }
  return 0;
}
