#include<iostream>
#include <string>
using namespace std;
#define MAX 1000
struct Person //��ϵ�˽ṹ��
{
	string m_name;//����
	int gender;//�Ա� 1����  2��Ů
	int m_age;//����
	string m_phone;//�绰
	string m_adress;//סַ


};
struct Addressbooks //ͨѶ¼�ṹ��
{
	struct Person person[MAX];
	int m_size;
};
//��װ������ʾ���棬ShowMenu
void ShowMenu(void)
{
	cout << "1�������ϵ��" << endl;
	cout << "2����ʾ��ϵ��" << endl;
	cout << "3��ɾ����ϵ��" << endl;
	cout << "4��������ϵ��" << endl;
	cout << "5���޸���ϵ��" << endl;
	cout << "6�������ϵ��" << endl;
	cout << "0���˳�ͨѶ¼" << endl;


}
//�����ϵ�˺���
void addPerson(struct Addressbooks* abs)
{
	if (abs->m_size >= MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
	}
	else
	{
		//��Ӿ�����ϵ��
			//�������
		string name;
		cout << "������һ������" << endl;
		cin >> name;
		abs->person[abs->m_size].m_name = name;
		//����Ա�
		int gender;
		cout << "�������Ա�1���У�2��Ů" << endl;
		while (true)
		{
			cin >> gender;
			if (gender != 1 && gender != 2)
			{
				cout << "�������,����������" << endl;
			}
			else
			{
				abs->person[abs->m_size].gender = gender;
				break;
			}
		}
		//�������
		int age;
		cout << "����������" << endl;
		cin >> age;
		abs->person[abs->m_size].m_age = age;
		//��ӵ绰
		string phone;
		cout << "��������ϵ�绰" << endl;
		cin >> phone;
		abs->person[abs->m_size].m_phone = phone;
		//��Ӽ�ͥסַ
		string address;
		cout << "�������ͥסַ" << endl;
		cin >> address;
		abs->person[abs->m_size].m_adress = address;

	}
	abs->m_size++;
	cout << "��ϵ��������" << endl;
	system("pause");
		system("cls");//��������������ϵͳ��������
}
//��ʾ��ϵ�˺���
void Showperson(struct Addressbooks *abs)
{
	//�ж�ͨѶ¼���Ƿ������ϵ��
	//�����Ϊ0������ʾ��¼����ϵ����Ϣ
	if (abs->m_size == 0)
	{
		cout << "��ǰ�ļ�¼Ϊ��" << endl;
	}
	else
	{
		int i;
		for (i = 0; i < abs->m_size; i++)
		{
			cout << "������" << abs->person[i].m_name << endl;
			cout << "�Ա�" << (abs->person[i].gender==1?"��":"Ů") << endl;
			cout << "���䣺" << abs->person[i].m_age << endl;
			cout << "�绰��" << abs->person[i].m_phone << endl;
			cout << "��ַ��" << abs->person[i].m_adress << endl;
			cout << endl;
		}
	}
		system("pause");
		system("cls");
}
//�����ϵ���Ƿ���ڣ����ڣ����ؾ���λ�ã������ڣ�����-1��
int isExit(struct Addressbooks* abs, string name)
{
	int i;
	for (i = 0; i < abs->m_size; i++)
	{
		//�ҵ��û����ص�����
		if (abs->person[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}
//ɾ���Ѵ��ڵ���ϵ��
void delPerson(struct Addressbooks* abs)
{
	cout << "������ɾ����ϵ������" << endl;
	string name;
	cin >> name;
	int result = isExit(abs, name);
	if (result != -1)
	{
		int i;
		for (i = result; i < abs->m_size; i++)
		{
			abs->person[i] = abs->person[i + 1];//ǰ�Ʋ���
		}
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//���Ҵ��ڵ���ϵ��
void findperson(struct Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	//�ж���ϵ���Ƿ����
	int result = isExit(abs, name);
	if (result!= -1)
	{
		cout << "������" << abs->person[result].m_name << endl;
		cout << "�Ա�" << (abs->person[result].gender == 1 ? "��" : "Ů") << endl;
		cout << "���䣺" << abs->person[result].m_age << endl;
		cout << "�绰��" << abs->person[result].m_phone << endl;
		cout << "��ַ��" << abs->person[result].m_adress << endl;
		cout << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//�޸���ϵ����Ϣ
void changePerson(struct Addressbooks *abs)
{
	cout << "������Ҫ�޸���ϵ�˵�����" << endl;
	string name;
	cin >> name;
	int result = isExit(abs, name);
	if (result != -1)
	{
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->person[result].m_name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1����" << endl;
		cout << "2��Ů" << endl;
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
				cout << "������������������" << endl;
			}
		}
		//����
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->person[result].m_age = age;
		//�绰
		cout << "������绰" << endl;
		string phone;
		cin >> phone;
		abs->person[result].m_phone = phone;
		//��ַ
		cout << "�������ַ" << endl;
		string address;
		cin >> address;
		abs->person[result].m_adress = address;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//���������ϵ����Ϣ
void clearPerson(struct Addressbooks* abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼�Ѿ����" << endl;
	system("pause");
	system("cls");
}
int main()
{
	int select = 0;//�����û�ѡ�����
	//����ͨѶ¼�ṹ��
	struct Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��������
	abs.m_size = 0;
	while (true)
	{
		ShowMenu();//��ʾ����
		cin >> select;
		if (select == 1)//�����ϵ��
		{
			addPerson(&abs);
		}
		else if (select == 2)//��ʾ��ϵ��
		{
			Showperson(&abs);
		}
		else if (select == 3)//ɾ����ϵ��
		{
			delPerson(&abs);
		}
		else if (select == 4)//������ϵ��
		{
			findperson(&abs);
		}
		else if (select == 5)//�޸���ϵ��
		{
			changePerson(&abs);
		}
		else if (select == 6)//�����ϵ��
		{
			clearPerson(&abs);
		}
		else if (select == 0)//�˳�ͨѶ¼
		{
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		}
	}
	system("pause");
	return 0;
}