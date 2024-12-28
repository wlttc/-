#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

void menu();

class course
{
public:
	string id;
	string name;
	string character;
	double time;
	double time1;
	double time2;
	double credit;
	int term;
	course* cn;
};

class Class
{
public:
	void class_in();//输入课程
	void class_out();//输出课程
	void class_read();//读取课程
	void class_delete();//删除课程
	void class_revise();//修改课程
	void class_sort();//对课程进行排序
	void class_find();//查找课程
	void class_save();//保存课程
	void class_insert(string id, string name, string character, double time, double time1, double time2, double credit, int term);		//将课程信息插入到链表中
	course* ch;
	~Class();
	Class();
};


