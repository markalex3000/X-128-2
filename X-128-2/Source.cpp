// Vector practice with temperatures, average and means

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

	cout << "Sloppy Median temperature: " << temps[temps.size() / 2] << '\n';

	// Revision to handle cases where number of entries is even - based on:
	// The formula used to find the middle number of a data set of n numbers 
	// is (n + 1) ÷ 2. This either gives the middle number (for an odd number 
	// of values) or the halfway point between the two middle values. 
	// For example, with 14 values, the formula will give 7.5, and the median 
	// will be taken by averaging the seventh and eighth values.


	
	if ((temps.size()+1) % 2)  // > 0 i.e., True when temp.size() is even (even number of elements
	{
	
		int low_middle = temps.size() / 2 - 1;
		
		cout << "Median temperature (even number of elements):" <<
			(temps[low_middle] + temps[low_middle + 1]) / 2 << '\n';
	}
	else
	{
		int middle = (temps.size() + 1) / 2 - 1;
		
		cout << "Median temperature (odd number of elements): " << temps[middle] << '\n';
	}

	keep_window_open();

	return 0;
}