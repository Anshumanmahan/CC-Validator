#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

const int MAX_CREDIT_CARD_SIZE = 16;
int digitize (int x) {
  if (x < 10) {
    return x;
  } else {
    return ((x%10) + (x/10));
  }
}

int Length(char* ptr) {
  int res = 0;
  char* newptr = ptr;
  while(*newptr != '\0') {
	newptr++;
	res++;
  }
  return res;
}

int main(int argc, char** argv) {
  char* card = (char*)malloc(sizeof(char) * MAX_CREDIT_CARD_SIZE); 
  if (argc == 1) {
    printf("Enter Credit Card Number: ");
    scanf("%s",card);   
  } else {
   card = argv[1]; 
  }
  int length = Length(card);
  int checksum = 0 ;
  bool flag = false;
  for (int i = length - 1; i >= 0; i--) {
    if (flag == false) {
      checksum += card[i] - 48;
      flag = true;
    }
    else {
      checksum += digitize((card[i] - 48)*2);
      flag = false;
    }
  }
  if (checksum % 10 == 0) {
    printf("Valid Credit Card\n");
  } else {
    printf("Invalid Credit Card!!\n");
  }
  return 0;
}
	

