#include <iostream>
#include <cstring>
#include <algorithm>
#include <time.h>
#include <cstdlib>
#include <bits/stdc++.h>
	/*generate random no. for couples*/
using namespace std;
int main() {
	srand(time(NULL));
	freopen("input2.txt", "w+", stdout);
	cout << rand()%8 + 1 << endl;
	fclose(stdout);
}
