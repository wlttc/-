#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

void menu();

class course//链表对象类
{
public:
	string id;//课程编号
	string name;//课程名称
	string character;//课程性质
	double time;//总学时
	double time1;//授课学时
	double time2;//实验/上机学时
	double credit;//学分
	int term;//开课学期
	course* cn;//指向链表下一个对象的指针
};

class Class//操作类
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


