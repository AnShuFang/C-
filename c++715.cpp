#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	/*int sum=0, value=0;
	while (cin >>value)
	{
		sum += value;
		cout << "��͵�ֵ�ǣ�" << sum << endl;
	}*/

	/*int a = 0, b = 10;
	cout << (a || b) << endl;*/
	//��ֻС�������,���ڵ����⣬�����ж�������ȵ����
	/*int a = 0, b = 0, c = 0;
	cout << "������С��A��������" <<  endl;
	cin >> a;
	cout << "������С��B��������" <<  endl;
	cin >> b;
	cout << "������С��C��������" <<  endl;
	cin >> c;

	if (a > b)
	{

		if (a > c)
		{
			cout << "С��A����������" << endl;

		}
		else

		{
			cout << "С��C����������" << endl;
		}
	}
	else
	{
		if (b> c)
		{
			cout << "С��B����������" << endl;

		}
		else

		{
			cout << "С��C����������" << endl;
		}
	}*/


	/*int a = 2, b = 5, c = 3;

	c = a > b ? a : b;
	cout << c << endl;*/
	//switch������Ӱ���
	/*int a = 0;
	cout << "�������Ӱ������" << endl;
	cin >> a;
	switch (a)
	{
	case 10:
		cout << "��Ӱ����" << endl;
	}*/
	/*int num = 0;
	while (num <= 9)
	{
		cout << num << endl;
		num++;
	}*/
	//�����������ӣ����õ�ǰʱ�����ɻ�����
	//srand((unsigned int)time(NULL));
	//int num = rand() % 100;//ϵͳ�����������0-99֮��,����ÿ���������ȷ��ֵ
	////cout << num << endl;
	//int value = 0;
	//while (1)
	//{
	//	cin >> value;
	//	if (value > num)
	//	{
	//		cout << "�²����" << endl;
	//	}
	//	else if (value < num)
	//	{
	//		cout << "�²��С" << endl;
	//	}
	//	else
	//	{
	//		cout << "�²���ȷ" << endl;
	//		break;
	//	}
	//}
	/*int a = 0, b = 0, c = 0, d = 0;
	int value = 100;
	do {
		a = value % 10;
		b = (value / 10) % 10;
		c = value / 100;
		d = a*a*a+ b*b*b + c*c*c;
		if (d == value)
		{
			cout << value << endl;
		}
		value++;
	} while (value < 1000);*/
    /*int i = 1;
	for (i = 1; i < 100; i++)
	{
		if (((i % 10) == 7) || ((i / 10) == 7) || (i % 7 == 0))
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}*/
      /*int i,j;
	  for (j = 1; j <= 10; j++)
	  {
		  for (i = 1; i <= 10; i++)
		  {
			  cout << "* ";
		  }
		  cout << endl;
	  }*/
	system("pause");
	return 0;
}