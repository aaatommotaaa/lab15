#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;

	cout << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << (int *)z << '\n';
	cout << &a << " " << (int *)&b << " " << (int *)&c << " " << x << " " << (int *)y << " " << (int *)z << '\n';
	c = 'F';
	cout << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << (int *)z << '\n';
	*y = 'W';
	cout << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << (int *)z << '\n';
	*x = 6;
	cout << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << (int *)z << '\n';
	**z = 7;
	cout << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << (int *)z << '\n';
	
	return 0;
}
