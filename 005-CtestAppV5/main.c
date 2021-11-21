#include <stdio.h>

int main()
{
/***********************************************************/
/***********************************************************/

    // Differences related to type conversion.

    /*
     * There is type conversion between arithmetic types and pointer types in C.
     * This is a situation that we do not want.
     * Syntax error in C++
     */

    /*
    int x = 5;
    int *ptr = x;
    */

    /*
     * There is conversion from pointer types to arithmetic types in C.
     * Syntax error in C++
     */

    /*
    int ival = ptr;
    */

/***********************************************************/
/***********************************************************/

    //Conversions between different address types

    // Do not convert to each other with 2 exceptions.
    // The exception is char * object address and void * object address.

    //Wrong in C, but not syntax error.
    //Syntax error in C++.

    /*
        int x = 10;
        double dPtr = &x;
    */

    // T and U types.
    // T* <--> U* No type conversion between types in C++.
    // There is type conversion between the same types.

    /*
        int *y = &x;
    */


/***********************************************************/
/***********************************************************/

    //Const address conversions

    // Has a different meaning.
    // T*     int *
    // const T*     const int *


    /* This part is a reminder. */
    /* C and C++ reminder for the topic. */

    //int x = 10;
    //&x  --> int *   T* type

    //int a[] = {0};
    // a --> int *   T* type

    //const int cx = 10;
    //&cx ---> const int * type

    //const int primes[] = { 2, 3, 4, 5};
    //&primes[0]
    // primes ---> const int *

    //C ile C++ arasinda onemli farklilik string literal
    // "orhan"  ---> char [6] , In C
    // "orhan"  ---> const char [6] , In C++

    // "mert"    ---> const char * , In C++
    // "mert"    ---> char * , In C


/***********************************************************/
/***********************************************************/

    //const T* --> T* There is type conversion in C.
    //Syntax error in C++.

    // C and C++ are also valid.
    //T*  ---> const T* type, There is an automatic type conversion.

    /*
    int x = 10;
    const int *cptr = &x; // C and C++ are valid also code
    int *ptr = pt; // In C legal, Syntax error in C++.

    const int y = 10;
    int *p = &y; // // In C legal, Syntax error in C++.

    */

/***********************************************************/
/***********************************************************/

    /* Reminder between the subject */

    //These all mean syntax error
    //syntax error
    //invalid code
    //ill-formed code
    //illegal code

    // wrong code
    /*
    int x = 10;
    if(x = 10)
        ;
    */
    //This code is not an error code, but wrong code.
    //code that doesn't do its job.

    // bad code
    // it's the code that does its job, but not like this, do it like this.

/***********************************************************/
/***********************************************************/

    //Note that in C.
    //Beware of string literals of type const T*.
    //Valid in C, but making changes is undefined behavior (run time error)
    //String literals cannot be changed

    /*
    char *cPtr = "Orhan";
    *p = 'S'; // undifened behaiovar
    */

    //If the programmer wrote like this
    /*

    const char *cPtr1 = "orhan";
    *cPtr = "S"; // The error is guaranteed in C.

    */

    //In C++, it is a syntax error, it is guaranteed

/***********************************************************/
/***********************************************************/

    // T* --> void * We can assign whatever type we want.

    //None of these assignments are wrong
    //They are valid in C and C++

    /*
    int x = 10;
    unsigned long y = 12;
    double dval = 5;
    char str[] = "orhan";
    void *vptr = &x;
    vptr = &y;
    vptr = &dval;
    vptr = str;
    */


    /* Valid in C, C++ syntax error */
    // void * ---> T* convert
    //C has legal and usage areas.
    //C++ syntax error

    /*
    int y = 10;
    void *vptr1 = &y;
    int *iptr = vptr1;
    */

/***********************************************************/
/***********************************************************/

    // For example in C
    // inlude <stdlib.h>

    /*
      size_t n;

      //c is also valid and used.
      //We can't write like this in C++
      int *pd = malloc( n * sizeof(int));
      // we need to cast to the type of the object for it to be legal C++ (int *) malloc.....
      // int *pd = (int *) malloc( n * sizeof(int));

    */

/***********************************************************/
/***********************************************************/

    return 0;
}
