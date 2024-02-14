#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
	using namespace std;

	vector<int> v;

	v.reserve(7);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	v.reserve(v.size() + 7);
	for (int i = 1; i < 8; ++i) v.push_back(i);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.reserve(v.size() + 7);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.push_back(8);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	for (int k = 9; k < 16; ++k) v.push_back(k);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
