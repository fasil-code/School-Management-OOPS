#include <bits/stdc++.h>
using namespace std;
class Principal
{
private:
    string username;
    string password;
    int capcha;
    string orgi = "Fasil";
    string pa = "12#45rd";

public:
    void user_name()
    {
        cout << "User name given to you one time" << endl;
        cout << "Enter your user name :" << endl;
        cin >> username;
        cout << "Enter your password :" << endl;
        cin >> password;
        if (username == "Fasil" && password == "12#455rd")
        {
            cout << "Enter your tasks :" << endl;
            cout << endl;
            cout << " Press 1 for Accounts " << endl;
            cout << " Press 2 for Student Section " << endl;
            cout << " Press 3 for Sports Section " << endl;
            cout << " Press 4 for Staff " << endl;
            cout << " Press 4 for Labs " << endl;
            cout << " Press 0 for Exit " << endl;
        }
    }
};
class student
{
    int marks;
    string subjects;
    int Rollnumber;
    string name;

public:
    void task_students()
    {
        cout << "Eter your name" << endl;
        cin >> name;
        cout << "Enter your rollnumber" << endl;
        cin >> Rollnumber;
        if (name == "Fasil" && Rollnumber == 2)
        {

            cout << "Enter your work ";
            cout << endl;
            cout << " Press 0 : EXIT " << endl;
            cout << " Press 1 for Datesheet " << endl;
            cout << " Press 2 for Result " << endl;
            cout << " Press 3 for Time Table" << endl;
            cout << " Press 4 for  " << endl;
            int choice;
            cout << "Enter your choice " << endl;
            cin >> choice;
          if(choice==0){
                exit(0);
                
          }
        else if(choice==1){
                fstream f("datesheet.txt", ios::in);
                string line;
                if (f.is_open())
                {
                    while (f.eof() == 0)
                    {
                        getline(f, line);
                        cout << line << endl;
                    }
                }
        }

            else if(choice==2){
                fstream f("result.txt", ios::in);
                string line;
                if (f.is_open())
                {
                    while (f.eof() == 0)
                    {
                        getline(f, line);
                        cout << line << endl;
                    }
                }
            }
            else if(choice==3){
                fstream f("time.txt", ios::in);
                string line;
                if (f.is_open())
                {
                    while (f.eof() == 0)
                    {
                        getline(f, line);
                        cout << line << endl;
                    }
                }
            }
            else if(choice==4)
                cout << "Tommorow is off " << endl;
            else{
                cout << "Choice Invalid" << endl;
            }
            }
        
            else
            {
                return;
            }
        }
    };
    int main()
    {
        // Principal s1;
        // s1.user_name();
        student s;
        s.task_students();
    }