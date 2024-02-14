#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
	using namespace std;

	vector<int> v;

	for (int i = 1; i < 9; ++i) v.push_back(i);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.resize(5);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.resize(13, 7);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
