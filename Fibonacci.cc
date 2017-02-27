#include <iostream>

using namespace std;

long int fib_arr[3] = {0, 1, 1};


long int fibb_gen(long int got_num){
	
	long int zero = 0;
	long int one = 1;
	
	if(got_num == 0)
		return zero;
	if(got_num == 1)
		return one;
	if(got_num == 2)
		return one;
	
	for (long int i = 3; i <= got_num; i++){

		fib_arr[i] = fib_arr[i-1] + fib_arr[i-2];
		
		if(i == got_num){
			return fib_arr[i];
		}
	}
	
	return 0;
}


long int adder(long int my_num){
	
	long int difference = 0;
	long int test_fib = 0;
	long int test_fib2 = 0;
	long int t = 0;
		
	for(long int i = 0; t < 1; i++){
	
		test_fib = fibb_gen(i);
		test_fib2 = fibb_gen(i-1);
		
		if(test_fib > my_num){
			long int comp1 = test_fib - my_num;
			long int comp2 = my_num - test_fib2;
      
			if(comp1 < comp2){
				t++;
				cout << flush;
				difference = test_fib - my_num;
				cout << "+F" << i;
			}
		
			else
			{
				t++; 
				difference = my_num - test_fib2;
				cout << "-F" << i-1;
			}
		}
	}
  
	return difference;
}


void which_num(){
	
	long int that_num = 0;
	long int differ = 1;
	
		cout << "Pick a number... \n";
		cin >> that_num;
	
		differ = adder(that_num);
	
		while(differ > 0){
			
			differ = adder(differ);
		}
		
		cout << endl;
}


int main() {

	which_num();
  
} 
