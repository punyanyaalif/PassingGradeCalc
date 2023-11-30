#include <iostream>
#include <string>

using namespace std;

class temp{
    float quiz1, quiz2, midexam, finalexam, quiztotal;
    float quizpercent, midpercent, finalpercent, totalpercent;
    string grade;
    public : 
        void GetMarks();
        void CalcMarks();
        void CalcGrade();
        void ShowGrade();
}obj;

void temp :: GetMarks(){
    cout << "ATTENTION...!!!\n";
    cout << "Quizes score range from 1 to 10...\n";
    cout << "Exams score range from 1 to 100...";

    cout << "\nInput score for Quiz 1 : ";
    cin >> quiz1;

    cout << "\nInput score for Quiz 2 : ";
    cin >> quiz2;

    cout << "\nInput score for Mid Exam : ";
    cin >> midexam;

    cout << "\nInput score for Final Exam : ";
    cin >> finalexam;
    printf("\n");
}

void temp :: CalcMarks(){
    quiztotal = quiz1 + quiz2;
    quizpercent = (25.0 / 20.0) * quiztotal;
    midpercent = (25.0 / 100.0) * midexam;
    finalpercent = (50.0 / 100.0) * finalexam;

    totalpercent = quizpercent + midpercent + finalpercent;
}

void temp :: CalcGrade(){
    if(totalpercent >= 90.0){
        grade = "A";
    }
    if(totalpercent >= 80.0 && totalpercent < 90.0){
        grade = "B";
    }
    if(totalpercent >= 70.0 && totalpercent < 80.0){
        grade = "C";
    }
    if(totalpercent >= 60.0 && totalpercent < 70.0){
        grade = "D";
    }
    if(totalpercent >= 50.0 && totalpercent < 60.0){
        grade = "E";
    }
    if(totalpercent >= 0.0 && totalpercent < 50.0){
        grade = "F";
    }
}

void temp :: ShowGrade(){
    cout << "\n\n";
    cout << "-------------------------------------\n";
    cout << "Your Passing Grade is : " << grade << endl;
    cout << "-------------------------------------\n";
}