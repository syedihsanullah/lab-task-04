#include <iostream>
using namespace std;

int main()
 {
    int Subjects, marks;
    
    cout << "Enter the total number of subjects: ";
    cin >> Subjects;
    for (int i = 1; i <= Subjects; ++i) 
    {
        cout << "Enter marks for subject " << i << " (out of 100): ";
        cin >> marks;
        if (marks >= 90) {
            cout << "your grade: A" << endl;
        } 
        else if (marks >= 75) {
            cout << "your grade: B" << endl;
        } 
        else if (marks >= 50) {
            cout << "your grade: C" << endl;
        } 
        else {
            cout << " your grade: F" << endl;
        }
    }

    return 0;
}
