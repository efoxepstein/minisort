/* Rules:
 * - no includes
 * - play by the spirit of the game
 * - sort any set of positive numbers in as few characters as possible
 * - just define minisort.c
 * - -Wall -Wextra must produce no warnings
 * - test with ./driver 4 1 2 65 92 etc
 */

void sort(int *a, int i) {
  #include "minisort.c"
}

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){if(*(int *)a>*(int *)b)return 1;return -1;} 

int main(int argc, char **argv) {
  int i = argc-1;
  int *a = (int *) malloc(sizeof(i) * i);
  int *sorted = (int *) malloc(sizeof(i) * i);
  for (int iter = 1 ; iter < argc; ++iter)
    a[iter-1] = sorted[iter-1] = atoi(argv[iter]);

  sort(a, i);

  qsort(sorted, argc-1, sizeof(i), cmp);

  for (i = 0; i < argc-1; ++i) {
    printf("%d\n", a[i]);
    if (a[i] != sorted[i])
      return 1;
  }
  return 0;
}
