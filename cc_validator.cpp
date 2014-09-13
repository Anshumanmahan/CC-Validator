#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

int digitize (int x) {
  if (x < 10) {
    return x;
  } else {
    return ((x%10) + (x/10));
  }
}

int main(int argc, char** argv) {
  if (argc != 2) {
    printf("Usage:\n./cc_validator <CREDIT_CARD_NUMBER>\n");
    return 0;
  }
  string card = argv[1];
  int length = card.length();
  int checksum = 0;
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
    printf("Valid Credit Card");
  } else {
    printf("Invalid Credit Card!!");
  }
  return 0;
}
	

