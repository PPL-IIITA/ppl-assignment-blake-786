#include <iostream>
#include <algorithm>
#include "build_read.h"
class Commit 		/*! \brief COMMIT CLASS.
					
						Class to sort Couples.
					*/
	
{
	public:
		Couple c[100];		/*!< Array containing all couples*/
		int nc;				/*!< No. of couples*/
		Commit() {			/*!< Constructor initilaizing  attributes of Commit*/
			nc = 0;
		}
		void sort_happiness();			/*!< Method to sort couples on the basis of their happiness*/
		void sort_compatibility();		/*!< Method to sort couples on the basis of their compatibility*/
		void make_commit(Read r);		/*!< Method to make couples of single boy and single girl*/
};

