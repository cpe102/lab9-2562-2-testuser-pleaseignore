#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream cheer("cheerbook.txt");
    ofstream cheerbook("cheerbook_copy.txt");
    string textline;
    cheerbook << "-------------------- SOTUS ---------------------" << endl;
    while (getline(cheer,textline)){
        cheerbook << textline << endl;
    }
    cheerbook << "-------------------- SOTUS ---------------------";
    return 0;
}
