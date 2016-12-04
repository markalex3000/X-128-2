// Read an integer and detemrine if odd or even

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

int main() {
	vector<double> temps;	//temperatures
	for (double temp; cin >> temp;)
	{
		temps.push_back(temp);
	}

	// clears the cin fail bit and burns the offending character
	if (cin.fail())
	{
		cin.clear();
		char c;
		cin >> c;
	}

	// print out temps
	for (double t : temps) cout << t << '\n';

	//compute mean temprature
	double sum{ 0 };
	for (double x : temps) sum += x;
	cout << "Average temperature: " << sum / temps.size() << '\n';

	//compute median temperature
	sort(temps.begin(), temps.end());

	// print out sorte3d temps
	for (double t : temps) cout << t << '\n';

	cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

	keep_window_open();

	return 0;
}