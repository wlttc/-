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
	void cinput();//����γ�
	void coutput();//����γ�
	void cread();//��ȡ�γ�
	void cdelete();//ɾ���γ�
	void crevise();//�޸Ŀγ�
	void ccsort();//�Կγ̽�������
	void cfind();//���ҿγ�
	void csave();//����γ�
	void cinsert(string id, string name, string character, double time, double time1, double time2, double credit, int term);		//���γ���Ϣ���뵽������
	course* ch;//����ͷ
	Class();//���캯��
};


