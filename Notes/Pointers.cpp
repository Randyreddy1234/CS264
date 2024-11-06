//
// Created by Randon Reddy on 25/10/2024.
//

#include <iostream>
#include <cstring>
using namespace std;
/*basis of using pointers*/
/*
int main(){
    int andy = 11;
    int *ted; //defines pointer
    cout << "&andy: " << &andy << endl; //address of andy
    cout << "ted" << ted << endl;
    ted = &andy; //assigning pointer to point at address of memory slot holding value of andy
    cout << "ted = &andy: " << ted << endl;
    return 0;
}
*/

/*Using pointers to modify variables*//*
int main(){
    int andy, fred = 36, *ted;
    ted = &andy; //assigning pointer to point to address of andy
    andy = 37; //assigning andy 37
    fred = *ted; //dereferencing pointer ted to fred
    cout << fred << endl;
    return 0;
    /*first assigns pointer ted with reference address of andy, changes the value of andy to 37, deference pointer ted to variable fred, overwriting
     * variable fred with contents stored at address ted is pointing to
}
*/
/*Pointer and arrays*/
/*
int main(){
    int j;
    int intarray[5] = {31, 54, 77, 52, 93};
    for(j = 0; j < 5; j++){
        cout << intarray[j] << endl;
    }
    cout << endl;
    for(j = 0; j < 5; j++){
        cout << *(intarray+j) << endl;
    }
}
 */


char* substring(int i, int j, const char* str) {
    int len = strlen(str);
    if (j > len || i >= j) {
        return NULL;  // Return NULL if the indices are invalid
    }

    int sub_len = j - i;
    char* sub = new char[sub_len + 1]; // Allocate dynamic memory with space for null terminator

    // Copy the substring characters
    for (int k = 0; k < sub_len; k++) {
        sub[k] = str[i + k];
    }
    sub[sub_len] = '\0'; // Add null terminator

    return sub;
}

void substring_name_test_case_1() {
    char test_input[] = "string";
    char expected_output[] = "str";
    int i = 3;
    int j = 0;

    char* temp = substring(i, j, test_input);
    if (temp != NULL) {
        cout << temp << endl;
        if (strcmp(temp, expected_output) == 0) {
            cout << "substring_name_test_case_1 PASSED" << endl;
        } else {
            cout << "substring_name_test_case_1 FAILED" << endl;
        }
        delete[] temp; // Free dynamically allocated memory
    } else {
        cout << "substring_name_test_case_1 FAILED (NULL returned)" << endl;
    }
}

int main(){
    substring_name_test_case_1();
    return 0;
}
