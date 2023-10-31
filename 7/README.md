draw shapes with rule and pen easy , let's try with language programming

In C, there are three main types of loops: `for`, `while`, and `do-while`. Each loop serves a specific purpose and can be used based on the requirements of the program.

### 1. For Loop:

The `for` loop is commonly used when you know in advance how many times the loop should execute.

```c
#include <stdio.h>

int main() {
    // Example of a for loop that prints numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    return 0;
}
```

**Explanation:**
- `for (int i = 1; i <= 5; i++)`: Initializes `i` to 1, executes the loop as long as `i` is less than or equal to 5, and increments `i` by 1 in each iteration.
- The loop prints the value of `i` on each iteration.

### 2. While Loop:

The `while` loop is used when the number of iterations is not known in advance, and the loop continues as long as a specified condition is true.

```c
#include <stdio.h>

int main() {
    // Example of a while loop that prints numbers from 1 to 5
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
```

**Explanation:**
- `int i = 1;`: Initializes `i` to 1 before entering the loop.
- `while (i <= 5)`: Continues the loop as long as `i` is less than or equal to 5.
- The loop prints the value of `i` on each iteration and increments `i` by 1.

### 3. Do-While Loop:

The `do-while` loop is similar to the `while` loop, but it always executes the loop body at least once because the condition is checked after the loop body.

```c
#include <stdio.h>

int main() {
    // Example of a do-while loop that prints numbers from 1 to 5
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}
```

**Explanation:**
- `int i = 1;`: Initializes `i` to 1 before entering the loop.
- `do { ... } while (i <= 5);`: Executes the loop body at least once and continues the loop as long as `i` is less than or equal to 5.
- The loop prints the value of `i` on each iteration and increments `i` by 1.

These loops provide flexibility and control flow in C programs, allowing you to repeat a certain block of code multiple times based on specific conditions.
