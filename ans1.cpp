#include "build_allotgift.h"
#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("output1.txt", "w+", stdout);
	int i;
	Allot al;
	al.assign_gifts();
	for(i = 0; i < al.com.nc; i++) {
		cout << "Couple " << i + 1 << endl;
		al.com.c[i].b.print();
		al.com.c[i].g.print();
		cout << endl;
	}
	return 0;
}
