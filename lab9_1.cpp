#include<iostream>
#include <string>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	for (int i = 1; ; i++)
	{
		cout << "Student [ "<< i <<" ]: ";
		cin >> grade; 			//The loop must be terminated when grade = '0'
		if(grade == "0"){
			cout << "In total "<< i-1 << " students."<< endl;
			cout << "A = " << count[0] <<", ";
			cout << "B = " << count[1] <<", ";
			cout << "C = " << count[2] <<", ";
			cout << "D = " << count[3] <<", ";
			cout << "F = " << count[4] <<", ";
			break;
		} 
		if(grade == "A") count[0] += 1;
		else if(grade == "B") count[1] += 1;
		else if(grade == "C") count[2] += 1;
		else if(grade == "D") count[3] += 1;
		else if(grade == "F") count[4] += 1;
		else{ 
			cout << "Wrong input please input again." << endl;
			i--; 
		}
	}
	return 0 ;
}

