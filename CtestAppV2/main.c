#include <stdio.h>
#include <stdbool.h>

//Differences in data types

//There is no bool type, including tranditional C(C89). But int type is used instead of bool type
//There is a _Bool type added to the language with C99. But generally not used int is used.


int main()
{
    /*
     * _Bool type added in C99
     */
    // _Bool boolFlag = 1;

    /*
     *  stdbool.h librarry included bool type, but bool is a Macro and true --> 1, false --> 0
     */
    //bool boolFlag = true;
    //boolFlag = false;

    /*
     * The type produced by comparison operators and logic operators in C is the int type, not the bool type.
     */
    if(15 > 20)
        ;

    /* character constants
     * The types of character constants in C are int.
     * The types of character constants in C++ are char type.
     */
    printf("%zu\n", sizeof ('A')); // 4 byte

    /* String literals */
    /*
     * IN C++, string literals --> const char *
     * IN C, string literals --> char *
     */
    char *p = "orhan";

    return 0;
}
