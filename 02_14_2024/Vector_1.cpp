#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
	using namespace std;

	vector<int> v;

	cout << "Vector is empty? ";
	if (v.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(1);
	cout << "Vector is empty? ";
	if (v.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(2);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(3);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(4);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(5);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(6);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(7);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(8);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.push_back(9);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
