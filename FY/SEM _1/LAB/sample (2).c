#include <stdio.h>

int main() {
  FILE *fptr;

  // Create a file on your computer (filename.txt)
  fptr = fopen("file.txt", "w");

  // Close the file
  fclose(fptr);

  return 0;
}