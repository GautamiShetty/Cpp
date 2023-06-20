#include <iostream>
#include <cstdlib>
#include "struct_student.cpp"
using namespace std;

int main()
{
    //struct student s1;
    struct student *s2;
 
    // Entering name using pointer
    cout << endl << "Enter the student : ";
    fgets(s2->student, 20, stdin);

    fflush(stdin);

    cout << endl << "Enter the roll no : ";
    cin >> s2->roll_no;

    cout << endl << "Enter first name : ";
    cin >> s2->name.first_name;

    fflush(stdin);

    cout << endl << "Enter middle name : ";
    cin >> s2->name.middle_name;
    fflush(stdin);    
    cout << endl << "Enter last name : ";
    cin >> s2->name.last_name;

    fflush(stdin);    

    cout << endl <<  "Enter the sex : ";
    cin >> s2->sex;

    cout << endl << "Enter Date of Birth(day/month/year) : ""(Enter the date of birth with spaces) " << endl;
    cin >> s2->DOB.day >> s2->DOB.month >> s2->DOB.year;

    cout << endl << "Enter marks in English : ";
    cin >> s2->marks.english;

    cout << endl << "Enter marks in Mathematics : ";
    cin >> s2->marks.mathematics;
    
    cout << endl << "Enter marks in Computer Science : ";
    cin >> s2->marks.computer_science;

    system("CLS");

    cout <<endl << "Student     : " << s2->student;

    cout << endl << "Roll no     : " << s2->roll_no;

    cout << endl << "First name  : " << s2->name.first_name;

    cout << endl << "Middle name : " << s2->name.middle_name;
    
    cout << endl << "Last name   : " << s2->name.last_name;

    cout << endl << "Sex         : " << s2->sex;

    cout << endl << "Date of Birth(day/month/year) : " <<s2->DOB.day  << "/ "<< s2->DOB.month <<"/ " <<  s2->DOB.year;

    cout << endl << endl <<"Marks  ";
    cout << endl << "English          : " << s2->marks.english;

    cout << endl << "Mathematics      : "<<s2->marks.mathematics;
    
    cout << endl << "Computer Science : " <<s2->marks.computer_science;
    return 0;
}