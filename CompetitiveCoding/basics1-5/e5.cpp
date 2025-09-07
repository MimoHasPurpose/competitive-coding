#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int first_digit = s[s.size() - 1] - '0';
	int last_digit = s[0] - '0';

	// cout << first_digit << endl;
	// cout << last_digit << endl;
	// cout << s[0] << endl;
	// cout << s[0] + s[1] << endl;
	for (auto item : s)
	{
		cout << item << endl;
	}
	cout << last_digit << " " << first_digit << endl;
	return 0;
}
