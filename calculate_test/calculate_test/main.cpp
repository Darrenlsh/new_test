#include<iostream>
#include<cmath>
using namespace std;
/*
void main()
{
	double angle;
	cout << "please input the angle:" << endl;
	cin >> angle;
	cout << "the sin(angle) is " << sin(angle) << endl;
	cout << "the cos(angle) is " << cos(angle) << endl;
	cout << "the tan(angle) is " << tan(angle) << endl;
	system("pause");
}
*/
/*
void main()
{
	int a, b;
	cout << "please input the a and the b." << endl;
	cin >> a >> b;
	cout << "the a+b = " << a + b << endl;
	cout << "the a-b = " << a - b << endl;
	cout << "the a*b = " << a * b << endl;
	cout << "the a/b = " << a / b << endl;
	cout << "the a%b = " << a % b << endl;
	cout << true << " " << false << endl;
	system("pause");
}
*/
void main()
{
	int a = 0x69;
	int b = 0x5e;
	int c;

	cout << uppercase;

	cout << dec << a << "\t" << hex << a << endl;
	cout << dec << b << "\t" << hex << b << endl;

	c = a & b;
	cout << dec << c << "\t" << hex << c << endl;

	c = a | b;
	cout << dec << c << "\t" << hex << c << endl;

	c = a ^ b;
	cout << dec << c << "\t" << hex << c << endl;

	c = ~a ;
	cout << dec << c << "\t" << hex << c << endl;

	c = a>>2;
	cout << dec << c << "\t" << hex << c << endl;

	c = a << 2;
	cout << dec << c << "\t" << hex << c << endl;
	
	cout << dec;
	system("pause");
}