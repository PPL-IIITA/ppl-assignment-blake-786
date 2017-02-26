#include <iostream>

class Utility 		/*! \brief UTILITY GIFT CLASS.
					
						Class representing all the details of Utility gift.
					*/
{
	public:
		int price;		/*!< Price of Utility Gift*/
		int value;		/*!< Value of Utility Gift*/
		int u_value;	/*!< Utility value*/
		int u_class;	/*!< Utility class*/
		
		Utility() {		/*!< Constructor initilaizing  attributes of Utility Gift*/
			u_value = u_class = value = price = 0;
		}
		void print();	/*!< Method to Print attributes of Utility Class*/
};


