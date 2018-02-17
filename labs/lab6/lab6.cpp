#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

double find_mean(const vector<double> v)
{
	double sum = 0.0;
	for (size_t i = 0; i < v.size(); ++i)
		sum += v[i];
	return sum / v.size();
}

double find_median(const vector<double>& v)
{
	double result;
	vector<double> vc = v;
	sort(vc.begin(), vc.end());
	if (vc.size() % 2 == 0)
		result = (vc[vc.size() / 2] + vc[vc.size() / 2 - 1]) / 2;
	else
		result = vc[vc.size() / 2];
	return result;
}

bool compare_freq_pair(const pair<double, size_t>& a, const pair<double, size_t>& b)
{
	return a.second < b.second;
}

vector<double> find_modes(const vector<double>& v)
{
	size_t modal_freq;
	map<double, size_t> freq;
	vector<double> result;

	for (size_t i = 0; i < v.size(); ++i)
		freq[v[i]]++;
	modal_freq = max_element(freq.begin(), freq.end(), compare_freq_pair)->second;
	for (map<double, size_t>::iterator it = freq.begin(); it != freq.end(); ++it) {
		if (it->second == modal_freq) result.push_back(it->first);
	}
	return result;
}

double find_range(const vector<double>& v)
{
	return *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
}

ostream& operator<<(ostream& os, const vector<double>& v)
{
	if (v.empty()) return os;
	for (size_t i = 0; i < v.size() - 1; ++i)
		os << v[i] << ", ";
	os << v.back();
	return os;
}

int main()
{
	double n;
	vector<double> seq;

	while (cin >> n) seq.push_back(n);
	if (seq.size() < 2) return 1;
	cout << "Mean: " << find_mean(seq) << endl <<
		"Median: " << find_median(seq) << endl <<
		"Modes: " << find_modes(seq) << endl <<
		"Range: " << find_range(seq) << endl;
	return 0;
}
