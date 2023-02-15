#include <iostream>
using namespace std;

int main ()
{
	int i,num,n;
	cout << " Choose quantity of array: ";
	cin >> i;
	n = i + 1;
	int massive[30] = {};
	//cout << " Enter array's numbers(6)" << endl;
	
	for (int y=0; y < n; y++) {
		cout << " Choose sequence number from array(" << i << ")"<<endl;
		cin >> num;
		cout << " Enter number ";
		cin >> massive[num];
	}
	for (int q=0;q<n;q++ )
		cout << massive[q]<<"   ";
	return 0;
}