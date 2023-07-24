/*
Problem Statement:

STUDENT GRADING SYSTEM

Create a program that manages student grades. Allow the user
to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest
and lowest grades.
*/

#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int priority(string grade)
{
    int value;

    if(grade=="A+")
    {
        value=10;
    }

    else if(grade=="A")
    {
        value=9;
    }

    else if(grade=="B+")
    {
        value=8;
    }
    
    else if(grade=="B")
    {
        value=7;
    }
    
    else if(grade=="C+")
    {
        value=6;
    }

    else if(grade=="C")
    {
        value=5;
    }

    else if(grade=="D+")
    {
        value=4;
    }

    else if(grade=="D")
    {
        value=3;
    }

    else if(grade=="E+")
    {
        value=2;
    }

    else if(grade=="E")
    {
        value=1;
    }

    return value;

}

string average_grade(string grade1,string grade2,string grade3,string grade4)
{
    int G1,G2,G3,G4,average;
    string grade;

    G1=priority(grade1);
    G2=priority(grade2);
    G3=priority(grade3);
    G4=priority(grade4);

    average=ceil((G1+G2+G3+G4)/4);

    if(average==10)
    {
        grade="A+";
    }

    else if(average==9)
    {
        grade="A";
    }

    else if(average==8)
    {
        grade="B+";
    }

    else if(average==7)
    {
        grade="B";
    }

    else if(average==6)
    {
        grade="C+";
    }

    else if(average==5)
    {
        grade="C";
    }

    else if(average==4)
    {
        grade="D+";
    }

    else if(average==3)
    {
        grade="D";
    }

    else if(average==2)
    {
        grade="E+";
    }

    else if(average==1)
    {
        grade="E";
    }

    return grade;

}

int main()
{
    string grade_1,grade_2,grade_3,grade_4;
    int number,count=0,i,flag;

    cout<<"Enter the number of students: ";
    cin>>number;

    flag=number;

    string names[number],final_grade[number];

    while(number--)
    {

        cout<<"\nEnter the name of student "<<count+1<<": ";
        cin>>names[count];

        cout<<"\nEnter first grade obtained by "<<names[count]<<": ";
        cin>>grade_1;

        cout<<"\nEnter second grade obtained by "<<names[count]<<": ";
        cin>>grade_2;

        cout<<"\nEnter third grade obtained by "<<names[count]<<": ";
        cin>>grade_3;

        cout<<"\nEnter fourth grade obtained by "<<names[count]<<": ";
        cin>>grade_4;

        final_grade[count]=average_grade(grade_1,grade_2,grade_3,grade_4);

        count++;
        
     }

    cout<<"\nFinal grades obtained are as follows: "<<endl;

    cout<<"\nNames"<<"\t\t"<<"Grades"<<endl;

    for(i=0;i<flag;i++)
    {
        cout<<"\n"<<names[i]<<"\t\t  "<<final_grade[i];
    }

    return 0;

}