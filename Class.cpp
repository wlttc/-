#include"Class.h"

Class::Class()
{
	ch = new course;
	ch->cn = NULL;
}

Class::~Class()
{
	course* p;
	while (ch)
	{
		p = ch;
		ch = ch->cn;
		delete p;
	}
	ch = NULL;
}

void Class::class_in()//输入课程信息
{
	class_sort();
	course* p;
	course* a;
	a = ch;
	cout << "依次输入课程编号，课程名称，课程性质，总学时，授课学时，实验/上机学时，学分，开课学期" << endl;
	p = new course;
	cin >> p->id >> p->name >> p->character >> p->time >> p->time1 >> p->time2 >> p->credit >> p->term;
	p->cn = a->cn;
	a->cn = p;
	a = a->cn;
}

void Class::class_out()//输出课程信息
{
	class_sort();
	course* p;
	cout << "课程列表：" << endl;
	cout << "课程编号" << '\t' << "课程名称" << '\t' << "课程性质" << '\t' << "总学时" << '\t' << '\t' << "授课学时" << '\t' << "实验/上机学时" << '\t' << "学分" << '\t' << '\t' << "开课学期" << endl;
	for (p = ch->cn; p != NULL; p = p->cn)
	{
		cout << p->id << '\t' << '\t' << p->name << '\t' << '\t' << p->character << '\t' << '\t' << p->time << '\t' << '\t' << p->time1 << '\t' << '\t' << p->time2 << '\t' << '\t' << p->credit << '\t' << '\t' << p->term << endl;
	}
}

void Class::class_find()//查找课程
{
	course* p;
	p = ch;
	int m, k, a = 1;
	string s;
	cout << "通过课程性质查询请按1，通过学分查询请按2" << endl;
	cin >> m;
	if (m == 1)//按性质查询
	{
		cout << "要查询哪种课程" << endl;
		cin >> s;
		while (p != NULL)
		{
			if (p->character == s)
			{
				if (a == 1)
					cout << "课程编号" << '\t' << "课程名称" << '\t' << "课程性质" << '\t' << "总学时" << '\t' << '\t' << "授课学时" << '\t' << "实验/上机学时" << '\t' << "学分" << '\t' << '\t' << "开课学期" << endl;
				cout << p->id << '\t' << '\t' << p->name << '\t' << '\t' << p->character << '\t' << '\t' << p->time << '\t' << '\t' << p->time1 << '\t' << '\t' << p->time2 << '\t' << '\t' << p->credit << '\t' << '\t' << p->term << endl;
				a++;
			}
			p = p->cn;
		}
		if (a == 1)  cout << "未查询到课程" << endl;
	}
	else if (m == 2)//按学分查询
	{
		cout << "要查询学分为几的课程" << endl;
		cin >> k;
		while (p != NULL)
		{
			if (p->credit == k)
			{
				if (a == 1)
					cout << "课程编号" << '\t' << "课程名称" << '\t' << "课程性质" << '\t' << "总学时" << '\t' << '\t' << "授课学时" << '\t' << "实验/上机学时" << '\t' << "学分" << '\t' << '\t' << "开课学期" << endl;
				cout << p->id << '\t' << '\t' << p->name << '\t' << '\t' << p->character << '\t' << '\t' << p->time << '\t' << '\t' << p->time1 << '\t' << '\t' << p->time2 << '\t' << '\t' << p->credit << '\t' << '\t' << p->term << endl;
				a++;
			}
			p = p->cn;
		}
		if (a == 1)  cout << "未查询到课程" << endl;;
	}
	else cout << "指令错误" << endl;
}

void Class::class_delete()//删除课程
{
	string k;
	course* p, * a;
	p = ch;
	a = p;
	cout << "输入要删除课程的编号" << endl;
	cin >> k;
	while (p->cn && p->id != k)
	{
		a = p;
		p = p->cn;
	}
	if (p->id == k)
	{
		a->cn = p->cn;
		delete p;
	}
	else
	{
		cout << "未查询到课程" << endl;
	}
}

void Class::class_sort()//对课程进行排序
{
	string name;
	string character;
	string id;
	int term, m = 0, j, i;
	double time, credit, time1, time2;
	course* p1, * p2;
	p1 = ch;
	while (p1->cn != NULL)
	{
		p1 = p1->cn;
		m++;
	}
	for (i = 0; i < m - i; i++)
	{
		p2 = ch->cn;
		p1 = p2->cn;
		for (j = 0; j < m - i - 1; j++)
		{
			if (p1->id < p2->id)
			{
				id = p1->id;
				name = p1->name;
				time = p1->time;
				time1 = p1->time1;
				time2 = p1->time2;
				credit = p1->credit;
				term = p1->term;
				character = p1->character;

				p1->id = p2->id;
				p1->name = p2->name;
				p1->time = p2->time;
				p1->time1 = p2->time1;
				p1->time2 = p2->time2;
				p1->credit = p2->credit;
				p1->term = p2->term;
				p1->character = p2->character;

				p2->id = id;
				p2->name = name;
				p2->time = time;
				p2->time1 = time1;
				p2->time2 = time2;
				p2->credit = credit;
				p2->term = term;
				p2->character = character;
			}
			p1 = p1->cn;
			p2 = p2->cn;
		}
	}
}

void Class::class_revise()//修改课程数据
{
	string k;
	cout << "输入要修改课程的编号" << endl;
	cin >> k;
	course* p;
	p = ch;
	while (p->cn && p->id != k)
	{
		p = p->cn;
	}
	if (p->id == k)
	{
		cout << "输入课程名称，课程性质，总学时，授课学时，实验/上机学时，学分，开课学期" << endl;
		cin >> p->name >> p->character >> p->time >> p->time1 >> p->time2 >> p->credit >> p->term;
		cout << "修改完成" << endl;
	}
	else cout << "未查询到课程，请输入正确的课程编号" << endl;
}

//将文件中的数据插入到链表中
void Class::class_insert(string id, string name, string character, double time, double time1, double time2, double credit, int term)
{
	course* a;
	course* p;
	a = ch;
	p = new course;
	p->id = id;
	p->name = name;
	p->time = time;
	p->time1 = time1;
	p->time2 = time2;
	p->credit = credit;
	p->term = term;
	p->character = character;
	p->cn = a->cn;
	a->cn = p;
}

void Class::class_save()//保存数据
{
	class_sort();
	course* p;
	p = ch->cn;
	ofstream out("class.txt");
	if (!out) { cout << "不能打开文件！" << endl; return; }
	while (p != NULL)
	{
		out << p->id << '\t' << p->name << '\t' << p->character << '\t' << p->time << '\t' << p->time1 << '\t' << p->time2 << '\t' << p->credit << '\t' << p->term << '\t' << endl;
		p = p->cn;
	}
	out.close();
}

void Class::class_read()//读入数据
{
	course* p;
	p = ch;
	ifstream in;
	in.open("class.txt");
	if (!in)
		return;
	string name, character, id;
	int term;
	double time, time1, time2, credit;
	while (!in.eof())
	{
		in >> id >> name >> character >> time >> time1 >> time2 >> credit >> term;
		if (in.fail()) break;
		class_insert(id, name, character, time, time1, time2, credit, term);
	}
	in.close();
}

void menu()
{
	cout << "查看已有课程  1" << endl;
	cout << "查找课程      2" << endl;
	cout << "添加新课程    3" << endl;
	cout << "修改课程信息  4" << endl;
	cout << "删除课程      5" << endl;
	cout << "退出系统      0" << endl;
}
