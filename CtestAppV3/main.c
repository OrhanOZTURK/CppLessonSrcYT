#include <stdio.h>

//const int x = 10;
//int y = x;

int main()
{

    /*
     * The AUTO keyword has also been deprecated in C.
     * İts has completely changed meaning in C++.
     * Automatic life
     * Storage class specifier
     */

    //auto int x = 10;
    //int y = 10;


    /*
    * The tool added with C99
    * The compiler also creates blocks inside the main blog of the for loop in C.
    * Error in C++.
    */
    for(int i = 0; i < 5; ++i)
    {
        //int i; //valid
//        {
//            int i;
//        }
    }



    /*
     * Use of the Const keyword.
     * It is mandatory to initialize variables that are defined as const in C++.
     * Syntax error if we don't give the initialize value in C++.
    */

     // const int x;
     // const int y = 10;

    /*
     * In C constant expression
     */
    // a) Expressions that initialize value global variables must be constant.
    // b) expressions representing array size (except - variable length array(vla)).
    // c) case label statements in the switch statement.
    // d) Expressions that show how many bits the elements of a field of structures have.
    // e) Expressions that give the first value to arrays.


    int x = 4;
    const int g = 4;
    struct Data {
        int y : 4; //valid
        //int z : g; //invalid
    };


    //const int size = 200;
    //int A[size];

      const int a = 5;
      const int b = 7;
      switch (a) {
        case b: break;
      }


    /*
     * Linkage
     *
     * In C
     *
     * static int x = 10; Can access it by internal link in C
     * int x = 10; // Can access it by external link in C
     * const int  x = 10; // Can access it by external link in C
     *
     *
     *
     * But In C++
     *
     * int x = 10; // Can access it by external link in C++
     * const int x = 10; //Can access it by internal link in C++
     * static int x = 10; Can access it by internal link in C++

     * If we want to have both external and global const and external connections in C ++.
     *
     * extern const int x = 10;
     */

    return 0;
}
