#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

void menu();

class course//���������
{
public:
	string id;//�γ̱��
	string name;//�γ�����
	string character;//�γ�����
	double time;//��ѧʱ
	double time1;//�ڿ�ѧʱ
	double time2;//ʵ��/�ϻ�ѧʱ
	double credit;//ѧ��
	int term;//����ѧ��
	course* cn;//ָ��������һ�������ָ��
};

class Class//������
{
public:
	void class_in();//����γ�
	void class_out();//����γ�
	void class_read();//��ȡ�γ�
	void class_delete();//ɾ���γ�
	void class_revise();//�޸Ŀγ�
	void class_sort();//�Կγ̽�������
	void class_find();//���ҿγ�
	void class_save();//����γ�
	void class_insert(string id, string name, string character, double time, double time1, double time2, double credit, int term);		//���γ���Ϣ���뵽������
	course* ch;
	~Class();
	Class();
};


