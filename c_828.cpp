#include<iostream>
#include <string>
using namespace std;
#define MAX 1000
struct Person //联系人结构体
{
	string m_name;//姓名
	int gender;//性别 1、男  2、女
	int m_age;//年龄
	string m_phone;//电话
	string m_adress;//住址


};
struct Addressbooks //通讯录结构体
{
	struct Person person[MAX];
	int m_size;
};
//封装函数显示界面，ShowMenu
void ShowMenu(void)
{
	cout << "1、添加联系人" << endl;
	cout << "2、显示联系人" << endl;
	cout << "3、删除联系人" << endl;
	cout << "4、查找联系人" << endl;
	cout << "5、修改联系人" << endl;
	cout << "6、清空联系人" << endl;
	cout << "0、退出通讯录" << endl;


}
//添加联系人函数
void addPerson(struct Addressbooks* abs)
{
	if (abs->m_size >= MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
	}
	else
	{
		//添加具体联系人
			//添加姓名
		string name;
		cout << "请输入一个姓名" << endl;
		cin >> name;
		abs->person[abs->m_size].m_name = name;
		//添加性别
		int gender;
		cout << "请输入性别：1、男，2、女" << endl;
		while (true)
		{
			cin >> gender;
			if (gender != 1 && gender != 2)
			{
				cout << "输入错误,请重新输入" << endl;
			}
			else
			{
				abs->person[abs->m_size].gender = gender;
				break;
			}
		}
		//添加年龄
		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->person[abs->m_size].m_age = age;
		//添加电话
		string phone;
		cout << "请输入联系电话" << endl;
		cin >> phone;
		abs->person[abs->m_size].m_phone = phone;
		//添加家庭住址
		string address;
		cout << "请输入家庭住址" << endl;
		cin >> address;
		abs->person[abs->m_size].m_adress = address;

	}
	abs->m_size++;
	cout << "联系人添加完毕" << endl;
	system("pause");
		system("cls");//清屏操作，操作系统函数调用
}
//显示联系人函数
void Showperson(struct Addressbooks *abs)
{
	//判断通讯录中是否存在联系人
	//如果不为0，则显示记录的联系人信息
	if (abs->m_size == 0)
	{
		cout << "当前的记录为空" << endl;
	}
	else
	{
		int i;
		for (i = 0; i < abs->m_size; i++)
		{
			cout << "姓名：" << abs->person[i].m_name << endl;
			cout << "性别：" << (abs->person[i].gender==1?"男":"女") << endl;
			cout << "年龄：" << abs->person[i].m_age << endl;
			cout << "电话：" << abs->person[i].m_phone << endl;
			cout << "地址：" << abs->person[i].m_adress << endl;
			cout << endl;
		}
	}
		system("pause");
		system("cls");
}
//检测联系人是否存在，存在，返回具体位置，不存在，返回-1；
int isExit(struct Addressbooks* abs, string name)
{
	int i;
	for (i = 0; i < abs->m_size; i++)
	{
		//找到用户返回的姓名
		if (abs->person[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}
//删除已存在的联系人
void delPerson(struct Addressbooks* abs)
{
	cout << "请输入删除联系人姓名" << endl;
	string name;
	cin >> name;
	int result = isExit(abs, name);
	if (result != -1)
	{
		int i;
		for (i = result; i < abs->m_size; i++)
		{
			abs->person[i] = abs->person[i + 1];//前移操作
		}
		abs->m_size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//查找存在的联系人
void findperson(struct Addressbooks* abs)
{
	cout << "请输入你要查找的联系人" << endl;
	string name;
	cin >> name;
	//判断联系人是否存在
	int result = isExit(abs, name);
	if (result!= -1)
	{
		cout << "姓名：" << abs->person[result].m_name << endl;
		cout << "性别：" << (abs->person[result].gender == 1 ? "男" : "女") << endl;
		cout << "年龄：" << abs->person[result].m_age << endl;
		cout << "电话：" << abs->person[result].m_phone << endl;
		cout << "地址：" << abs->person[result].m_adress << endl;
		cout << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//修改联系人信息
void changePerson(struct Addressbooks *abs)
{
	cout << "输入需要修改联系人的姓名" << endl;
	string name;
	cin >> name;
	int result = isExit(abs, name);
	if (result != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->person[result].m_name = name;
		//性别
		cout << "请输入性别" << endl;
		cout << "1、男" << endl;
		cout << "2、女" << endl;
		int gender;
		while (true)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->person[result].gender = gender;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
			}
		}
		//年龄
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->person[result].m_age = age;
		//电话
		cout << "请输入电话" << endl;
		string phone;
		cin >> phone;
		abs->person[result].m_phone = phone;
		//地址
		cout << "请输入地址" << endl;
		string address;
		cin >> address;
		abs->person[result].m_adress = address;
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//清空所以联系人信息
void clearPerson(struct Addressbooks* abs)
{
	abs->m_size = 0;
	cout << "通讯录已经清空" << endl;
	system("pause");
	system("cls");
}
int main()
{
	int select = 0;//创建用户选择变量
	//创建通讯录结构体
	struct Addressbooks abs;
	//初始化通讯录中当前人数个数
	abs.m_size = 0;
	while (true)
	{
		ShowMenu();//提示界面
		cin >> select;
		if (select == 1)//添加联系人
		{
			addPerson(&abs);
		}
		else if (select == 2)//显示联系人
		{
			Showperson(&abs);
		}
		else if (select == 3)//删除联系人
		{
			delPerson(&abs);
		}
		else if (select == 4)//查找联系人
		{
			findperson(&abs);
		}
		else if (select == 5)//修改联系人
		{
			changePerson(&abs);
		}
		else if (select == 6)//清空联系人
		{
			clearPerson(&abs);
		}
		else if (select == 0)//退出通讯录
		{
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		}
	}
	system("pause");
	return 0;
}