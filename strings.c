#include <stdio.h>
#include <string.h>

int main() {  
  char hello[14] = "Hello, ";
  char world[7] = {'W','o','r','l','d','!','\0'};
  strcat(hello, world);

  int length = strlen(hello);
  char* right = strchr(hello, 'W');
  char firstChar = hello[0];

  printf("phrase: %s\n", hello);
  printf("length: %d\n", length);
  printf("string starting with W: %s\n", right);
  printf("first char: %c\n", firstChar);
}

