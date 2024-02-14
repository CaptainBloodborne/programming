#include <iostream>
#include <vector>

int main()
{
	using namespace std;

	vector<int> v;

	v.push_back(1);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	cout << v[0] << endl;

	int index(0);
	while (1)
	{
		cout << "Index? ";
		cin >> index;
		if (cin.fail()) cin.clear();
		while (cin.get() != '\n');
		cout << v[index] << endl;
	}

	return 0;
}
