#include "build_couple.h"
#include <ctime>
#include <iostream>
void Couple::calc_happiness() {
	double hg, hb, nsb, nsg, nsg2;
	hg =  hb = nsb = nsg = nsg2 = 0;
	for(int i = 0; i < ng; i++) {
		nsb+=gift[i].e.price + gift[i].l.price + gift[i].u.price;
		nsg+=gift[i].e.value + gift[i].l.value + gift[i].u.value;
		nsg2+=gift[i].e.value + gift[i].l.value * 2 + gift[i].u.value;
	}
	double val;
	switch(g.type) {
		case 0:
			val = nsb - g.m_cost;
			val = val + nsg2;
			if(val > 0) {
				hg = val;
			}
		break;
		case 1:
			hg = nsg + nsb;
		break;
		case 2:
			hg = nsb * log(2);
		break;
	}
	switch(b.type) {
		case 0:
			val = b.budget - nsb;
			if(val > 0) {
				hb+=val;
			}
		break;
		case 1:
			hb = hg;
		break;
		case 2:
			hb = g.iq;
		break;
	}
	if(g.type == 2) {
		hap = hg + log(hb);
	}
	else {
		hap = log(hg + hb);
	}
}
void Couple::calc_compatibility() {
	comp = b.budget - g.m_cost + abs(b.atr - g.atr) + abs(b.iq - g.iq);
}
void Couple::print()  {
	b.print();
	g.print();
	cout << endl;
	cout << "Gifts Exchanged\n";
	for(int i = 0; i < ng; i++) {
		time_t now = time(0);
		char *time = ctime(&now);
		cout << "Time : " << time << endl;
		gift[i].print();
		cout << endl;
	}
}

