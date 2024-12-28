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

void Class::class_in()//����γ���Ϣ
{
	class_sort();
	course* p;
	course* a;
	a = ch;
	cout << "��������γ̱�ţ��γ����ƣ��γ����ʣ���ѧʱ���ڿ�ѧʱ��ʵ��/�ϻ�ѧʱ��ѧ�֣�����ѧ��" << endl;
	p = new course;
	cin >> p->id >> p->name >> p->character >> p->time >> p->time1 >> p->time2 >> p->credit >> p->term;
	p->cn = a->cn;
	a->cn = p;
	a = a->cn;
}

void Class::class_out()//����γ���Ϣ
{
	class_sort();
	course* p;
	cout << "�γ���Ϣ��" << endl;
	cout << "�γ̱��" << '\t' << "�γ�����" << '\t' << "�γ�����" << '\t' << "��ѧʱ" << '\t' << '\t' << "�ڿ�ѧʱ" << '\t' << "ʵ��/�ϻ�ѧʱ" << '\t' << "ѧ��" << '\t' << '\t' << "����ѧ��" << endl;
	for (p = ch->cn; p != NULL; p = p->cn)
	{
		cout << p->id << '\t' << '\t' << p->name << '\t' << '\t' << p->character << '\t' << '\t' << p->time << '\t' << '\t' << p->time1 << '\t' << '\t' << p->time2 << '\t' << '\t' << p->credit << '\t' << '\t' << p->term << endl;
	}
}

void Class::class_find()//���ҿγ�
{
	course* p;
	p = ch;
	int m, k, a = 1;
	string s;
	cout << "ͨ���γ����ʲ�ѯ�밴1��ͨ��ѧ�ֲ�ѯ�밴2" << endl;
	cin >> m;
	if (m == 1)//�����ʲ�ѯ
	{
		cout << "Ҫ��ѯ���ֿγ�" << endl;
		cin >> s;
		while (p != NULL)
		{
			if (p->character == s)
			{
				if (a == 1)
					cout << "�γ̱��" << '\t' << "�γ�����" << '\t' << "�γ�����" << '\t' << "��ѧʱ" << '\t' << '\t' << "�ڿ�ѧʱ" << '\t' << "ʵ��/�ϻ�ѧʱ" << '\t' << "ѧ��" << '\t' << '\t' << "����ѧ��" << endl;
				cout << p->id << '\t' << '\t' << p->name << '\t' << '\t' << p->character << '\t' << '\t' << p->time << '\t' << '\t' << p->time1 << '\t' << '\t' << p->time2 << '\t' << '\t' << p->credit << '\t' << '\t' << p->term << endl;
				a++;
			}
			p = p->cn;
		}
		if (a == 1)  cout << "δ��ѯ���γ�" << endl;
	}
	else if (m == 2)//��ѧ�ֲ�ѯ
	{
		cout << "Ҫ��ѯѧ��Ϊ���Ŀγ�" << endl;
		cin >> k;
		while (p != NULL)
		{
			if (p->credit == k)
			{
				if (a == 1)
					cout << "�γ̱��" << '\t' << "�γ�����" << '\t' << "�γ�����" << '\t' << "��ѧʱ" << '\t' << '\t' << "�ڿ�ѧʱ" << '\t' << "ʵ��/�ϻ�ѧʱ" << '\t' << "ѧ��" << '\t' << '\t' << "����ѧ��" << endl;
				cout << p->id << '\t' << '\t' << p->name << '\t' << '\t' << p->character << '\t' << '\t' << p->time << '\t' << '\t' << p->time1 << '\t' << '\t' << p->time2 << '\t' << '\t' << p->credit << '\t' << '\t' << p->term << endl;
				a++;
			}
			p = p->cn;
		}
		if (a == 1)  cout << "δ��ѯ���γ�" << endl;;
	}
	else cout << "ָ�����" << endl;
}

void Class::class_delete()//ɾ���γ�
{
	string k;
	course* p, * a;
	p = ch;
	a = p;
	cout << "����Ҫɾ���γ̵ı��" << endl;
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
		cout << "δ��ѯ���γ�" << endl;
	}
}

void Class::class_sort()//�Կγ̽�������
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

void Class::class_revise()//�޸Ŀγ�����
{
	string k;
	cout << "����Ҫ�޸Ŀγ̵ı��" << endl;
	cin >> k;
	course* p;
	p = ch;
	while (p->cn && p->id != k)
	{
		p = p->cn;
	}
	if (p->id == k)
	{
		cout << "����γ����ƣ��γ����ʣ���ѧʱ���ڿ�ѧʱ��ʵ��/�ϻ�ѧʱ��ѧ�֣�����ѧ��" << endl;
		cin >> p->name >> p->character >> p->time >> p->time1 >> p->time2 >> p->credit >> p->term;
		cout << "�޸����" << endl;
	}
	else cout << "δ��ѯ���γ̣���������ȷ�Ŀγ̱��" << endl;
}

//���ļ��е����ݲ��뵽������
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

void Class::class_save()//��������
{
	class_sort();
	course* p;
	p = ch->cn;
	ofstream out("class.txt");
	if (!out) { cout << "���ܴ��ļ���" << endl; return; }
	while (p != NULL)
	{
		out << p->id << '\t' << p->name << '\t' << p->character << '\t' << p->time << '\t' << p->time1 << '\t' << p->time2 << '\t' << p->credit << '\t' << p->term << '\t' << endl;
		p = p->cn;
	}
	out.close();
}

void Class::class_read()//��������
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
	cout << "�鿴�γ���Ϣ  1" << endl;
	cout << "���ҿγ�      2" << endl;
	cout << "��ӿγ�      3" << endl;
	cout << "�޸Ŀγ�      4" << endl;
	cout << "ɾ���γ�      5" << endl;
	cout << "�˳�          0" << endl;
}