// FindZigZagSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findZigZagSequence(vector < int > a, int n) {
	sort(a.begin(), a.end());
	int mid = (n - 1) / 2;
	swap(a[mid], a[n - 1]);

	int st = mid + 1;
	int ed = n - 2;
	while (st <= ed) {
		swap(a[st], a[ed]);
		st = st + 1;
		ed = ed - 1;
	}
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << a[i];
	}
	cout << endl;
}

int main()
{
	vector<int> vect{ 2, 8, 6, 3, 5, 9, 4, 1, 7 };

	findZigZagSequence(vect, vect.size());

	return EXIT_SUCCESS;
}
