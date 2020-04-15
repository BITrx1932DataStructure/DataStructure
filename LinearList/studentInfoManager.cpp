﻿#include "studentInfoManager.h"
#include"studentContainer.h"
#include"control.h"
#include<iostream>
#include<cstdlib>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;

void StudentInfoManager::init()
{
	system("color F0");//设置为白底黑字
}

void StudentInfoManager::printMenu()
{
	cout << "*****************" << endl;
	cout << "1. 加载学生信息" << endl;
	cout << "2. 查询学生信息" << endl;
	cout << "3. 添加学生信息" << endl;
	cout << "4. 保存到文件" << endl;
	cout << "5. 退出系统" << endl;
	cout << "*****************" << endl;
}

/*
void StudentInfoManager::optErro()
{
	cout << "输入错误！" << endl;
}
*/

void StudentInfoManager::readFromFile()
{
	clear();

	cout << "从文件加载" << endl;
	cout << "输入文件名:\n-->";
	string fileName;
	getline(cin, fileName);
	if (fileName.empty())
		fileName = "student.dat";//默认文件名
	if (!checkFileName(fileName))
	{
		cout << "重新输入文件名:-->\n";
	}
	readFromFile(fileName);
}

bool StudentInfoManager::checkFileName(string fileName)
{
	return true;
}

void StudentInfoManager::saveToFile()
{
	printf("输入文件名:\n-->");
	string fileName;
	getline(cin, fileName);
	if (fileName.empty())
		fileName = "student.dat";//默认文件名
	if (!checkFileName(fileName))
	{
		cout << "重新输入文件名:-->\n";
	}
	saveToFile(fileName);
}

void StudentInfoManager::printAll()
{

}

void StudentInfoManager::query()
{
	cout << "请选择需执行的操作" << endl;
	cout << "0.返回     1.查询学生信息" << endl;
	//clear();
	int opt1,opt2;
	cin >> opt1;
	switch (opt1)
	{
	case 0:
		readFromFile();
		break;
	case 1:
		cout << "请选择查询方式" << endl;
		cout << "1.以姓名查询" << endl;
		cin >> opt2;
		switch (opt2)
		{
		case 1:

		}
	}
}

void StudentInfoManager::insert()
{

}

void StudentInfoManager::erase()
{
}

void StudentInfoManager::saveAndExit()
{
	saveToFile();
}

StudentInfoManager::StudentInfoManager()
{
}
void StudentInfoManager::queryByName()
{
	string name;
	getline(cin, name);
	queryByName(name);
}
void StudentInfoManager::queryById()
{
}

void StudentInfoManager::queryBySchoolIDd()
{

}

void StudentInfoManager::printStudent(const Student& student)
{
}


