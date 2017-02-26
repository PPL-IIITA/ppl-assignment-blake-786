#include "build_allotgift.h"
#include <iostream>
#include <fstream>
/*writing k most happy couple */
using namespace std;
int main() {
	ifstream fp1;
	ofstream fp2;
	fp1.open("input2.txt");
	int i;
	Allot al;
	al.assign_gifts();
	int k;
	fp1>> k;
	fp1.close();
	freopen("output2.txt", "w+", stdout);
	al.com.sort_happiness();
	cout << k << " most happiest couple" << endl;
	for(i = 0; i < min(k, al.com.nc); i++) {
		al.com.c[i].b.print();
		al.com.c[i].g.print();
		cout << endl;
	}
	cout << endl;
	cout << k << " most compatible couple" << endl;
	al.com.sort_compatibility();
	for(i = 0; i < min(k, al.com.nc); i++) {
		al.com.c[i].b.print();
		al.com.c[i].g.print();
		cout << endl;
	}
	cout << endl;
	cout << "All Couples Data\n";
	cout << endl;
	for(i = 0; i < al.com.nc; i++) {
		cout << "Couple " << i + 1 << endl;
		al.com.c[i].print();
		cout << endl;
	}
	return 0;
}
