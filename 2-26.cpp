#include<iostream>
using namespace std;
int main()
{
	char answer;
	do
	{
		cout << "现在下雨吗？"<<endl;
		cin >> answer;
		if (answer == 'N')
		{
			cout << "现在没有下雨"<<endl;
		}
		else if (answer == 'Y')
		{
			cout << "现在正在下雨"<<endl;
		}
	} while (answer!='N'&&answer!='Y');
	return 0;
}