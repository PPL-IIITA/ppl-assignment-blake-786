#include "build_gift.h"

void Gift::print() {
	if(type == 0) {
		cout << "Essential\n";
		e.print();
	}
	else if(type == 1) {
		cout << "Luxury\n";
		l.print();
	}
	else if(type == 2) {
		cout << "Utility\n";
		u.print();
	}
}
