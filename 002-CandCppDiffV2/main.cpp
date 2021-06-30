#include <iostream>

using namespace std;


//Differences in data types

//There is no bool type, including tranditional C(C89). But int type is used instead of bool type
//There is a _Bool type added to the language with C99. But generally not used int is used.


/*
 * C++ has a bool type
 * C++ has a bool keyword
 * C++ has a true constant
 * C++ has a false constant
 */
int main()
{
    /*
     * C++ has a bool type
     * C++ has a bool keyword
     * C++ has a true constant
     * C++ has a false constant
     */
    //bool boolFlag = true;

    /*
     * The type produced by comparison operators and logic operators in C++ is the bool type, not the int type.
     */

    //if(15 > 20)
    //    ;


    /*
     * In C++ language, bool type is standard as 1 byte.
     */
    //cout << "\n" << "size : " << sizeof (bool) << "\n\n";

    /*
     * There is an automatic type conversion from int to bool type in C++.
     * Or, There is an automatic type conversion from bool to int type in C++.
     */

//    int x;
//    cout << "Enter a integer number : ";
//    cin >> x;
//    bool flag = x; // int type --> false or true convert
//    cout << "flag: " << flag << "\n";
//    int y = flag; // bool type -> 0 or 1 convert
//    cout << "y: " << y << "\n";



    /*
     * Important point pointers are conversion to bool type.
     * Attention object addresses function addresses change to true,
     * nullptr changes to false.
     */
//    int x;
//    int *ptr = nullptr;
//    bool flagPtr = ptr;
//    cout << "flagPtr : " << flagPtr << "\n";


    /* character constants*/
    /*
     * The types of character constants in C are int.
     * The types of character constants in C++ are char type.
     */
    //printf("%zu\n", sizeof ('A')); // 1 byte

    /* String literals */
    /*
     * IN C++, string literals --> const char *
     * IN C, string literals --> char *
     */
    //const char *pStr = "orhan";
    //char *p = "orhan";

    return 0;
}
