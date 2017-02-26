#include <iostream>
#include <cmath>
#include "build_girl.h"
#include "build_boy.h"
#include "build_gift.h"
class Couple 		/*! \brief COUPLE CLASS.
					
						Class representing all the details of Couple.
					*/
	
{
	public:
		Boy b;				/*!< Boy of couple*/
		Girl g;				/*!< Girl of couple*/
		Gift gift[100];		/*!< Gifts given*/
		int ng;				/*!< No. of gifts given*/
		double hap;			/*!< Happiness of Couple*/
		int comp;			/*!< Compatibility of Couple*/
		
		Couple() {			/*!< Constructor initilaizing  attributes of Couple*/
			ng = 0;
			b.single = g.single = false;
		}
		void calc_happiness();		/*!< Method to Calculate happiness of Couple*/
		void calc_compatibility();	/*!< Method to Calculate the compatibility of Couple*/
		
		void print();				/*!< Method to Print the attributes of Couple*/
};
