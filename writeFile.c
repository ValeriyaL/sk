#include <stdio.h>

int main() {

   FILE* f = fopen("lala.txt", "w");

   if (!f) { perror("fopen"); return 1; }

   fwrite("Lol\n", 1, 4, f);

  return 0;

}
