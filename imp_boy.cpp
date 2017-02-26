#include "build_boy.h"

void Boy::print() {
	cout << "BOY : Name - " << name << "\tAttractiveness - " << atr << "\tBudget - " << budget << "\tIntelligence Level - " << iq;
	cout << "\tAttracton Requirement - " << atr_req << "\tType - " << ty[type] << "\tState - ";
	if(single) {
		cout << "Single\n";
	}
	else {
		cout << "Committed\n";
	}
}
