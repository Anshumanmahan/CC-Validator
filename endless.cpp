#include <iostream>
#include <cstdio>
using namespace std;

void endless(int x) {
cout << x << endl;
endless(x+1);
}

int main(){
endless(0);
return 0;
}
