#include <iostream>
#include "struct_student.cpp"
using namespace std;

void accept_structure(struct student &s1)
{
    cout <<endl << "Enter the student : ";
    cin >> s1.student;

    fflush(stdin);

    cout << endl << "Enter the roll no : ";
    cin >> s1.roll_no;

    cout << endl << "Enter first name : ";
    cin >> s1.name.first_name;

    fflush(stdin);

    cout << endl << "Enter middle name : ";
    cin >> s1.name.middle_name;
    fflush(stdin);    
    cout << endl << "Enter last name : ";
    cin >> s1.name.last_name;

    fflush(stdin);    

    cout << endl <<  "Enter the sex(F / M / O) : ";
    cin >> s1.sex;

    cout << endl << "Enter Date of Birth(day/month/year) : ""(Enter the date of birth with spaces) " << endl;
    cin >> s1.DOB.day >> s1.DOB.month >> s1.DOB.year;

    cout << endl << "Enter marks in English : ";
    cin >> s1.marks.english;

    cout << endl << "Enter marks in Mathematics : ";
    cin >> s1.marks.mathematics;
    
    cout << endl << "Enter marks in Computer Science : ";
    cin >> s1.marks.computer_science;
}

void dispaly_structure(struct student s1)
{
    cout << endl << "Student     : " <<s1.student;

    cout << endl << "Roll no     : " << s1.roll_no;

    cout << endl << "First name  : " << s1.name.first_name;

    cout << endl << "Middle name : " << s1.name.middle_name;
    
    cout << endl << "Last name   : " << s1.name.last_name;

    cout << endl << "Sex         : " << s1.sex;

    cout << endl << "Date of Birth(day/month/year) : " <<s1.DOB.day  << "/ "
    << s1.DOB.month <<"/ " <<  s1.DOB.year;

    cout << endl << endl <<"Marks  ";
    cout << endl << "English          : " << s1.marks.english;

    cout << endl << "Mathematics      : "<<s1.marks.mathematics;
    
    cout << endl << "Computer Science : " <<s1.marks.computer_science;
}

int main()
{
    struct student s1;
    accept_structure(s1);
    dispaly_structure(s1);
    return 0;
}