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
		switch (k)
		{
		case 1:
			c.class_out();
			system("pause");
			break;
		case 2:
			c.class_find();
			system("pause");
			break;
		case 3:
			c.class_in();
			c.class_save();
			cout << "课程列表：" << endl;
			c.class_out();
			system("pause");
			break;
		case 4:
			cout << "课程列表：" << endl;
			c.class_out();
			c.class_revise();
			cout << "课程列表：" << endl;
			c.class_out();
			c.class_save();
			system("pause");
			break;
		case 5:
			cout << "课程列表：" << endl;
			c.class_out();
			c.class_delete();
			cout << "课程列表：" << endl;
			c.class_out();
			c.class_save();
			system("pause");
			break;
		case 0:
			exit(0);
		}
	}
	return 0;
}
