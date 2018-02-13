#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare_frequencies(const pair<const double, size_t>& a, const pair<const double, size_t>& b)
{
	return a.second < b.second;
}

vector<double> find_modes(const vector<double>& v)
{
	vector<double> modes;
	map<double, size_t> frequencies;
	size_t max_frequency;

	for (vector<double>::const_iterator it = v.begin(); it != v.end(); ++it)
		frequencies[*it]++;
	max_frequency = max_element(frequencies.begin(), frequencies.end(), compare_frequencies)->second;
	for (map<double, size_t>::iterator it = frequencies.begin(); it != frequencies.end(); ++it) {
		if (it->second == max_frequency) modes.push_back(it->first);
	}
	return modes;	
}

int main()
{
	double n;
	vector<double> v, modes;
	while (cin >> n) v.push_back(n);
	modes = find_modes(v);
	cout << endl << "Modes: ";
	for (vector<double>::iterator it = modes.begin(); it != modes.end(); ++it)
		cout << *it << ' ';
	cout << endl;
}
