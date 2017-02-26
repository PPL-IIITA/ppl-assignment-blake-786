#include <iostream>
#include <cstring>
#include <stdbool.h>
#include <cstring>
#include <iostream>
using namespace std;
class Boy 		/*! \brief BOY CLASS.
					
						Class representing all the details of Boy.
					*/
{
	public:
		string ty[3];		/*!< Array containing all type of Boys*/ 
		string name;		/*!< Name of Boy*/
		int atr;			/*!< Attractiveness of Boy*/
		int budget;			/*!< Budget of Boy*/
		int iq;				/*!< Intelligence level of Boy*/
		int atr_req;		/*!< Attraction Requirement of Boy*/
		int type;			/*!< 0 - The Miser, 1 - The Generous, 2 - The GEEKS*/
		bool single;		/*!< Determine whether boy is single or not*/
		
		Boy() {				/*!< Constructor initializing attributes of Boy*/
			ty[0] = "The Miser";
			ty[1] = "The Generous";
			ty[2] = "The GEEKS";
			single = true;
		}
		void print();		/*!< Method to Print the Boy attribuytes*/

};
