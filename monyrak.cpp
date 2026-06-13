#include <iostream>
using namespace std;

void showStudentInfo(){
    string name  ="Phoung monyrak";
    string major ="Software Engineering";

    cout << "Student Name : "<< name << endl;
    cout << "Major        : " << major << endl;
}

int main(){
    cout << "===Student Information===" << endl;
    showStudentInfo();
    return 0;
}
