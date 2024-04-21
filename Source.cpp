#include <iostream>
using namespace std;
#include "Array.h"

//������� ���� Array.���� Array � �� ���� ���������� ������.
//����� ������ ���� ���� ��������� �� �������� ���
//������� �� ��������� ������� ������� - �����.���� ������� ��������� ����������� ����� ����������,
//���������� ���� ������, �������� ����� ������, ���������
//�����, ��������� �������� � ����������� ��������.
//���� ������� ������ ���� ������������(�����������
//��������� �����������), ����������.
//������ � ���� Array ����������� ����������.



int main()
{
	Array arr(5);
	arr.fillArray();
	arr.printArray();
	arr.sortArr();
	arr.printArray();
	Array arr2(move(arr));
	arr.printArray();
	arr2.printArray();
	cout << "Min in array: " << arr2.minInArr() << endl;
	cout << "Max in array: " << arr2.maxInArr() << endl;
	return 0;
}