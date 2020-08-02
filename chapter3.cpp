#include <iostream>
#include <string>
using namespace std; 
int main()
{
	float First, Second, Third, Mt, Finals;
	float Qt,Totals;

	cout << "==========QUIZZES==========" << endl;
	cout << "Enter First Quizz (10) :";
	cin >> First;

	cout << "Enter Second Quizz (10) :";
	cin >> Second;

	cout << "Enter Third Quizz (10) :";
	cin >> Third;

	cout << "==========MID-TERM==========" << endl;
	cout << "Enter Mid-term (40):";
	cin >> Mt;

	cout << "==========Finals==========" << endl;
	cout << "Enter Finals (50) :";
	cin >> Finals;

	Qt = (First + Second + Third)/3; 
	cout << "Quizz Total : " << Qt << endl;

	cout << "Mid Term : " << Mt << endl; 
	cout << "Finals :" << Finals << endl;

	Totals = Mt + Finals + Qt ;
	cout << "Total :" << Totals<< endl;

	cout << "Your Score is " << ((Totals >= 50) ? "PASS" : "FALLED");
	cout << endl;

	system("pause");
	return(0);
}
