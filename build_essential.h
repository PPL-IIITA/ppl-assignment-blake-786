#include <iostream>
using namespace std;
class Essential		/*! \brief ESSENTIAL GIFT CLASS.
					
						Class representing all the details of Essential gift.
					*/
{
	public:
		int price;			/*!< Price of Essential Gift*/
		int value;			/*!< Value of Essential Gift*/
		Essential() {		/*!< Constructor initilaizing  attributes of Essential Gift*/
			value = 0;
			price = 0;
		}
		
		void print();		/*!< Method to Print attributes of Essential Class*/
};
