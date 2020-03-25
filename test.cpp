#include <iostream>
using namespace std;

int main()
{
	int a[6], count = 0;
	for (int i = 0; i < 6; i ++)
		cin >> a[i];
	for (int j = 0; j < 6; j ++)
		if(a[j] > 0)
			count ++;
	cout << count ;
	return 0;
}