# Sheet 1 Problems
<br />
[A. Say Hello With C++ problem](##A.-Say-Hello-With-C++)
[A. Say Hello With C++ problem](#A.-Say-Hello-With-C++)
<br />
## A. Say Hello With C++

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

## B. Basic Data Types

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

## C. Simple Calculator

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
