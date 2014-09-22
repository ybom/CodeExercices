//Implement a function void reverse(char * c) in C
//which reverses a null-terminated string.

#include <stdio.h>
#include <string.h>

void reverse (char *c);

void reverse (char * c) {
  int size = getSize(c);
  char temp[size + 1];
  memcpy(temp, c, size+1);
  int i,j;
  
  for (i = size-1, j=0; i>=0; i--, j++) {
    *(c+j) = *(temp+i);
  }
  *(c + size) = '\0';
}

int getSize(char*c) {
  int index;  
  for (index = 0; *(c+index) != '\0'; index++);
  printf("size is %d\n", index);
  return index;

}

int main (int argc, char **argv) {

  char * value;
  if (argc == 2) {
    value = argv[1];
     printf("value normal is %s\n", value);
    reverse(value);
  }  else {
    return -1;
  }

  printf("char in reverse is %s\n", value);
  return 0;

}

