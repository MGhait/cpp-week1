# Sheet 1 Problems
<br />

 - [A. Say Hello With C++ problem](#A-Say-Hello-With-C++)
 - [A. Say Hello With C++ problem](#a-say-hello-with-c++)
 - [B. Basic Data Types](#b-basic-data-types)
 - [C. Simple Calculator](#c-simple-calculator)
 - [D. Difference](#d-difference)
 - [E. Area of a Circle](#e-area-of-a-circle)
 - [F. Digits Summation](#f-digits-summation)
 - [G. Summation from 1 to N](#g-summation-from-1-to-n)
 - [H. Two numbers](#h-two-numbers)
 - [I. Welcome for you with Conditions](#i-welcome-for-you-with-conditions)
 - [J. Multiples](#j-multiples)
 - [K. Max and Min](#k-max-and-min)
 - [L. The Brothers](#l-the-brothers)
 - [M. Capital or Small or Digit](#m-capital-or-small-or-digit)
 - [N. Char](#n-char)
 - [O. Calculator](#o-calculator)
 - [P. First digit](#p-first-digit)
 - [Q. Coordinates of a Point](#q-coordinates-of-a-point)
 - [R. Age in Days](#r-age-in-days)
 - [S. Interval](#s-interval)
 - [T. Sort Numbers](#t-sort-numbers)
 - [U. Float or int](#u-float-or-int)
 - [V. Comparison](#v-comparison)
 - [W. Mathematical Expression](#w-mathematical-experession)
 - [X. Two intervals](#x-two-intervals)
 - [Y. The last 2 digits](#y-the-last-2-digits)
 - [Z. Hard Compare](#z-hard-compare)
<br />

# A. Say Hello With C++

#### time limit per test: 1 second
#### memory limit per test: 256 megabytes


Given a name S. Print "Hello, (name)" without parentheses.

### Input
Only one line containing a string S.

### Output
Print "Hello, " without quotes, then print name.

input
```
programmer
```
output
```
Hello, programmer
```
### Soluation
```
#include <iostream>
 
using namespace std;
 
int main()
{
    string name;
    cin >> name;
    cout << "Hello, " << name << "\n";
    return 0;
}
```

<br />

# B. Basic Data Types

#### time limit per test: 1 second
#### memory limit per test: 256 megabytes


The following lines show some C++ data types, their format specifiers and their most common bit widths:

 - **int** : 32 Bit integer.
 - **logn long** : 64 bit integer
 - **Char** : 8 bit Characters & symbols.
 - **Float** : 32 Bit real value.
 - **Double** : 64 Bit real value.

### Input
Only one line containing the following space-separated values: int, long long, char, float and double respectively.

### Output
Print each element on a new line in the same order it was received as input.



input
```
3 12345678912345 a 334.23 14049.30493
```
output
```
3
12345678912345
a
334.23
14049.3

```
### Soluation
```
#include <iostream>
 
using namespace std;
int main()
{
    int x;
    long long y;
    char c;
    float f;
    double d;
    cin >> x >> y >> c >> f >> d ;
    cout << x << "\n" << y << "\n" << c << "\n" << f << "\n" << d << "\n";
    return 0;
}
```

<br />

# C. Simple Calculator

#### time limit per test: 1 second
#### memory limit per test: 256 megabytes


Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.



### Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  10<sup>5</sup>).



### Output
Print 3 lines that contain the following in the same order:

1. "X + Y = summation result" without quotes.
2. "X * Y = multiplication result" without quotes.
3. "X - Y = subtraction result" without quotes.

input
```
5 10
```
output
```
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
```
### **note**
**Be careful with spaces.**
### Soluation
```
#include <iostream>
 
using namespace std;
 
int main()
{
    int x;
    int y;
    cin >> x >> y;
    cout << x << " + " << y << " = " << x + y << "\n";
    cout << x << " * " << y << " = " << (long long)x * y << "\n";
    cout << x << " - " << y << " = " << x - y << "\n";
    return 0;
}
```

<br />

# E. Area of a Circle

#### time limit per test: 1 second
#### memory limit per test: 256 megabytes


Given a number R calculate the area of a circle using the following formula:
**Area** = π * R<sup>2</sup>.
**Note**: consider π = **3.141592653**.


### Input
Only one line containing the number R (1  ≤  R  ≤  100).


### Output
Print the calculated **area**, with **9** digits after the decimal point.



input
```
2.00
```
output
```
12.566370612
```
### **note**
* Use the data type double for this problem.
** Use setprecision(9) to print 9 digits after decimal point.
*** you can use function setprecision that are in #include<iomanip> library for Example :
```
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     // your code.
}
```



### Soluation
```
#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
    double pi = 3.141592653;
    double r;
    cin >> r;
    cout << fixed << setprecision(9);
    cout << pi * r * r << "\n";
    return 0;
}
```
