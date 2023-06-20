
typedef struct 
{
    int english;
    int mathematics;
    int computer_science;
}MARKS;

typedef struct 
{
    char first_name[12];
    char middle_name[12];
    char last_name[12];
}NAME;

typedef struct{
    int day;
    int month;
    int year;
}date_of_birth;

struct student
{
    char student[20];
    int roll_no;
    NAME name;
    char sex;
    date_of_birth DOB;
    MARKS marks;
};