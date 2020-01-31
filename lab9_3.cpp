//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string textline;
    double sum = 0, mean,sd=0,num=0,sumb;
    while(getline(score,textline)){
        sum += atof(textline.c_str());
        sumb += pow(atof(textline.c_str()),2);
        num++;
    }
    cout << "Number of data = " << num << endl;
    mean = 1/num*sum;
    cout << "Mean = " << mean << endl;
    sd = sqrt((sumb/num)-pow(mean,2));
    cout << "Standard deviation = " <<sd<<endl;
    return 0;
}