#include <iostream>
#include <vector>

using namespace std;


class List{
    public:

        vector<string> list;
        string name;

        void print_menu();
        void print_list();
        void add_item();
        void delete_item();


};