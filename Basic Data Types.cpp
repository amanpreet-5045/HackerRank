/*Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value


Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

Sample Input

3 12345678912345 a 334.23 14049.30493
Sample Output

3
12345678912345
a
334.230
14049.304930000

Print int 3,
followed by long 12345678912345,
followed by char a,
followed by float 334.230,
followed by double 14049.304930000.*/




#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n1;
    long long l;
    char ch;
    float f;
    double d;
    
    scanf("%d %lld %c %f %lf",&n1,&l, &ch, &f , &d);
    
    printf("%d\n%lld\n%c\n%.3f\n%.9lf\n", n1,l, ch, f ,d);
    return 0;
}
