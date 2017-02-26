#include <iostream>
#include "build_essential.h"
#include "build_luxury.h"
#include "build_utility.h"
class Gift		/*! \brief GIFT CLASS.
					
						Class representing all the details of Gift.
					*/
{
	public:
		int type;		/*!< Type of gift: 0 - Essential, 1 - Luxury, 2 - Essential*/
		Essential e;	/*!< Essential gift*/
		Luxury l;		/*!< Luxury gift*/
		Utility u; 		/*!< Utility gift*/
		void print();	/*!< Method to Print attributes of Gift*/
};
