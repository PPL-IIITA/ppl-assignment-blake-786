#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <algorithm>
#include <time.h>
#include <cstdlib>

	/*!< Generate random Boys, Girls and Gifts for input file*/
using namespace std;
int main() {
	srand(time(NULL));
	freopen("input.txt", "w+", stdout);
	string arr1[] = {"Eddard" ,"John_S", "Robb_S", "Theon", "Bran_S", "Rickon", "Tyrion", "Jaime","Tywin", "Petyr", "Stannis", "Renly", "Joffrey", "Robert", "Samwell", "Loras", 
	"Davos", "Jorah", "Varys", "Bronn"};
	string arr2[] = {"Maeve", "Dolores", "Theresa", "Clement", "Elsie", "Arstice", "Angela", "Charlot", "Molly", "Mary_W", "Sally", "Karen", "Elektra", "Vanessa",
	"Claire", "Rachel", "Monica", "Phoebe", "Janice", "Carol"};
	int i;
	int n = rand()%5 + 15;
	cout << n << endl;
	for(i = 0; i < n;) {
		int k = rand()%n;
		if(arr1[k] != "") {
			cout << arr1[k] << " " << rand()%99 + 1 << " " << rand()%500 + 1 << " " << rand()%99 + 1 << " " << rand()%80 + 1 << " " << rand()%3;
			arr1[k] = "";
			i++;
			cout << endl;
		}
	}
	n = rand()%10 + 5;
	cout << n << endl;
	for(i = 0; i < n;) {
		int k = rand()%n;
		if(arr2[k] != "") {
			cout << arr2[k] << " " << rand()%99 + 1 << " " << rand()%400 + 1 << " " << rand()%99 + 1 << " " << rand()%3 << " " << rand()%3;
			arr2[k] = "";
			i++;
			cout << endl;
		}
	}
	int k = rand()%20 + 20;
	cout << k << endl;
	int a[k];
	for(i = 0; i < k; i++) {
		a[i] = rand()%70 + 30;
	}
	sort(a, a + k);
	for(i = 0; i < k; i++) {
		int ch = rand()%3;
		cout << ch << " " << a[i] << " " << rand()%100 + 1;
		if(ch) {
			cout << " " << rand()%100 + 1 << " " << rand()%100;
		}
		cout << endl;
	}
	fclose(stdout);
}
