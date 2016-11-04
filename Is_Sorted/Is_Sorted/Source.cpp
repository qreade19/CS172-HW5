#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size) // Very simple here. Didn't even have to use the typename variable inside the template
{
	bool sorted = true;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (list[i] > list[j])
				sorted = false;
			break;
		}
	}
	return sorted;
}

int main()
{
	int list1[] = { 1,3,6,10,-4,-7 };
	double list2[] = { 1.1,2,4.5,4.6,70,81 };
	string list3[] = { "string","Battle","Aqua", "Gastly", "Haunter", "Gengar" }; // Random original ghost pokes because WHY NOT??
	cout << isSorted(list1, 6) << endl;
	cout << isSorted(list2, 6) << endl;
	cout << isSorted(list3, 6) << endl;
}