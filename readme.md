# Sheet 1 Problems
<br />


 - [A. Say Hello With C++ problem](#a-say-hello-with-c)
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

# D. Difference

#### time limit per test: 1 second
#### memory limit per test: 256 megabytes


Given four numbers A, B, C and D. Print the result of the following equation :
 X = ( A &times; ) - ( C &times; D ).


### Input
Only one line containing 4 separated numbers A, B, C and D ( - 10<sup>5</sup>  ≤  A, B, C, D  ≤  10<sup>5</sup>).


### Output
Print "Difference  =  " without quotes followed by the equation result.



input
```
1 2 3 4
```
output
```
Difference = -10
```

input
```
2 3 4 5
```
output
```
Difference = -14
```

input
```
4 5 2 3
```
output
```
Difference = 14
```

### Soluation
```
#include <iostream>
 
using namespace std;
 
int main()
{
    long long a;
    long long b;
    long long c;
    long long d;
    cin >> a >> b >> c >> d;
    cout << "Difference = " << (a * b) - (c * d);
 
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

# F. Digits Summation

#### time limit per test: 0.25 second
#### memory limit per test: 64 megabytes


Given two numbers N and M. Print the summation of their last digits.


### Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 10 <sup>18</sup>).


### Output
Print the answer of the problem.


input
```
13 12
```
output
```
5
```
### **Note**
First Example: 
**last digit** in the first number is **3** and **last digit** in the second number is **2**
So the answoer is ( **3 + 2 = 5** )

### Soluation
```
#include <iostream>
 
using namespace std;
 
int main ()
{
   long long x, y;
   cin >> x >> y;
   int n1 = x % 10;
   int n2 = y % 10;
 
   cout << n1 + n2;
   return 0;
}
#include <iostream>
 
using namespace std;
 
int main()
{
    long long a;
    long long b;
    long long c;
    long long d;
    cin >> a >> b >> c >> d;
    cout << "Difference = " << (a * b) - (c * d);
 
    return 0;
}
```

<br />

# G Summation from 1 to N

#### time limit per test: 0.25 second
#### memory limit per test: 256 megabytes

Given a number **N**. Print the **summation** of the numbers that is between **1** and **N** **(inclusive)**.

\[ \sum_{i=1}^{n} i \]


### Input
Only one line containing a number **N (1 ≤ N ≤ 10<sup>9</sup>)**


### Output
Print the **summation** of the numbers that are between **1** and **N (inclusive)**.


### Examples
input
```
3
```
output
```
6
```

input
```
10
```
output
```
55
```


### **Note**
First Example: 
the nubmers between 1 and 3 are **1,2,3**.
So the answer is : **(1 + 2 + 3 = 6 )**
Second Example:
the nubmers between 1 and 10 are **1,2,3,4,5,6,7,8,9,10**.
So the answer is : **(1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55)**
### Soluation
```
#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    cout << ( n * (n + 1))/2 << "\n";
    return 0;
}
```

<br />


# G Summation from 1 to N

#### time limit per test: 0.25 second
#### memory limit per test: 256 megabytes

Given a number **N**. Print the **summation** of the numbers that is between **1** and **N** **(inclusive)**.

\[ \sum_{i=1}^{n} i \]


### Input
Only one line containing a number **N (1 ≤ N ≤ 10<sup>9</sup>)**


### Output
Print the **summation** of the numbers that are between **1** and **N (inclusive)**.


### Examples
input
```
3
```
output
```
6
```

input
```
10
```
output
```
55
```


### **Note**
First Example: 
the nubmers between 1 and 3 are **1,2,3**.
So the answer is : **(1 + 2 + 3 = 6 )**
Second Example:
the nubmers between 1 and 10 are **1,2,3,4,5,6,7,8,9,10**.
So the answer is : **(1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55)**
### Soluation
```
#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    cout << ( n * (n + 1))/2 << "\n";
    return 0;
}
```

<br />



