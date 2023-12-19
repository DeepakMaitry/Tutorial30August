#include<iostream>
using namespace std;

int main() {

    // int marks[4] = {23, 45, 56, 89};
    // int marks[] = {23, 45, 56, 89};

    // in the above code 4 is optional since c++ is smart

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // marks[2] = 65;
    // cout << marks[2] << endl;
    // int mathMarks[4];
    // mathMarks[0] = 78;
    // mathMarks[1] = 20;
    // mathMarks[2] = 34;
    // mathMarks[3] = 56;

    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;

    
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<< marks[i] << " ";
    // }

    // using while loop 

    // int i = 0;
        // while(i<4) {
        //     cout << marks[i] << " ";
        //     i++;
        // }
    

    // do{
    //     cout << marks[i] << " ";
    //     i++;
    // } while(i < 4);



    // c++ pointers and arrays ******************************************

    // pointer arithmetic 
    // address new = address current + i*sizeofdatatype

    int marks[] = {23, 45, 56, 89};
    int* p = marks;
    cout << p + 3 << endl;
    cout << "The value of marks[0] is: " << *p << endl; // *(p + 0)
    cout << "The value of marks[1] is: " << *(p + 1) << endl;
    cout << "The value of marks[2] is: " << *(p + 2) << endl;
    cout << "The value of marks[3] is: " << *(p + 3) << endl;
    // ****** Here 1, 2, 3 is a i where i is index

    cout << p << endl;
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    cout << p + 3 << endl;
    cout << p + 3 << endl;


    return 0;
}