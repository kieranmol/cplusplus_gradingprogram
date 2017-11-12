#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int gradeInput;
    string grade;
    
    cin >> gradeInput;
    
    if (gradeInput == 100) {
        grade = "A";
        }
    if (gradeInput >= 90 && gradeInput < 99) {
        grade = "B";
        } 
    if (gradeInput >= 70 && gradeInput < 79) {
        grade = "C";
        }     
    if (gradeInput >= 0 && gradeInput < 69) {
        grade = "F";
        } 
        
    cout << "This persons grade is: " << gradeInput << "\n";    
    cout << "This persons scored an: " << grade << "\n";
    
	return 0;
}
