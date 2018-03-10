#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main()
{
	string s;
	size_t i;
	unsigned long int n;

	while (cin >> n) {
		s = bitset<32>(n).to_string();
		if ((i = s.find('1')) == string::npos) i = s.size() - 1;
		s.erase(0, i);
		cout << s << endl;
	}
	return 0;
}
