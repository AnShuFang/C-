#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	/*int sum=0, value=0;
	while (cin >>value)
	{
		sum += value;
		cout << "求和的值是：" << sum << endl;
	}*/

	/*int a = 0, b = 10;
	cout << (a || b) << endl;*/
	//三只小猪撑体重,存在的问题，不能判断体重相等的情况
	/*int a = 0, b = 0, c = 0;
	cout << "请输入小猪A的重量：" <<  endl;
	cin >> a;
	cout << "请输入小猪B的重量：" <<  endl;
	cin >> b;
	cout << "请输入小猪C的重量：" <<  endl;
	cin >> c;

	if (a > b)
	{

		if (a > c)
		{
			cout << "小猪A的体重最重" << endl;

		}
		else

		{
			cout << "小猪C的体重最重" << endl;
		}
	}
	else
	{
		if (b> c)
		{
			cout << "小猪B的体重最重" << endl;

		}
		else

		{
			cout << "小猪C的体重最重" << endl;
		}
	}*/


	/*int a = 2, b = 5, c = 3;

	c = a > b ? a : b;
	cout << c << endl;*/
	//switch语句给电影打分
	/*int a = 0;
	cout << "请输入电影分数：" << endl;
	cin >> a;
	switch (a)
	{
	case 10:
		cout << "电影不错" << endl;
	}*/
	/*int num = 0;
	while (num <= 9)
	{
		cout << num << endl;
		num++;
	}*/
	//添加随机数种子，利用当前时间生成机数；
	//srand((unsigned int)time(NULL));
	//int num = rand() % 100;//系统生成随机数，0-99之间,但是每次随机数是确定值
	////cout << num << endl;
	//int value = 0;
	//while (1)
	//{
	//	cin >> value;
	//	if (value > num)
	//	{
	//		cout << "猜测过大" << endl;
	//	}
	//	else if (value < num)
	//	{
	//		cout << "猜测过小" << endl;
	//	}
	//	else
	//	{
	//		cout << "猜测正确" << endl;
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
			cout << "敲桌子" << endl;
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