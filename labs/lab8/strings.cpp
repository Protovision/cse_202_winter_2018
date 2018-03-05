#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main(int argc, char* argv[])
{
	char c;
	string s;
	fstream f;

	if (argc != 2) return 1;
	f.open(argv[1], fstream::in | fstream::binary);
	if (!f.is_open()) return 1;
	while (f.get(c)) {
		if (isprint(c) || isspace(c)) {
			s += c;
		} else {
			if (c == 0 && s.size() > 3) cout << s << endl;
			s.clear();
		}
	}
	return 0;
}
