# 🧪 Experiment 6 :- Loops in C++

## 💡 Objective:

To understand and implement different types of **loops in C++** (for, while, do-while) through multiple programs that demonstrate loop-based logic and pattern printing.

---

## ✅ Programs Included:

1. Code for **Reversing the Entered Number**
2. Code to **Print Even Numbers from 0 to 10**
3. Code for **Floyd’s Triangle**
4. Code for **Hour Glass Pattern**
5. Code to **Print “SIT” 5 Times**
6. Code for **Right Side Star Pattern**
7. Code for **Star Pyramid Pattern**
8. Code for **Left Side Star Pattern**

---

## 🔢 Q1: Code for Reversing the Entered Number

### 🎯 Aim:

To reverse the digits of an entered integer.

### 🧠 Logic:

1. Read the number.
2. Extract digits using `%` and remove digits using `/`.
3. Build the reversed number in a loop.

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    cout << "Reversed number: " << reversed;
    return 0;
}
```

### ✅ Output:

```
Enter a number: 1234
Reversed number: 4321
```

---

## 🧮 Q2: Code to Print Even Numbers from 0 to 10

### 🎯 Aim:

To print all even numbers from 0 to 10 using a loop.

### 🧠 Logic:

Use a for loop and check if a number is divisible by 2.

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    return 0;
}
```

### ✅ Output:

```
0 2 4 6 8 10
```

---

## 🔺 Q3: Code for Floyd’s Triangle

### 🎯 Aim:

To print Floyd’s Triangle up to a certain number of rows.

### 🧠 Logic:

Use a nested loop and increment a number in a triangular format.

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows, num = 1;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
```

### ✅ Output (rows = 4):

```
1
2 3
4 5 6
7 8 9 10
```

---

## ⌛ Q4: Code for Hour Glass Pattern

### 🎯 Aim:

To print an hourglass star pattern.

### 🧠 Logic:

Use nested loops:

* First loop for decreasing stars
* Second loop for increasing stars

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5;

    // Top half
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    // Bottom half
    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
```

### ✅ Output (n = 5):

```
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
```

---

## 🖨️ Q5: Code for Printing “SIT” 5 Times

### 🎯 Aim:

To print the word "SIT" 5 times using a loop.

### 🧠 Logic:

Use a `for` loop to repeat a message.

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "SIT" << endl;
    }
    return 0;
}
```

### ✅ Output:

```
SIT
SIT
SIT
SIT
SIT
```

---

## ⭐ Q6: Code for Right Side Star Pattern

### 🎯 Aim:

To print a right-angled triangle of stars aligned to the left.

### 🧠 Logic:

Use nested loops — outer for rows, inner for stars.

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
```

### ✅ Output:

```
*
**
***
****
*****
```

---

## ◀️ Q7: Code for Left Side Star Pattern

### 🎯 Aim:

To print a left-aligned triangle with right padding.

### 🧠 Logic:

Use nested loops for spaces and stars.

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
```

### ✅ Output:

```
    *
   **
  ***
 ****
*****
```

---

## 🔼 Q7: Code for Star Pyramid Pattern

### 🎯 Aim:

To print a symmetric pyramid using stars.

### 🧠 Logic:

Use nested loops for spaces and stars in each row.

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
```

### ✅ Output:

```
    *
   ***
  *****
 *******
*********
```


## 📌 Conclusion:

This experiment demonstrated:

* The use of **loops** (`for`, `while`, `do-while`) in solving a variety of problems.
* Creating **patterns**, processing **numbers**, and printing **repetitive output** efficiently.
* How nested loops are used in **pattern problems**, while simple loops help in **numeric/logical operations**.

---
