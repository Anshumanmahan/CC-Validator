#include<iostream>
#include<cstdio>
using namespace std;
int factorial(int);
int main() {
int x;
cout << "Enter number : ";
cin>>x;
x = factorial(x);
cout << "Factorial is " << x;
return 0;

}

int factorial(int x) {
if (x<=1) return 1;
else {
	return x*factorial(x-1);
}
}

