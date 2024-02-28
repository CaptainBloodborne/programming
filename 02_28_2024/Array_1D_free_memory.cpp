//C++ One-dimensional Array

#include <iostream>

int main()
{
	using namespace std;

	int i(0);
	int last_index;
	char line[] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' };
	int size(sizeof line);
	char* p = new char[size];

	for (int i = 0; i < size; ++i) p[i] = line[i];
	cout << sizeof line << endl;
	last_index = (sizeof line) - 1;
	cout << last_index << endl;
	cout << line << '\t';
	while (line[i]) cout << line[i++];
	cout << '\t';
	cout << p << '\t';
	i = 0;
	while (p[i]) cout << p[i++];
	cout << endl;

	cout << p[last_index-1] << endl;
	cout << int(p[last_index-1]) << endl;
	cout << p[last_index+1] << endl;
	cout << int(p[last_index+1]) << endl;

	delete[] p;

	return 0;
}
