#include <iostream>
#include "Class.h"

using namespace std;

int main()
{
	int k;
	string m;
	Class c;
	c.class_read();
	while (1)
	{
		system("cls");
		menu();
		cin >> k;
		c.class_sort();
		if (k == 1)
		{
			c.class_out();
			system("pause");
		}
		else if (k == 2)
		{
			c.class_find();
			system("pause");
		}
		else if (k == 3)
		{
			c.class_in();
			c.class_save();
			c.class_out();
			system("pause");
		}
		else if (k == 4)
		{
			c.class_out();
			c.class_revise();
			c.class_out();
			c.class_save();
			system("pause");
		}
		else if (k == 5)
		{
			c.class_out();
			c.class_delete();
			c.class_out();
			c.class_save();
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