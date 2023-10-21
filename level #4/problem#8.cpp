#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPassFail{pass = 1 , fail= 2 };

int readMark(){
    int mark;
    cout << "please enter your mark : " << endl;
    cin  >> mark ;
    return mark;
}

enPassFail checkMark(int mark){
    if (mark >= 50)
    {
        return enPassFail::pass;
    }else {
        return enPassFail::fail;
    }
}

void printResult(int mark ){
    if (checkMark(mark) == enPassFail::pass)
    {
        cout << "\nyou passed"<<endl; 
    }else{
        cout << "\nyou faild"<<endl;
    }
    
}

int main(){
    printResult (readMark());
    return 0; 

}
