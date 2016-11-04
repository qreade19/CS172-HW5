#include <iostream>
#include <string>
using namespace std;

template<typename L> // Pretty simple conversion. Mostly just replacing select data types into the template type.
L linearSearch(const L list[], L key, int arraySize) // arraySize stays an integer as all arrays require an int for its size.
{
	for (int i = 0; i < arraySize; i++) // Since arraySize stays an int, so does the i variable here.
	{
		if (key == list[i])
			return key;
	}
	return list[-1]; // Not the best way to show that it's not there, I know. 'Tis effective though. The missing one sticks out like a sore thumb.
}

int main()
{
	int list1[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	double list2[] = { 1.1, 10, 3.5, 4.4, 500, 450, 30, 63, };
	string list3[] = { "Word", "Dragon", "Game", "Wash", "Sing", "Awesome", "Aqua", "Fire" }; // Just chose random words that popped in my head. LOL.
	string searchWord = "Fire"; // Did this because the function was annoyingly deciding that "Fire" was 5 characters instead of 1 string. 
								// Since I don't know how to fix that, I just made it as plain as possible for the program.
	cout << linearSearch(list1, 4, 8) << endl; // Now that the function's a template, I relized that using variables to bring out the values was not working. So, I just called them outright.
	cout << linearSearch(list3, searchWord, 8) << endl;
	cout << linearSearch(list2, 5.3, 8) << endl;
	return 0;
}