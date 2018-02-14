#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	char c;
	size_t index;
	string content, substring, replacement;

	if (argc != 3) {
		cout << "Usage: " << argv[0] << " SEARCH_STR REPLACE_STR" << endl;
		return 1;
	}
	substring = argv[1];
	replacement = argv[2];
	while (cin.get(c)) content += c;
	if (content.empty()) return 0;
	while ((index = content.find(substring)) != string::npos)
		content.replace(index, substring.size(), replacement);
	cout << content;
	return 0;
}
