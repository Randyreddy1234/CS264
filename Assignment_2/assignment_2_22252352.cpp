#include <iostream>
#include <cstring>

using namespace std;

/*
    Ensure you include sufficient comments to explain your solutions. This can
    come in the form of a multi-line comment before the solution, or inline
    comments left within the solution itself.
*/
/*4.1 Length*/
unsigned int length(const char* str){
    int length = 0; //Int variable that will be returned after, counts length

    while(str[length] != '\0'){ //while loop to go through whole char* until it reaches /0
        length++; //increment length
    }
    return length; //returns length of the string
}

/*4.2 Copy*/
char* copy(char* dest, const char* src){

    if(length(dest) <= length(src)){ //condition statement checking if dest has enough space (dest having length(src) + 1 or more to include \0)
        return NULL; //return NULL
    }else{ //else condition does the copying
        int i = 0; //counter to iterate through array

        while(src[i] != '\0'){ //while loop to iterate through src until \0
            dest[i] = src[i]; //copy char stored in src[i] into dest[i]
            i++;//iterate counter
        }

        dest[i] = '\0'; //add terminating character after copy is completed
        return dest; //return dest
    }
}

/*4.3 IndexOf*/
int indexOf(char c, const char* str){
    int index = -1, i = 0; //initializing variables: index to return (default -1) and counter i

    while(i < length(str)){ //while loop to transverse size of whole string. Using length from 4.1 to get length size
        if(str[i] == c){ //condition statement if the char at i is equal to given index
            index = i; // assign i to index
            break; // break out of while loop (looking for first instance)
        }
        i++; //counter increments
    }
    return index; // returning index
}

/*4.4 Substring*/
char* substring(int i, int j, const char* str){
    if(j > length(str) || i >= j){ // if statement to check if j is greater than string length or if j >= j
        return NULL; //returns NULL if true
    }
    else{
        int size = j-i; //int variable for size of substring
        char *sub  = new char [size]; //creating new char pointer, points to char array storing substring
        //char *sub  = new char [size + 1]; if i needed to include \0 at the end of the substring
        for(int r = 0; r < size; r++){ //for loop iterating through substring array
            sub[r] = str[i+r]; // gets char stored in element i+r (r starting as 0) up until j-1
        }
        //sub[size] = '\0'; if needed to add terminating character at end of substring

        return sub; //return char pointer
    }
}

/*4.5 replace*/
char* replace(char c, char p, const char* str){
    int i = 0; //int variable used as a counter
    char *temp = new char [length(str) + 1]; //creating new char pointer, pointing to new char array which will store str with replaced char
    while(str[i] != '\0'){ //while loop to iterate throughout str
        if(str[i] == c){ //condition statement to check if char at str[i] is the same as c (char to be replaced)
            temp[i] = p; //make the temp array at i equal to p (char to replace with)
        }else{
            temp[i] = str[i]; //else statement to continue copying str at i to temp at i if char is not to be replaced
        }

        i++; //increase counter
    }
    temp[i] = '\0'; //add terminating character at end of temp (null character)
    return temp; // return char pointer
}

/*
    - Try to include your test cases below this multi-line comment -

    Ensure your test cases use the following format:

    [function]_name_test_case_[k](){
        test_input = example_value;
        expected_output = example_value;

        result = [function](test_input)
        if(result == output){
            cout << "[function]_name_test_case_[k] PASSED" << endl;
        }
        else{
            cout << "[function]_name_test_case_[k] FAILED" << endl;
        }
    }

    [function] - The name of the function being tested
    [k] - The index of the test
*/

void length_test_case_1(){
    char test_input [] = "string\0";
    string expected = "string";
    int expected_output = expected.length(); //using this as a test and NOT for the question

    int result = length(test_input);
    cout << "4.1 length" << endl;
    cout << "length_test_case_1_test_input: " << test_input << endl;

    if(result == expected_output){
        cout << "length_name_test_case_1 PASSED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual:: " << result << endl;
    }
    else{
        cout << "length_name_test_case_1 FAILED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }

    cout << "####################################################################" << endl;
}

void length_test_case_2(){
    char test_input [] = "22252352";
    string expected = "22252352";
    int expected_output = expected.length(); //using this as a test and NOT for the question

    int result = length(test_input);
    cout << "4.1 length" << endl;
    cout << "length_test_case_2_test_input: " << test_input << endl;

    if(result == expected_output){
        cout << "length_name_test_case_2 PASSED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual:: " << result << endl;
    }
    else{
        cout << "length_name_test_case_2 FAILED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }

    cout << "####################################################################" << endl;
}

void length_test_case_3(){
    char test_input [] = "randon";
    string expected = "randon";
    int expected_output = expected.length(); //using this as a test and NOT for the question

    int result = length(test_input);
    cout << "4.1 length" << endl;
    cout << "length_test_case_3_test_input: " << test_input << endl;

    if(result == expected_output){
        cout << "length_name_test_case_3 PASSED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual:: " << result << endl;
    }
    else{
        cout << "length_name_test_case_3 FAILED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }

    cout << "####################################################################" << endl;
}

void copy_test_case_1(){
    char test_input [] = "string";
    char dest[] = "            ";
    char expected_output[] = "string";


    char *temp = copy(dest,test_input);
    cout << "4.2 copy" << endl;
    cout << "copy_test_case_1_test_input: " << test_input << endl;


    if(temp != NULL){
        if(strcmp(temp, expected_output) == 0){
            cout << "copy_test_case_1 PASSED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
        else{
            cout << "copy_test_case_1 FAILED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
    }else{
        cout << "copy_test_case_1 FAILED (Returned NULL, dest not big enough)" << endl;
    }

    cout << "####################################################################" << endl;
}

void copy_test_case_2(){
    char test_input [] = "string";
    char dest[] = "   ";
    char expected_output[] = "string";


    char *temp = copy(dest,test_input);
    cout << "4.2 copy" << endl;
    cout << "copy_test_case_2_test_input: " << test_input << endl;


    if(temp != NULL){
        if(strcmp(temp, expected_output) == 0){
            cout << "copy_test_case_2 PASSED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
        else{
            cout << "copy_test_case_2 FAILED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
    }else{
        cout << "copy_test_case_2 FAILED (Returned NULL, dest not big enough)" << endl;
    }

    cout << "####################################################################" << endl;
}

void copy_test_case_3(){
    char test_input [] = "hello world";
    char dest[] = "                    ";
    char expected_output[] = "hello world";


    char *temp = copy(dest,test_input);
    cout << "4.2 copy" << endl;
    cout << "copy_test_case_3_test_input: " << test_input << endl;


    if(temp != NULL){
        if(strcmp(temp, expected_output) == 0){
            cout << "copy_test_case_3 PASSED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
        else{
            cout << "copy_test_case_3 FAILED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
    }else{
        cout << "copy_test_case_3 FAILED (Returned NULL, dest not big enough)" << endl;
    }

    cout << "####################################################################" << endl;
}

void indexOf_test_case_1(){
    char test_input [] = "string";
    char c = 'i';
    int expected_output = 3;

    int result = indexOf(c,test_input);
    cout << "4.3 indexOf" << endl;
    cout << "indexOf_test_case_1_test_input: " << test_input << " ,char c: " << c << endl;
    if(result == expected_output){
        cout << "indexOf_name_test_case_1 PASSED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }
    else{
        cout << "indexOf_name_test_case_1 FAILED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }

    cout << "####################################################################" << endl;

}

void indexOf_test_case_2(){
    char test_input [] = "aaaaaaaaa";
    char c = 'a';
    int expected_output = 0;

    int result = indexOf(c,test_input);
    cout << "4.3 indexOf" << endl;
    cout << "indexOf_test_case_2_test_input: " << test_input << " ,char c: " << c << endl;
    if(result == expected_output){
        cout << "indexOf_name_test_case_2 PASSED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }
    else{
        cout << "indexOf_name_test_case_2 FAILED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }

    cout << "####################################################################" << endl;

}

void indexOf_test_case_3(){
    char test_input [] = "aaaaaaaaa";
    char c = 'i';
    int expected_output = -1;

    int result = indexOf(c,test_input);
    cout << "4.3 indexOf" << endl;
    cout << "indexOf_test_case_3_test_input: " << test_input << " ,char c: " << c << endl;
    if(result == expected_output){
        cout << "indexOf_name_test_case_3 PASSED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }
    else{
        cout << "indexOf_name_test_case_3 FAILED" << endl;
        cout << "Expected: " << expected_output << endl;
        cout << "Actual: " << result << endl;
    }

    cout << "####################################################################" << endl;

}

void substring_test_case_1(){
    char test_input [] = "string";
    char expected_output[] = "str";
    int i = 0;
    int j = 3;

    char *temp = substring(i,j,test_input);
    cout << "4.4 substring" << endl;
    cout << "substring_test_case_1_test_input: " << test_input << endl;
    cout << "substring_test_case_1_i: " << i << endl;
    cout << "substring_test_case_1_j: " << j << endl;

    if(temp != NULL){
        if(strcmp(temp, expected_output) == 0){
            cout << "substring_name_test_case_1 PASSED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
        else{
            cout << "substring_name_test_case_1 FAILED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual:: " << temp << endl;
        }
        delete [] temp;
    }else{
        cout << "substring_name_test_case_1 FAILED (j out of bounds or i >= j)" << endl;
    }

    cout << "####################################################################" << endl;
}

void substring_test_case_2(){
    char test_input [] = "string";
    char expected_output[] = "str";
    int i = 0;
    int j = 10;

    char *temp = substring(i,j,test_input);
    cout << "4.4 substring" << endl;
    cout << "substring_test_case_2_test_input: " << test_input << endl;
    cout << "substring_test_case_2_i: " << i << endl;
    cout << "substring_test_case_2_j: " << j << endl;

    if(temp != NULL){
        if(strcmp(temp, expected_output) == 0){
            cout << "substring_name_test_case_2 PASSED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
        else{
            cout << "substring_name_test_case_2 FAILED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual:: " << temp << endl;
        }
        delete [] temp;
    }else{
        cout << "substring_name_test_case_2 FAILED (j out of bounds or i >= j)" << endl;
    }

    cout << "####################################################################" << endl;
}

void substring_test_case_3(){
    char test_input [] = "hello world";
    char expected_output[] = "lo w";
    int i = 3;
    int j = 7;

    char *temp = substring(i,j,test_input);
    cout << "4.4 substring" << endl;
    cout << "substring_test_case_3_test_input: " << test_input << endl;
    cout << "substring_test_case_3_i: " << i << endl;
    cout << "substring_test_case_3_j: " << j << endl;

    if(temp != NULL){
        if(strcmp(temp, expected_output) == 0){
            cout << "substring_name_test_case_3 PASSED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual: " << temp << endl;
        }
        else{
            cout << "substring_name_test_case_3 FAILED" << endl;
            cout << "Expected: " << expected_output << endl;
            cout << "Actual:: " << temp << endl;
        }
        delete [] temp;
    }else{
        cout << "substring_name_test_case_2 FAILED (j out of bounds or i >= j)" << endl;
    }

    cout << "####################################################################" << endl;
}

void replace_test_case_1(){
    char test_input [] = "string";
    char c = 'i';
    char p = 'x';

    char expected[] = "strxng";

    char *temp = replace(c,p,test_input);
    cout << "4.5 replace" << endl;
    cout << "replace_test_case_1_test_input: " << test_input << endl;
    cout << "replace_test_case_1_c: " << c << endl;
    cout << "replace_test_case_1_p: " << p << endl;
    if(strcmp(expected,temp) == 0){
        cout << "replace_test_case_1 PASSED" << endl;
        cout << "Expected: " << expected << endl;
        cout << "Actual: " << temp << endl;
    }else{
        cout << "replace_test_case_1 FAILED"<< endl;
        cout << "Expected: " << expected << endl;
        cout << "Actual:: " << temp << endl;
    }

    cout << "####################################################################" << endl;
    delete [] temp;
}

void replace_test_case_2(){
    char test_input [] = "aaaAaaa";
    char c = 'a';
    char p = 'x';

    char expected[] = "xxxAxxx";

    char *temp = replace(c,p,test_input);
    cout << "4.5 replace" << endl;
    cout << "replace_test_case_2_test_input: " << test_input << endl;
    cout << "replace_test_case_2_c: " << c << endl;
    cout << "replace_test_case_2_p: " << p << endl;
    if(strcmp(expected,temp) == 0){
        cout << "replace_test_case_2 PASSED" << endl;
        cout << "Expected: " << expected << endl;
        cout << "Actual: " << temp << endl;
    }else{
        cout << "replace_test_case_2 FAILED"<< endl;
        cout << "Expected: " << expected << endl;
        cout << "Actual:: " << temp << endl;
    }

    cout << "####################################################################" << endl;
    delete [] temp;
}

void replace_test_case_3(){
    char test_input [] = "banana";
    char c = 'n';
    char p = 'i';

    char expected[] = "baiaia";

    char *temp = replace(c,p,test_input);
    cout << "4.5 replace" << endl;
    cout << "replace_test_case_3_test_input: " << test_input << endl;
    cout << "replace_test_case_3_c: " << c << endl;
    cout << "replace_test_case_3_p: " << p << endl;
    if(strcmp(expected,temp) == 0){
        cout << "replace_test_case_3 PASSED" << endl;
        cout << "Expected: " << expected << endl;
        cout << "Actual: " << temp << endl;
    }else{
        cout << "replace_test_case_3 FAILED"<< endl;
        cout << "Expected: " << expected << endl;
        cout << "Actual:: " << temp << endl;
    }

    cout << "####################################################################" << endl;
    delete [] temp;
}

// Call your test functions in the main function below
int main(){
    length_test_case_1();
    length_test_case_2();
    length_test_case_3();
    copy_test_case_1();
    copy_test_case_2();
    copy_test_case_3();
    indexOf_test_case_1();
    indexOf_test_case_2();
    indexOf_test_case_3();
    substring_test_case_1();
    substring_test_case_2();
    substring_test_case_3();
    replace_test_case_1();
    replace_test_case_2();
    replace_test_case_3();
    return 0;
}