// Lab_03_4.cpp
// < ������ ������ >
// ����������� ������ � 3.4
// ������������ , ������ ������� �������.
// ������ 14

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x ; // ������� �������� 
	double y ; // ������� �������� 
	double R1; // ������� ��������
	double R2; // ������� ��������
	double R0; // 

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 ="; cin >> R1;
	cout << "R2 = "; cin >> R2;

     R0 = sqrt((x * x) + (y * y));

	// ������������ � ����� ����
	if((x<0 && y>0) || (x>0 && y<0))
		cout << "no" << endl;
	else if (
		 R2 <= R0
		&&
		R0 <= R1
		)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}