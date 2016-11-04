#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	srand(time(0));
	for (int i = 0; i < v.size(); i++)
	{
		int index = rand() % v.size(); // Picks a random number each repeat.
		T temp = v[i];
		v[i] = v[index];
		v[index] = temp; // a simple swap formula related to the rng.
	}
}

int main()
{
	vector<int> v(11);
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1); // Applying the KISS method here.
	shuffle(v); // Call the function.
	cout << "Numbers in the vector: ";
	for (int i = 0; i < v.size(); i++) // Outputs the newly shuffled array.
		cout << v[i] << " ";
	cout << endl;
	return 0;
}