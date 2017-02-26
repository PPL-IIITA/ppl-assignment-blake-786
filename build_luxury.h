#include <iostream>
class Luxury		/*! \brief LUXURY GIFT CLASS.
					
						Class representing all the details of Luxury gift.
					*/
{
	public:
		int price;			/*!< Price of Luxury Gift*/
		int value;			/*!< Value of Luxury Gift*/
		int rating;			/*!< Rating of Luxury Gift*/
		int difficulty;		/*!< Difficulty in obtaining Luxury Gift*/
		Luxury() {			/*!< Constructor initilaizing  attributes of Luxury Gift*/
			rating = difficulty = value = price = 0;
		}
		void print();	/*!< Method to Print attributes of Luxury Class*/
};


