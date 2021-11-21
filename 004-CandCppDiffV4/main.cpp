#include <iostream>
#include <assert.h>


using namespace std;

/***********************************************************/
/***********************************************************/

/* 1
 * User defined type differences.
 * Struct, Enum, Union
 */

// Struct name is Data in C++
// Struct tag ddi in C
// We can use C++ names directly
// In C, we cannot use it directly

/*
struct Data {
    int x;
    int y;
};


union Word {
    int x;
    char str[4];
};

enum Color {
    White,
    Yellow,
    Red
};

int main()
{
    // It is used directly because it is a name in C++
    // C++ is valid. syntax error in C
    Data myData;
    Word word;
    Color color;

    // Can also be used in C++
    struct Data myData1;


    return 0;
}
*/

/***********************************************************/
/***********************************************************/

/*
 *Since struct definitions are accepted as names in C++,
 *we get a name conflict error if we typedef definitions with the same name
 */

/*
struct Data {
    int x;
    int y;
};

typedef struct myData{

}Data; //Name redefinition error in C++
*/

/***********************************************************/
/***********************************************************/

/*2
 * In C, Structs must have at least one element
 * In C++, this is not the case.
 * There are uses that are not elements of structures
 */

//Valid in C++
//C syntax error

/*
struct Empty{

};
*/

/***********************************************************/
/***********************************************************/

/*3
 * Differences in user defined type, type conversions in enums.
 *
 * The C compiler accepts enum types as int types.
 * C++ compiler enum types do not have to be int types.
 */

/*
 * The difference is in Modern C++
 * In C, enum types have automatic type conversion to other types.
 * Syntax error in C++
 */

    /*
    enum Color{White, Gray, Black};
    enum Pos{Off, On};

    int main()
    {
        enum Color myColor = Black;

        // Syntax error in C++
        // Valid in C
        myColor = 3;
        myColor = 5.6;

        // In C++, no type conversion between different enum types
        // Valid in C
        enum Pos myPos = On;
        myColor = myPos;


        //But in C++, enums have automatic type conversions to other types.
        int ival = myColor;

        return 0;
    }

    */

/***********************************************************/
/***********************************************************/

/* 4
 *
 * In C++, the initial value string literals assigned to char arrays cannot be larger than the array size
 * In C, this is legal and only warns. But it gives an error in the run time phase.
 * undefined behavior
 */

 /*
 char str[] = "orhan"; //If we do not specify a size, the length of the synchronized directory + 1('\0' characters)
 */

      // Syntax error in C++
      // Valid in C

/*
    char str[4] = "orhan"; // Syntax error in C++

    for(int i = 0; str[i] != '\0'; ++i)
    {
        putchar(str[i]);
    }
    putchar('\n');

*/
