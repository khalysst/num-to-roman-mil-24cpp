#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>
#include <conio.h>
#include <stdlib.h>

using namespace std; 

int main () {
	
	int choice;
	int val, num;
	int h, m, mt, H; 
	string rnum;
	int one, ten, hun, tho;
	
	cout << "=====================================" << endl; 
	cout << "              CONVERSION               " << endl; 
	cout << "=====================================" << endl; 
	cout << "[1] numbers to roman" << endl; 
	cout << "[2] military to 24 hour" << endl; 
	cout << "[3] exit" << endl; 
	cout << "=====================================" << endl; 
	cout << "                                        " << endl; 
	cout << "Enter your choice: "; 
	cin >> choice; 
	
	switch (choice)
	{
		case 1:
		
		cout << "                                        " << endl; 
		cout << "=====================================" << endl; 
		cout << "  NUMBER TO ROMAN NUMERAL CONVERSION  " << endl; 
		cout << "=====================================" << endl; 
		cout << "                                        " << endl; 
		cout << "Enter a number (1-3000 only): "; 
		cin >> val; 
	
		if ((val <= 3000 && val >= 0))
		{

	
	one = val % 10;
	ten = (val % 100)/10; 
	hun = (val % 1000)/100;
	tho = (val % 10000)/1000;
	
	
	if (tho == 3)
	{
		rnum = "MMM";
		cout << rnum;
	}
	
	else if (tho == 2)
	{
		rnum = "MM";
		cout << rnum;
	}
	
	else if (tho == 1)
	{
		rnum = "M";
		cout << rnum; 
	}
	
	if (hun == 1)
	{
		rnum = "C";
		cout << rnum;
	}
	
	else if (hun == 2)
	{
		rnum = "CC";
		cout << rnum;
	}
	
	else if (hun == 3)
	{
		rnum = "CCC";
		cout << rnum; 
	}
	
	else if (hun == 4)
	{
		rnum = "CD";
		cout << rnum;
	}
	
	else if (hun == 5)
	{
		rnum = "D";
		cout << rnum; 
	}
	
	else if (hun == 6)
	{
		rnum = "DC";
		cout << rnum;
	}
	
	else if (hun == 7)
	{
		rnum = "DCC";
		cout << rnum; 
	}
	
	else if (hun == 8)
	{
		rnum = "DCCC"; 
		cout << rnum; 
	}
	
	else if (hun == 9)
	{
		rnum = "CM";
		cout << rnum;
	}
	
	if (ten == 1)
	{
		rnum = "X";
		cout << rnum; 
	}
	
	if (ten == 2)
	{
		rnum = "XX";
		cout << rnum; 
	}
	
	else if (ten == 3)
	{
		rnum = "XXX";
		cout << rnum;
	}
	
	else if (ten == 4)
	{
		rnum = "XL";
		cout << rnum;
	}
	
	else if (ten == 5)
	{
		rnum = "L";
		cout << rnum;
	}
	
	else if (ten == 6)
	{
		rnum = "LX";
		cout << rnum;
	}
	
	else if (ten == 7)
	{
		rnum = "LXX";
		cout << rnum;
	}
	
	else if (ten == 8)
	{
		rnum = "LXXX";
		cout << rnum;
	}
	
	else if (ten == 9)
	{
		rnum = "XC";
		cout << rnum; 
	}
	
	if (one == 1)
	{
		rnum = "I";
		cout << rnum;
	}
	
	else if (one == 2)
	{
		rnum = "II";
		cout << rnum; 
	}
	
	else if (one == 3)
	{
		rnum = "III";
		cout << rnum;
	}
	
	else if (one == 4)
	{
		rnum = "IV";
		cout << rnum;
	}
	
	else if (one == 5)
	{
		rnum = "V";
		cout << rnum;
	}
	
	else if (one == 6)
	{
		rnum = "VI";
		cout << rnum; 
	}
	
	else if (one == 7)
	{
		rnum = "VII";
		cout << rnum;
	}
	
	else if (one == 8)
	{
		rnum = "VIII";
		cout << rnum;
	}
	
	else if (one == 9)
	{
		rnum = "IX";
		cout << rnum;
	}
}

	else 

	cout << "Invalid input. 1-3000 only.";


	
		return 0;

		
		break; 
		
		case 2:
			
		cout << "                                        " << endl; 
		cout << "============================================" << endl; 
		cout << "  MILITARY TIME TO STANDARD TIME CONVERSION  " << endl; 
		cout << "============================================" << endl; 
		cout << "                                        " << endl; 
		cout << "Enter time: "; 
		cin >> mt; 
		h = mt / 100;
		m = mt % 100; 
		
		if ((h >=0 && h <= 23) && (m >= 0 && m <= 59))

{ 

	if (h > 12)
	{ 
	
		if (m < 10)
		{
			H = h % 12;
			cout << "The standard time of " << h << ":0" << m << " is " << H << ":0" << m << "PM.";
		
		}
		
		if (m > 10)
		
		{
		
		H = h % 12; 
		cout << "The standard time of " << h << ":" << m << " is " << H << ":" << m << "PM."; 
		
	}
	
	}

	else if (h == 0)

	{
		if (m < 10)
		{
			H = 12;
			cout << "The standard time of " << h << ":0" << m << " is " << H << ":0" << m << "AM.";
		
		}
		

		if (m > 10)
		{
		H = 12;
		cout << "The standard time of " << h << ":" << m << " is " << H << ":" << m << "AM."; 
	}
	}

	else 
	{
		
		if (m < 10)
		{
			H = h;
			cout << "The standard time of " << h << ":0" << m << " is " << H << ":0" << m << "AM.";
		
		}
		
		if (m > 10)
		{
		H = h; 
		cout << "The standard time of " << h << ":" << m << " is " << H << ":" << m << "AM.";
	}
	}

}

		else 

		cout << "Input invalid. Time must be 0-2400 only.";
		
		return 0;
	
		break; 
		
		case 3: 
		
		
		cout << "Program terminated.";
		
		return 0;
		
		break; 
		
		default: 
		
		cout << "                                        " << endl; 
		cout << "Choice is invalid. Enter 1-3 only."; 
			
	}
	

return 0;
	
	
}
