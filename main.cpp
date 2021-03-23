#include <iostream>
using namespace std;


int func3()
{
	int num = 0;
	cout << '\n'
		 << "insert number" << endl;
	cin >> num;
	num % 2 == 0;
	if(num == 0)
		cout << num << " is even" << endl;
	else
		cout << num << " is odd" << endl;
	
	return 0;
}

int func10()
{

}

int main()
{
	while (true)
	{
		int nInputManu = 0;

		cout << '\n'
			 << "Select Method below";
		cout << '\n'
			 << "1. Swap two number";// 황현성
		cout << '\n'
			 << "2. Quotient and Remainder";//  박재성
		cout << '\n'
			 << "3. Check whether number is Even or Odd";//  전성호
		cout << '\n'
			 << "4. Calculate Sum of Natural Numbers";//  김은경
		cout << '\n'
			 << "5. Check Leap Year";//  김량훈
		cout << '\n'
			 << "6. Factorial";//  김주성
		cout << '\n'
			 << "7. Find Largest element of an array";//  김주성
		cout << '\n'
			 << "8. Check Prime Number";//  김량훈
		cout << '\n'
			 << "9. Display Prime Number between two intervals";//  김은경
		cout << '\n'
			 << "10. Calculate Power of a Number";//  전성호
		cout << '\n'
			 << "11. Find GCD";//  박재성
		cout << '\n'
			 << "12. Find LCM";//  황현성
		cout << '\n'
			 << "Select Number>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";

		cin >> nInputManu;

		if(nInputManu == 3)
			func3();
		else 
			cout << "error" << endl;
	}

	return 0;
}
