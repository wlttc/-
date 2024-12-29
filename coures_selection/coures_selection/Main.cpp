#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
	int k;
	Class c;
	c.cread();


	while (1)
	{
		system("cls");
		menu();
		cin >> k;
		c.ccsort();
		if (k == 1)
		{
			c.coutput();
			system("pause");
		}
		else if (k == 2)
		{
			c.cfind();
			system("pause");
		}
		else if (k == 3)
		{
			c.cinput();
			c.csave();
			c.coutput();
			system("pause");
		}
		else if (k == 4)
		{
			c.coutput();
			c.crevise();
			c.coutput();
			c.csave();
			system("pause");
		}
		else if (k == 5)
		{
			c.coutput();
			c.cdelete();
			c.coutput();
			c.csave();
			system("pause");
		}
		else if (k == 0)
		{
			exit(0);
		}
		else
		{
			cout << "请输入正确的数字" << endl;
			system("pause");
		}
	}
	return 0;
}