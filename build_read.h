#include "build_couple.h"
class Read		/*! \brief READ CLASS.
					
						Class containg methods which read input from a file.
					*/
{
	public:
		Boy b[100];				/*!< Array containing all boys*/
		Girl g[100];			/*!< Arrray containing all gilrs*/
		int nb;					/*!< Total no. of Boys*/
		int ng;					/*!< Total no. of Girls*/
		int ngift_t;			/*!< Total no. of Gifts*/
		Gift gift_t[100];		/*!< Array containg all Gifts*/
		void get_data();		/*!< Method to read data from a file*/
};

