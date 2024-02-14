#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(3);

	cout << "Vector is empty? ";
	if (v.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.push_back(1);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.push_back(2);
	cout << "Vector size: " << v.size() << endl;
	cout << "Vector capacity: " << v.capacity() << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
