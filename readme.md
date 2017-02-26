PPL_ASSIGNMENT blake-786

CREATED BY - 

MOHAMMAD AYAN SHEIIKH

IIT2015079

SEC-A

=>Step 1: Generate random input by running following command:
			
			-> g++ random_generator.cpp;
			
			-> ./a.out
			
			-> g++ random_generator_2.cpp;
			
			-> ./a.out


=>Step 2: To create library:

		-> g++ -c imp_allotgift.cpp;
		
		-> g++ -c imp_boy.cpp;
		
		-> g++ -c imp_commit.cpp;
		
		-> g++ -c imp_couple.cpp;
		
		-> g++ -c imp_essential.cpp;
		
		-> g++ -c imp_gift.cpp;
		
		-> g++ -c imp_girl.cpp;
		
		-> g++ -c imp_luxury.cpp;
		
		-> g++ -c imp_read.cpp;
		
		-> g++ -c imp_utility.cpp;

		-> ar rvs lib1 *.o;


=>Step 3: To run Question 1 execute following commands:

		-> g++ ans1.cpp lib1
		
		-> ./a.out

		-> Output of this question will be in "output1.txt"

		To run Question 2 execute following commands:
		
		-> g++ ans2.cpp lib1
		
		-> ./a.out

		-> Output of this question will be in "output2.txt"

=> Documentation of the Project can be found at html/index.html

=> Class Diagram of Project is in pdf file "CLASS DIAGRAM"