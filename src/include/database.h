#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


class Database{
    private:
    protected:
    public:
    
        vector<vector<string>> mainList;
        string name;

        void write(vector<string> mainList);
        vector<vector<string>> read();


};