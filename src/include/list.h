#include <vector>
#include <iostream>
using namespace std;

class List {
    private: // Only the class can access these variables or functions

    protected: // Inherits or belongs to class can access these variables or functions
    
    public: // Anything including the class can access these variables or functions

        List() {
            //constructor
        }

        ~List() {
            //destructor
        }
        void print_menu();
        void print_list();
        void add_item();
        void delete_item();

        vector<string> list;
        string name;

};