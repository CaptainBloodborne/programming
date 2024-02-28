//C++ One-dimensional Array

#include <iostream>

int main()
{
	using namespace std;

	int i(0);
	int last_index;
	static char line[] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' };

	cout << sizeof line << endl;
	last_index = (sizeof line) - 1;
	cout << last_index << endl;
	cout << line << '\t';
	while (line[i]) cout << line[i++];
	cout << endl;

	cout << line[last_index-1] << endl;
	cout << int(line[last_index-1]) << endl;
	cout << line[last_index+1] << endl;
	cout << int(line[last_index+1]) << endl;

	return 0;
}
