#include <iostream>
#include <cstring>
#include <stdbool.h>
using namespace std;
class Girl 			/*! \brief GIRL CLASS.
					
						Class representing all the details of girl.
					*/
{
	public:
		string ch[3];			/*!< Array containing all criteria*/
		string ty[3];			/*!< Array containing all type of Girls*/ 
		string name;			/*!< Name of Girl*/
		int atr;				/*!< Attractiveness of Girl*/
		int m_cost;				/*!< Maintenance cost of girl*/
		int iq;					/*!< intelligence level*/
		int choice;				/*!< choice criteria: 0 - most attractive, 1 - most rich, 2 - most intelligent*/
		int type;				/*!< 0 - The choosy, 1 - The normal, 2 - The desperate*/
		bool single;			/*!< Determine whether girl is single or not*/
		
		Girl() {				/*!< Constructor initializing attributes of Girl*/
			ch[0] = "Most Attractive";
			ch[1] = "Most Rich";
			ch[2] = "Most Intelligent";
			ty[0] = "The Choosy";
			ty[1] = "The Normal";
			ty[2] = "The Desperate";
			single = true;		
		}
		void print();		/*!< Method to Print the Girl attribuytes*/
};
