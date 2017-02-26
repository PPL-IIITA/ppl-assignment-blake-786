#include "build_allotgift.h"

void Allot::assign_gifts() {
	r.get_data();
	com.make_commit(r);
	int i, j;
	for(i = 0; i < com.nc; i++) {
		int sum = 0;
		int it = 0;
		for(j = 0; j < r.ngift_t; j++) {
			sum = sum + r.gift_t[j].e.price + r.gift_t[j].l.price + r.gift_t[j].u.price;
			if(sum > com.c[i].g.m_cost && (com.c[i].b.type == 0 || com.c[i].b.type == 2)) {
				break;
			}
			if(sum > com.c[i].b.budget && com.c[i].b.type == 1) {
				break;
			}
			com.c[i].gift[it] = r.gift_t[j];
			it++;
		}
		if(sum < com.c[i].g.m_cost) {
			int k = j;
			while(k < r.ngift_t) {
				sum = sum + r.gift_t[k].e.price + r.gift_t[k].l.price + r.gift_t[k].u.price;
				if(sum > com.c[i].g.m_cost) {
					break;
				}
				com.c[i].gift[it] = r.gift_t[k];
				it++;
				k++;
			}
			com.c[i].b.budget = sum;	
		}
		if(com.c[i].b.type == 1 && sum < com.c[i].b.budget) {
			int k = j;
			while(k < r.ngift_t) {
				if(r.gift_t[k].type == 1) {
					if(sum + r.gift_t[k].l.price <= com.c[i].b.budget) {
						com.c[i].gift[it] = r.gift_t[k];
						it++;
						break;
					}
				}
			}
		}
		com.c[i].ng = it;
	}
}
