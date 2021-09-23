#include <iostream>
using namespace std;

void fibnonacci(int n)
{
	int n1 = 0, n2 = 1, n3;
	cout << n1 << " " << n2 << " ";

	for (int i = 2; i < n; i++)
	{
		n3 = n1 + n2;
		cout << n3 << " ";
		n1 = n2;
		n2 = n3;
	}
}
int main()
{

	int n;
	cout << "Enter the value of N: \n";
	cin >> n;
	fibnonacci(n);
	return 0;
}
