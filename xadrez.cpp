#include <iostream>
#include <cstdlib>
using namespace std;
int somat1(int n)
{
	if(n==1)
		return 1;
	return n + somat1(n-1);
}
int main()
{
	int N, T;
	cin >> N >> T;
	if(T == 0)
	{
		cout << N << endl;
		exit(0);
	}
	if(T == 1)
	{
		cout << N * (N - 1) << endl;
		exit(0);
	}
	int value = 0;
	for(int i=1; i<N-2; i++)
	{
		value += somat1(N - i - 1);
	}
	value++;
	cout << value;
	return 0;
}
