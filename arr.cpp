#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
void display(string id);

int main()
{
    string id;
    cout<< "Enter your ID : ";
    getline(cin, id);
    display(id);
    return 0;
}
void display(string s)
{
    int number = s.length();
    if(number == 7)
    {
        if(s[2] =='1' ||s[2] =='2' ||s[2] =='3')
        {
            cout<< "Year : 20"<< s[0] << s[1] << endl;
            if(s[2]=='2')
                cout<< "Semester :Spring"<<endl;
            else if(s[2]=='3')
                cout<< "Semester : Summer "<< endl;
            else if(s[2]=='1')
                cout<< "Semester : Autumn"<<endl;
            cout<< "Unique ID : "<<s[3]<< s[4]<< s[5]<< s[6];
        }
        else
        {
            cout << "This is not Valid ID";
        }
    }
    else
    {
        cout << "This is not Valid ID";
    }
}