#include <bits/stdc++.h>
#define CANDIDATE1 "| PARTY 1 | <RAM>   | 1 |"
#define CANDIDATE2 "| PARTY 2 | <NEELS> | 2 |"
#define CANDIDATE3 "| PARTY 3 | <VISH>  | 3 |"
#define CANDIDATE4 "| PARTY 4 | <DURGA> | 4 |"
#define CANDIDATE5 "| PARTY 5 | <KUMAR> | 5 |"
#define NOTA "|       NOTA        | 6 |"
using namespace std;
int vote1 = 0;
int vote2 = 0;
int vote3 = 0;
int vote4 = 0;
int vote5 = 0;
int nota_vote = 0;
int choice;
void vote_cast()
{
    cout << CANDIDATE1 << endl;
    cout << CANDIDATE2 << endl;
    cout << CANDIDATE3 << endl;
    cout << CANDIDATE4 << endl;
    cout << CANDIDATE5 << endl;
    cout << NOTA << endl;
}
void choose_candidate()
{

    cout << "Enter your choice: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        vote1++;
        break;
    case 2:
        vote2++;
        break;
    case 3:
        vote3++;
        break;
    case 4:
        vote4++;
        break;
    case 5:
        vote5++;
        break;
    case 6:
        nota_vote++;
        break;
    
    cout << endl
         << "Thanks for voting" << endl;
}
}
void vote_count()
{
    cout << CANDIDATE1 << vote1 << endl;
    cout << CANDIDATE2 << vote2 << endl;
    cout << CANDIDATE3 << vote3 << endl;
    cout << CANDIDATE4 << vote4 << endl;
    cout << CANDIDATE5 << vote5 << endl;
    cout << NOTA << nota_vote << endl;
}
void leading_candidate()
{
    if (vote1 > vote2 && vote1 > vote3 && vote1 > vote4 && vote1 > vote5)
    {
        cout << CANDIDATE1 << " leading --" << endl;
    }
    else if (vote2 > vote1 && vote2 > vote3 && vote2 > vote4 && vote2 > vote5)
    {
        cout << CANDIDATE2 << " leading --" << endl;
    }
    else if (vote3 > vote1 && vote3 > vote2 && vote3 > vote4 && vote3 > vote5)
    {
        cout << CANDIDATE3 << " leading --" << endl;
    }
    else if (vote4 > vote1 && vote4 > vote2 && vote4 > vote3 && vote4 > vote5)
    {
        cout << CANDIDATE4 << " leading --" << endl;
    }
    else if (vote5 > vote1 && vote5 > vote2 && vote5 > vote3 && vote5 > vote4)
    {
        cout << CANDIDATE5 << " leading --" << endl;
    }
    else
    {
        cout << "No winning chance -- NOTA is high " << endl;
    }
}
int main()
{
    int age, i = 1, ch;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible to vote " << endl;
        while (i < 20)
        {
            i++;
            cout << endl
                 << "Welcome to TamilNadu Election" << endl;
            cout << endl
                 << "Enter your choice: " << endl;
            cout << "1.Votable Candidates" << endl;
            cout << "2.Vote" << endl;
            cout << "3.Vote Count" << endl;
            cout << "4.Display Leading Candidates" << endl;
            cout << "5.Exit" << endl
                 << endl;
            cin >> ch;
            switch (ch)
            {
            case 1:
                vote_cast();
                break;
            case 2:
                vote_cast();
                choose_candidate();
                break;
            case 3:
                vote_count();
                break;
            case 4:
                leading_candidate();
                break;
            case 5:
                break;
            }
        }
    }
    else
    {
        cout << endl
             << "You are not eligible to vote " << endl;
        cout << endl
             << "Try after " << 18 - age << " years " << endl<<endl;
    }

    return 0;
}