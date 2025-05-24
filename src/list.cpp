#include "include/list.h"
void List::print_menu() {
        int choice;

        cout << "************\n";
        cout << "1 - Print list.\n";
        cout << "2 - Add to list.\n";
        cout << "3 - Delete from list.\n";
        cout << "4 - Quit.\n";
        cout << "Enter your choice and press return/enter.\n";

        cin >> choice; 

        if(choice == 4) {
            return;
        }
        else if(choice == 3){
            delete_item();
        }
        else if(choice == 2){
              add_item();
        }
        else if(choice == 1){
            print_list();
        }
        else if(choice == 0){
            cout << "Exiting the program\n";
            exit(0);
        }
        else {
            cout << "Sorry choice hasn't been implemented.";
        }
    }


    void List::add_item(){

        cout << "\n\n\n\n\n\n\n";
        cout << "*** Add Item ***\n";
        cout << "Type in an item and press enter:";

        string item;
        cin >> item;

        list.push_back(item);

        cout << "Successfully added an item to the list \n\n\n\n\n";
        cin.clear();

        print_menu();
    }

    void List::delete_item() { 

        cout << "*** Delete Item ***\n";
        cout << "Select an item index number to delete: \n";

        if(list.size()) {

            for(unsigned int i = 0; i < list.size(); i++){
                cout << i << ": " << list[i] << "\n";
            }
            int choiceNum;
            cin >> choiceNum;
            list.erase(list.begin() + choiceNum);
        }
        else {
            cout << "No items in the list to delete\n";
        }

        print_menu();
    }


    void List::print_list() {

        cout << "\n\n\n\n\n\n\n";
        cout << "*** Print List ***\n";

        for(unsigned list_index=0; list_index < list.size(); list_index++) {
            cout << " * " << list[list_index] << "\n";
        }

        cout << "M - Menu \n";
        char choice;
        cin >> choice;

        if(choice == 'M' || choice == 'm'){
            print_menu();
        }
        else {
            cout << "Invalide Choice. Quitting..\n";
        }
    }


    void List::find_userList() {
        bool userFound = false;
        cout << "\n\n\n\n\n\n\n";
        cout << "*** Welcome ***" << name << "***\n";

        for(unsigned int user_index = 0; user_index < mainList.size(); user_index++) {
            cout << mainList[user_index][0] << "\n";
            if(mainList[user_index][0] == name) {
                cout << "Found user: " << mainList[user_index][0] << "\n";
                list = mainList[user_index];
                userFound = true;
                break;
            }

        }
    }
    