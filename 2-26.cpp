#include<iostream>
using namespace std;
int main()
{
	char answer;
	do
	{
		cout << "����������"<<endl;
		cin >> answer;
		if (answer == 'N')
		{
			cout << "����û������"<<endl;
		}
		else if (answer == 'Y')
		{
			cout << "������������"<<endl;
		}
	} while (answer!='N'&&answer!='Y');
	return 0;
}