#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	while (cin >> s)
		cout << bitset<32>(s).to_ulong() << endl;
	return 0;
}
