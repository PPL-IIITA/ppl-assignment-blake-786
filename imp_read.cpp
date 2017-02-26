#include "build_read.h"
#include <bits/stdc++.h>
using namespace std;
void Read:: get_data() {
	freopen("input.txt", "r+", stdin);
	int n;
	cin >> n;
	nb = n;
	int i;
	for(i = 0; i < n; i++) {
		cin >> b[i].name >> b[i].atr >> b[i].budget >> b[i].iq >> b[i].atr_req >> b[i].type;
	}
	cin >> n;
	ng = n;
	for(i = 0; i < n; i++) {
		cin >> g[i].name >> g[i].atr >> g[i].m_cost >> g[i].iq >> g[i].choice >> g[i].type;
	}
	cin >> n;
	ngift_t = n;
	for(i = 0; i < n; i++) {
		cin >> gift_t[i].type;
		if(gift_t[i].type == 0) {
			cin >> gift_t[i].e.price;
			cin >> gift_t[i].e.value;
		}
		else if(gift_t[i].type == 1) {
			cin >> gift_t[i].l.price >> gift_t[i].l.value >> gift_t[i].l.rating >> gift_t[i].l.difficulty;
		}
		else {
			cin >> gift_t[i].u.price >> gift_t[i].u.value >> gift_t[i].u.u_value >> gift_t[i].u.u_class; 
		}
	}
}
