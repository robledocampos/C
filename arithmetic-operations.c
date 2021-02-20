#include <stdio.h>

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
int modulus(int, int);

int main() {
  int a=5;
  int b=2;
  
  int additionResult;
  int subtractionResult;
  int multiplicationResult;
  int divisionResult;
  int modulusResult;

  additionResult = addition(a, b);
  subtractionResult = subtraction(a, b);
  multiplicationResult = multiplication(a, b);
  divisionResult = division(a, b);
  modulusResult = modulus(a, b);

  printf("addition: %d\n", additionResult);
  printf("subtraction: %d\n", subtractionResult);
  printf("multiplication: %d\n", multiplicationResult);
  printf("division: %d\n", divisionResult);
  printf("modulus: %d\n", modulusResult);
}

int addition(int a, int b) {
  return a+b;
}

int subtraction(int a, int b) {
  return a-b;
}

int multiplication(int a, int b) {
  return a*b; 
}

int division(int a, int b) {
  return a/b;
}

int modulus(int a, int b) {
  return a%b;
}

