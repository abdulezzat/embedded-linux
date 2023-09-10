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
    cout<<"Welcome to your favorite address book!"<<endl;
    while(1){
        cout<<"\nWhat do you want to do?\n"
            <<"List         | Lists all users\n"
            <<"Add          | Adds a user\n"
            <<"Delete       | Deletes a user\n"
            <<"Delete all   | Deletes all users\n"
            <<"Search       | Search for a user\n"
            <<"Close        | Closes the address book\n";

        string user_input;
        getline(std::cin, user_input);
        transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);

        if(user_input == "list"){

            display(users);

        }else if (user_input == "add"){

            string name,number;
            cout << "Enter User name : ";
            getline(std::cin, name);
            cout << "Enter User number : ";
            getline(std::cin, number);

            if(add_user(users,name,number))
                cout<<"User is added successfully"<<endl;
            else
                cout<<"Fail: this user already exists"<<endl;

        }else if (user_input == "delete all"){

            delete_all(users);
            cout<<"All users are deleted successfully"<<endl;

            
        }else if (user_input == "delete"){

            string name;
            cout << "Enter User name : ";
            getline(std::cin, name);

            if(delete_user(users,name))
                cout<<"User is deleted successfully"<<endl;
            else
                cout<<"Fail: this user does not exist"<<endl;


        }else if (user_input == "search"){

            string name;
            cout<< "Enter User name : ";
            getline(std::cin, name);

            if(search_user(users, name))
                cout<<"User exists"<<endl;
            else
                cout<<"Fail: this user does not exist"<<endl;

        }else if (user_input == "close"){

            break;

        }else{

            cout<<"Invalid input please try again...."<<endl;

        }
    }

    return 0;
}

void display(const map<string,string> & users){
    if( users.empty()){
        cout<<"The address is empty "<<endl;
        return;
    }
    cout<<"##"<<endl;
    map<string, string>::const_iterator itr;
    int i = 1;
    for (itr = users.begin(); itr != users.end(); ++itr) {
        cout << i++<<"->\t"<<"Name: " << itr->first << "\t| Number: "<< itr->second
             << '\n';
    }
    cout<<"##"<<endl;
}
bool add_user(map<string,string> & users,const string & name,const string & number){
    if(!search_user(users,name)){
        users[name] = number;
        return true;
    }
    else
        return false;
}

bool delete_user(map<string,string> & users,const string & name){
    return (users.erase(name) != 0);
}

void delete_all(map<string,string> & users){
    users.clear();
}

bool search_user(const map<string,string> & users,const string & name){
    return (users.find(name)!=users.end());
}