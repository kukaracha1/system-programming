#include <conio.h>
#include <iostream>
#include <list>

using namespace std;


class PoolMem
{
private:
	int count;		// количество блоков
	int size;		// размер каждого блока
	char head;		// указатель на вершину стека
	char** blocks;	// массив блоков
	char* stack;	// массив указателей на блоки
	int kaktus;

public:
	PoolMem(int count, int size)
	{
		this->count = count;
		this->size = size;
		this->kaktus = 0;

		// выделяем массив блоков заданного размера
		this->blocks = new char*[count];
		for (size_t i = 0; i < count; i++)
		{
			this->blocks[i] = new char[size];		// вот здесь вот пустота. вот.
		}

		// создаем стек на количество блоков
		this->stack = new char[count];
		for (size_t i = 0; i < count; i++)
		{
			stack[i] = *(blocks[i]);		// вот здесь вот указатели на вот те блоки. вот.
		}
		this->head = stack[kaktus];
	}

	// выделить. удаляетавуыцй выделенный блок из стека и возвращает указатель на него.
	void Allot()
	{

		
	}

	// освободить. заносит полученный блок в стек
	void Release(char pointer)
	{
		stack[kaktus] = pointer;		// заносим в вершину стека указатель на полученный блок

		kaktus++;						// сместили индекс вершини стека

		head = stack[kaktus];			// обновили вершуну стека
	}

};

void main()
{

}