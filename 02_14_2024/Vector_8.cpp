#include <iostream>
#include <vector>
#include <stdexcept>

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
		try
		{
         		cout << v.at(index) << endl;
		}
		catch(out_of_range)
		{
			cout << "Index is out of range!" << endl;
		}
	}

	return 0;
}
