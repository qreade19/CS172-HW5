#include <iostream>
#include <string>
using namespace std;

template<typename T>
class vector // Apparantly using a capitalized class name as opposed to an uncapitalized one can change everything. Who knew?
{
private:
	T* vectorArray;
	int capacity;
	int num;
	void increaseCapacityTo(int newSize) {
		T* newList = new T[newSize];
		for (int i = 0; i < size; i++)
		{
			newList[i] = items[i];
		}

		delete[] items;
		items = newList;
		size = newSize;
	}
	void doubleCapacity()
	{
		increaseCapacityTo(size * 2);
	}
public:
	vector<T>()
	{
		capacity = 10;
		num = 0;
		vectorArray = new T[capacity];
	};
	vector <T>(int size)
	{
		capacity = size;
		num = size;
		vectorArray = new T[capacity];
	};
	vector<T>(int size, T defaultValue)
	{
		capacity = size;
		num = size;
		vectorArray = new T[capacity];
		for (unsigned i = 0; i < size; i++)
		{
			vectorArray[i] = defaultValue;
		}
	};
	void push_back(T element)
	{
		if (num == vectorArray.size)
		{
			doubleCapacity();
		}
		vectorArray[num] = element;
		num++;
	};
	void pop_back() // Everything from here to the swap is pretty simple. Not much needed to accomplish their tasks.
	{
		num--;
	};
	unsigned size() const
	{
		return num;
	};
	T at(int index) const
	{
		return vectorArray[index];
	};
	bool empty() const
	{
		if (num == 0)
			return true;
		else
			return false;
	};
	void clear()
	{
		num = 0;
	};
	void swap(vector v2)
	{
		T temp[size];
		for (int i = 0; i < size; i++)
		{
			temp[i] = vectorArray[i];
		}
		for (int i = 0; i < size; i++)
		{
			vectorArray[i] = v2[i];
		}
		for (int i = 0; i < size; i++)
		{
			v2[i] = temp[i];
		}
	}; // Performing a deep copy here so that the values of the arrays are switched around.
};

int main()
{

}// Only because I'll get errors for not including this...