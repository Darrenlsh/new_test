#include<iostream>
#include"cmath"
using namespace std;
void main()
{
	double a, b, c, s, space;
	cout << "please input three edges a,b,c\n";
	cin >> a >> b >> c;
	s = (a + b + c) / 2;
	if ((c < a + b) && (c > abs(a - b)))
	{
		space = sqrt(s*(s - a)*(s - b)*(s - c));
		cout << "the space is " << space << endl;
	}
	else
		cout << "the three edges can not be a triangle." << endl;
		system("pause");
}