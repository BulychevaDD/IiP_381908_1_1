//����������� ����������� ���������
#include <iostream>
#include <clocale>
using namespace ::std;
int check(double x, double y, double z) //�������, ����������� ������������� ������������
{
	if ((x < y + z) && (y < x + z) && (z < x + y))
		return 1;
	else
	{
		cout << "������ ������������ �� ����������." << endl;
		return 0;
	}
}
int cos(double x, double y, double z)//�������, ������������ ���� �������� ����
{
	//���������� ������� ���������
	double cos = (y * y + z * z - x * x) / (2 * y * z);
	if (cos > 0)
		return 1;
	else
	{
		if (cos == 0)
			return 0;
		else return -1;
	}
}
void triangle(double x, double y, double z) //�������, ������������ ��� ������������
{
	int X = cos(x, y, z);
	int Y = cos(y, x, z);
	int Z = cos(z, x, y);
	if ((X < 0) || (Y < 0) || (Z < 0))
		cout << "������������";
	else
	{
		if (!X || !Y || !Z)
			cout << "�������������";
		else cout << "�������������";
	}

}
int main()
{
	setlocale(LC_CTYPE, "rus"); //����������� ���������
	double a, b, c;
	//����. ������������ �� ������ �� ����, ���� �� ������ ���������� �������� ������
	do {
		cout << "������� ����� ������: ";
		cin >> a >> b >> c;
	} while (!check(a, b, c));
	triangle(a, b, c);
	return 0;
}