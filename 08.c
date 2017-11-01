#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

int main(){

  char* path = "test.txt";
  struct stat data;
  int n = stat(path, &data);
  if(n < 0) return -1;
  printf("Size: %lld Bytes\n", data.st_size);
  printf("Mode: %o\n", data.st_mode);
  printf("Time Accessed: %s\n", ctime(&(data.st_atime)));
}
