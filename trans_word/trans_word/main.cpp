#include<iostream>
#include"cmath"
#define maxsize 100
using namespace std;
void main()
{
	char a[maxsize], ea[maxsize];
//	char name[40] = "zhang";
//	cout << name << endl;
	int i, j, k, n;
	i = 0, j = 0, k = 0, n = 0;
	cout << "please input the word that you want to encrypt" << endl;
	/*for(int i=0;a[i]!='s';i++)
	{
		cin >> a[i];
	}*/
	cin.getline(a, maxsize);
	cout << "plese input the key" << endl;
	cin >> i;
	while (a[j] != '\0')
	{
		j++;
	}
	cout << j << endl;
	for (k; k <= j; k++)
	{
		n = a[k] - 'a';
		n = n + i;
		if (n > 26)
			n = n % 26;
		ea[k] = n + 'a';
	}
	cout << "the ea is ";
	for (int i = 0; a[i] != '\0'; i++)
		cout<<ea[i];
	cout << endl;
	cout << "\7";
	system("pause");
}