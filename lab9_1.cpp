#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double  Interest,y,Payment,NewBalance,PrevBalance,total;
	int ye = 1 ; 
	cout << "Enter initial loan: ";
	cin >> PrevBalance ;
	cout << "Enter interest rate per year (%): ";
	cin >> y ;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	NewBalance = PrevBalance ;
	while (NewBalance != 0)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << ye++; 
		cout << setw(13) << left << NewBalance ;
		Interest = NewBalance*(y/100) ;
		cout << setw(13) << left << Interest ;  //Interest
		total = NewBalance + Interest ;
		cout << setw(13) << left << total ;
		  if (total < Payment)
		  {
			Payment = total ;
			cout << setw(13) << left << Payment ; //"Payment"
			NewBalance = total-Payment ;
			cout << setw(13) << left << NewBalance ;
			cout << "\n";
		  }else{
			cout << setw(13) << left << Payment ;
			NewBalance = total-Payment ;
			cout << setw(13) << left << NewBalance ;
			cout << "\n";
			
		  }
		  

	}
}
