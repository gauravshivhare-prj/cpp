#include<bits/stdc++.h>
using namespace std ;
 
int main(){
     
    int marks = 94;

    if(marks<25){
        cout << "Grade: F" << endl;  // Less than 25 is Grade F
    } else if (marks >= 25 && marks <= 44) {
        cout << "Grade: E" << endl;  // Between 25 and 44 is Grade E
    } else if (marks >= 45 && marks <= 49) {
        cout << "Grade: D" << endl;  // Between 45 and 49 is Grade D
    } else if (marks >= 50 && marks <= 59) {
        cout << "Grade: C" << endl;  // Between 50 and 59 is Grade C
    } else if (marks >= 60 && marks <= 69) {
        cout << "Grade: B" << endl;  // Between 60 and 69 is Grade B
    } else if (marks >= 70) {
        cout << "Grade: A" << endl;  // 70 and above is Grade A
    } else {
        cout << "Invalid marks entered." << endl;  // Handles unexpected cases
    }
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std ;

// int main(){

//     int age ;

//     cout << "Enter your age :";
//     cin >> age ;

//     if (age >= 18){
//         cout << "You are an adult !!" << endl;
//     } else {
//         cout << "You are not an adult !!" << endl;
//     }
// }

