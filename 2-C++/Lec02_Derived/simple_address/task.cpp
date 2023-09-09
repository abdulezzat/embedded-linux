#include <iostream>
#include <map>
#include <string>
#include<bits/stdc++.h>

using namespace std;
void display(const map<string,string> & users);
bool add_user(map<string,string> & users,const string & name,const string & number);
bool delete_user(map<string,string> & users,const string & name);
void delete_all(map<string,string> & users);
bool search_user(const map<string,string> & users,const string & name);

int main(void){
    map<string,string> users;
    cout<<"Welcome to your favorite address book!"
    while(1){
        cout<<"What do you want to do?\n"
            <<"List         | Lists all users\n"
            <<"Add          | Adds a user\n"
            <<"Delete       | Deletes a user\n"
            <<"Delete all   | Deletes all users\n"
            <<"Search       | Search for a user\n"
            <<"Close        | Closes the address book\n";

        string user_input;
        cin>> user_input;
        transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);

        if(user_input == "list"){

            display(users);

        }else if (user_input == "add"){

            string name,number;
            cout>> "Enter User name : ";
            cin>>name;
            cout>> "Enter User number : ";
            cin>>number;

            if(add_user(users,name,number))
                cout<<"User is added successfully"<<endl;
            else
                cout<<"Fail: this user already exists"<<endl;

        }else if (user_input == "delete"){

            string name;
            cout>> "Enter User name : ";
            cin>>name;

            if(delete_user(users,name))
                cout<<"User is deleted successfully"<<endl;
            else
                cout<<"Fail: this user does not exist"<<endl;

        }else if (user_input == "delete all"){

            delete_all(users);
            cout<<"All users are deleted successfully"<<endl;

        }else if (user_input == "search"){

            string name;
            cout>> "Enter User name : ";
            cin>>name;

            if(search_user(users, name))
                cout<<"User exists"<<endl;
            else
                cout<<"Fail: this user does not exist"<<endl;

        }else if (user_input == "close"){

            break;

        }else{

            cout<<"Invalid input please try again...."

        }
    }

    return 0;
}

void display(const map<string,string> & users){
    map<string, string>::iterator itr;
    for (itr = users.begin(); itr != users.end(); ++itr) {
        cout << '\tname:' << itr->first << '\tnumber:' << itr->second
             << '\n';
    }
}
bool add_user(map<string,string> & users,const string & name,const string & number){
    if(!search_user(users,name)){
        users[name] = number;
        return true;
    }
    else
    return false;
}

bool delete_user(map<string,string> & users,const string & name);
{
    return (users.erase(name) != 0)
}

void delete_all(map<string,string> & users){
    users.clear();
}

bool search_user(const map<string,string> & users,const string & name){
    return (users.find(name)!=m.end())
}