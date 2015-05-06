#include <iostream>
#include <cstdio>
using namespace std;

int reverse(int);
int reverse_recurse(int,int);

int main() {
cout << "Enter number to reverse: ";
int x;
cin >> x;
int y;
y = reverse_recurse(x,0);
cout << "Reversed number is " << y << " and original number was " << x << endl;
return 0;
}

int reverse(int x) {

if ( x < 10 ) return x;
else {
	int anser = 0;
	while(x!=0) {
		int unit = x%10;
                int rest = x/10;
		anser = anser*10 + unit;
		x = rest;
	}
	return anser;	
}
}

int reverse_recurse(int x, int y) {
if (x == 0) return y;
else {
	int unit = x%10;
	x = x/10;
	y = y*10 + unit;
	return reverse_recurse(x,y);
}
}
