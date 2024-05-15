/**\file FinalPracticeExam
 * \brief Small math program...
 *  \author Wheeler
 *   \date 15/05/2024
 */

#include <iostream>
#include <cassert>
using namespace std;

 // Prototypes
bool allPositive(const double arr[], const int maxSize);
double sumOfRange(const double arr[], const int sIdx, const int eIdx, const int maxSize);


/**
 *The driver of the program
 * @return Returns 0.
 */
int main() {
    
    const int SIZE = 5;
    int choice, sIdx, eIdx;
    double arr[SIZE] = { 1.3, 2.2, -3.5, 0.0, 10.2 };
    
    do {
        cout << "\n1) Sum of range";
        cout << "\n2) Product of range";
        cout << "\n3) All positive";
        cout << "\n4) Exit";
        cout << "\n5) Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "\nEnter start index [0 -- " << SIZE - 1 << "]: ";
                cin >> sIdx;
                
                cout << "\nEnter end index [" << sIdx << " -- " << SIZE - 1 << "]: ";
                cin >> eIdx;
                 cout << "\nSum: " << sumOfRange(arr, sIdx, eIdx, SIZE);
                break;
            case 2:
                break;
            case 3:
                
                if(allPositive(arr, SIZE) == true) {
                    cout << "\nAll values are positive";
                }
                else {
                    cout << "\nAt-least one value is less than 0";
                }
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
bool allPositive( const double arr[], const int maxSize) {
    assert(maxSize > 0);
    bool ret = true;
    int idx = 0;
    
    while (idx < maxSize && ret == true) {
        if (arr[idx] < 0)
            ret = false;
        ++idx;
    }
    return ret;
    }
    
/**
 * Returns the sum of the specified range ( inclusive).
 *  @param arr The array containing the values
 *  @param sIdx The start of the range (inclusive).
 *  @param eIdx The end of the range ( inclusive).
 *  @param maxSize Length of the array
 *  @return Returns the sum of the range ( inclusive).
 */
double sumOfRange(const double arr[], const int sIdx, const int eIdx, const int maxSize) {
    assert(maxSize > 0);
    assert(eIdx >= sIdx && maxSize > eIdx && sIdx >= 0);
    double sum = 0.0;
    
    for (int i=sIdx; i <= eIdx; i++) {
        sum += arr[i];
    }
    
    return sum;
}
