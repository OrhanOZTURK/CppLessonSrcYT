#include <stdio.h>


/*
 * implicit int
 * C++ invalid
 * C89 valid - C99/11 invalid
 * */
//fuu(int number){};
//int fuu(int number){};

/*
* Old style function definition
* C++ invalid
* C89 valid - C99/11 invalid, but compatibility with the pass
*/
//double func(x, y, z)
//float x, y, z;
//{

//}


/*
 * C++ func and fuu functions have no parameters
 */
void func(); //C, it does not have any information about the parameters.
void fuu(void);//C, function have no parameters

int main()
{
    /*
     * Declaration - implicit int function
     * C++ invalid
     * C89 valid - C99/11 invalid
     */
    //foo();
    // int foo();


    /* implicit int
     * C++ invalid
     * C89 valid - C99/11 invalid, but compatibility with the pass
     */
    //const a = 5;
    //static b = 7;

    //const int a = 5;
    //static int b = 7;

    //func(1, 2, 3, 5);
    //fuu(1, 2, 3);

    return 0;
}
