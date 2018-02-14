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
	size_t mode_frequency;

	if (v.empty()) return modes;
	for (size_t i = 0; i < v.size(); ++i) frequencies[v[i]]++;
	mode_frequency = max_element(frequencies.begin(), frequencies.end(), compare_frequencies)->second;
	for (map<double, size_t>::iterator it = frequencies.begin(); it != frequencies.end(); ++it) {
		if (it->second == mode_frequency) modes.push_back(it->first);
	}
	return modes;	
}

ostream& operator<<(ostream& os, const vector<double>& v)
{
	if (!v.empty()) {
		for (size_t i = 0; i < v.size() - 1; ++i) {
			os << v[i] << ' ';
		}
		os << v.back();
	}
	return os;
}

int main()
{
	double n;
	vector<double> v, modes;

	while (cin >> n) v.push_back(n);
	if (v.empty()) return 0;
	modes = find_modes(v);
	cout << endl << "Modes: " << modes << endl;
	return 0;
}
