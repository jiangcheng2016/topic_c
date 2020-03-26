#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, t = 1;
	float sum = 0;
	cin >> n;
	for (int i = 1,j = 1; i <= n; i ++, j +=2)
	{
		sum += ((t * i) / (j * 1.0));
		t *= -1;
	}
	cout << fixed << setprecision(2) << sum << endl;
	return 0;
}