#include <conio.h>
#include <iostream>
#include <list>

using namespace std;


class PoolMem
{
private:
	int count;		// ���������� ������
	int size;		// ������ ������� �����
	char head;		// ��������� �� ������� �����
	char** blocks;	// ������ ������
	char* stack;	// ������ ���������� �� �����
	int kaktus;

public:
	PoolMem(int count, int size)
	{
		this->count = count;
		this->size = size;
		this->kaktus = 0;

		// �������� ������ ������ ��������� �������
		this->blocks = new char*[count];
		for (size_t i = 0; i < count; i++)
		{
			this->blocks[i] = new char[size];		// ��� ����� ��� �������. ���.
		}

		// ������� ���� �� ���������� ������
		this->stack = new char[count];
		for (size_t i = 0; i < count; i++)
		{
			stack[i] = *(blocks[i]);		// ��� ����� ��� ��������� �� ��� �� �����. ���.
		}
		this->head = stack[kaktus];
	}

	// ��������. ������������� ���������� ���� �� ����� � ���������� ��������� �� ����.
	void Allot()
	{

		
	}

	// ����������. ������� ���������� ���� � ����
	void Release(char pointer)
	{
		stack[kaktus] = pointer;		// ������� � ������� ����� ��������� �� ���������� ����

		kaktus++;						// �������� ������ ������� �����

		head = stack[kaktus];			// �������� ������� �����
	}

};

void main()
{

}