#include <stdio.h>

void printResult(float);

int main() {
 float a = 5;
 float b = 2;

 printResult(a/b);
}

void printResult(float result){
 printf("division: :%f\n", result);
}
