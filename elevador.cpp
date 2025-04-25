#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int N;
	cin >> N;
	char res = 'S';
	int* boxs = new int[N+1];
	boxs[0] = 0;
	for(int i=1; i<N+1; i++)
	{
		cin >> boxs[i];
	}
	sort(boxs, boxs+N+1);

	for(int i=0; i<N; i++)
		if(boxs[i+1] - boxs[i] > 8)
		{
			res = 'N';
			break;
		}
	cout << res << endl;
	delete [] boxs;
	return 0;
}
