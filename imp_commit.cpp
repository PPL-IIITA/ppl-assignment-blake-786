#include "build_commit.h"
void Commit:: make_commit(Read r) {
	int i, j;
	for(i = 0; i < r.ng; i++) {
		int id = -1;
		int ch = r.g[i].choice;
		for(j = 0; j < r.nb; j++) {
			if(r.b[j].single) {
				if(r.b[j].budget >= r.g[i].m_cost && r.g[i].atr >= r.b[j].atr_req) {
					if(id == -1) {
						id = j;
					}
					else {
						if(ch == 0 && r.b[j].atr > r.b[id].atr) {
							id = j;
						}
						else if(ch == 1 && r.b[j].budget > r.b[id].budget) {
							id = j;
						}
						else if(ch == 2 && r.b[j].iq > r.b[id].iq) {
							id = j;
						}
					}
				} 
			}
		}
		if(id != -1) {
			r.b[id].single = false;
			r.g[i].single = false;
			c[nc].b = r.b[id];
			c[nc].g = r.g[i];
			nc++;
		}
	}
}
void Commit::sort_happiness() {
	for(int i = 0; i < nc; i++) {
		c[i].calc_happiness();
	}
	for(int i = 0; i < nc; i++) {
		for(int j = 0; j < nc - 1; j++) {
			if(c[j].hap  < c[j + 1].hap) {
				Couple temp;
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
}
void Commit::sort_compatibility() {
	for(int i = 0; i < nc; i++) {
		c[i].calc_compatibility();
	}
	for(int i = 0; i < nc; i++) {
		for(int j = 0; j < nc - 1; j++) {
			if(c[j].comp  < c[j + 1].comp) {
				Couple temp;
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
}
