#include<iostream>
#include<cmath>
using namespace std;
/*void main()
{
	int i, j, number;
	cout << "please input the multiplication table you want :" << endl;
	cin >> number;
	for (i = 1; i <= number; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i*j <<"\t";
		}
		cout << "\n";
	}
	system("pause");
}*/
/*void main()
{
	double a, b, c;
	double detar, x1, x2;
	cout << "please input the a,b,c of the equation." << endl;
	cin >> a >> b >> c;
	detar = b*b - 4 * a*c;
	if (a == 0)
	{
		if (b != 0)
		{
			x1 = -c / b;
			cout << "the answer for the equation is " << x1 << endl;
		}
		else
			cout << "you are inputting the wrong number for the equation." << endl;
	}
	else if (detar >= 0)
	{
		x1 = -b / (2 * a) - sqrt(detar) / (2 * a);
		x2 = -b / (2 * a) + sqrt(detar) / (2 * a);
		cout << "the answer of the equation is x1 = " << x1 << " x2 = " << x2 << endl;
	}
	else
	{
		x1 = -b / (2 * a);
		x2 = -b / (2 * a);
		detar = sqrt(-detar) / (2 * a);
		cout << "the answer of the equation is x1 = " << x1 <<"+"<<detar<<"j"<< " x2 = " << x2 <<"-" << detar << "j" << endl;
	}
	system("pause");
}*/
/*void main()
{
	char name[10];
	cin >> name;
	cout << name << endl ;
	system("pause");
}*/
void main()
{
	int number;
	char day[7][10] = { "monday","tuseday","wednesday","thursday","friday","saturday","sunday" };
	cout << "please input the number to transfer:" << endl;
	cin >> number;
	if ((number < 1) || (number > 7))
	{
		cout << "you enter the wrong number." << endl;
	}
	else
	{ 
		cout << day[number - 1] << endl;
	}
	//cout << "you enter the wrong number." << endl;
	system("pause");
}