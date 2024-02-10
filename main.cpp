#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> Names;
vector<string> Phones;

void NewContact(){
  string name;
  string phone;

  cout << "\n\nEnter a name for the contact: ";
  cin >> name;
  cout << "Enter the phone for this contact: ";
  cin >> phone;
  cout << "The ID for this contact will be" << Names.size() << "\n\n";

  Names.push_back(name);
  Phones.push_back(phone);
}

void SearchByID(){
  int value;

  cout << "\n\n Enter the ID of the contact to search: ";
  cin >> value;

  if(value >= Names.size()){
    cout << "This ID doesn't exist\n\n";

    return;
  }

  cout << "Information for contact " << value << "\n";
  cout << "Name: " << Names[value] << "\n";
  cout << "Phone: " << Phones[value] << "\n";

}

void SearchByName(){

  bool found = false;
  string name;

  cout << "\n\n Enter the name to search: ";
  cin >> name;

  for(int i = 0; i < Names.size(); ++i){
    if(Names[i] == name){
      cout << "Name: " << Names[i] << "\n";
      cout << "Phone: " << Phones[i] << "\n";

      found = true;
    }
  }

  if(!found){
    cout << "Name not found \n";
  }

}


int main(){
  int sel = 0;

  while(true){
    cout << "########## My Agenda ##########\n\n";
    cout << "Choose a number to execute an option\n\n";
    cout << "[1] New Contact\n";
    cout << "[2] Seach by ID\n";
    cout << "[3] Search by Name\n";
    cout << "[4] Exit\n";
    cout << "Your choice: ";
    cin >> sel;

    switch(sel){
      case 1:
        NewContact();
        break;

      case 2:
        SearchByID();
        break;
    
      case 3:
        SearchByName();
        break;
      case 4:
        return 0;
      default:
        cout << "Invalid choice. Please choose again.\n";
        break;
    }
  }
  return 0;
}
