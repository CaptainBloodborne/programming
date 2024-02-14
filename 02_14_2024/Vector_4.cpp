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

	v.erase(v.end() - 1);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.erase(v.begin() + 4, v.end());
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.clear();
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;

	return 0;
}
