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
			cout << "�γ������ɣ����пγ�����" << endl;
			c.class_out();
			system("pause");
			break;
		case 4:
			cout << "���пγ�����:" << endl;
			c.class_out();
			c.class_revise();
			cout << "���³ɹ������пγ�����:" << endl;
			c.class_out();
			c.class_save();
			system("pause");
			break;
		case 5:
			cout << "���пγ�����:" << endl;
			c.class_out();
			c.class_delete();
			cout << "���³ɹ������пγ�����:" << endl;
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