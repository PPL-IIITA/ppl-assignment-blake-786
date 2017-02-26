#include "build_girl.h"
void Girl::print() {
	cout << "GIRL : Name - " << name << "\tAttractiveness - " << atr << "\tMaintenance Cost - " << m_cost << "\tIntelligence Level - " << iq;
	cout << "\tChoosing criteria - " << ch[choice];
	cout << "\tType - " << ty[type] << "\tState - ";
	if(single) {
		cout << "Single\n";
	}
	else {
		cout << "Committed\n";
	}
}
