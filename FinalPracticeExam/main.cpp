/**\file FinalPracticeExam
 * \brief Small math program...
 *  \author Wheeler
 *   \date 15/05/2024
 */

#include <iostream>

using namespace std;

 // Prototypes
bool allPositive(double arr[], int maxSize);


/**
 *The driver of the program
 * @return Returns 0.
 */
int main() {
    int choice;
    
    do {
        cout << "\n1) Sum of range";
        cout << "\n2) Product of range";
        cout << "\n3) All positive";
        cout << "\n4) Exit";
        cout << "\n5) Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: cout << "\nHope to see you again!" << endl;
                break;
            default:
                cerr << "\nWrong choice!";
                break;
        }
    } while (choice != 4);
    
    return 0;
}
/**
 * Returns true if all values in array are 0 and greater.
 *  @param arr The array containing the values
 *  @param maxSize Length of the array
 *  @return Returns <code>true</code> if all values are 0 or greater
 *       <code>false</code> otherwise.
 */
bool allPositive(double arr[], int maxSize) {
    bool ret = true;
    int idx = 0;
    
    while (idx < maxSize && ret == true) {
        if (arr[idx] < 0)
            ret = false;
        ++idx;
    }
    return ret;
    }
    

