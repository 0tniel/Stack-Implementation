# Stack-Implementation
# Stack Implementation in C++

## Overview

This repository contains two implementations of a Stack:
1. **Stack Implementation Using Array**
2. **Stack Implementation Using C++ STL (Standard Template Library)**

A stack is a linear data structure that follows the **Last-In-First-Out (LIFO)** principle, where the element inserted last will be the first to be removed. Stacks are used in various applications such as recursive algorithms, expression evaluation, and memory management.

## Stack Implementations

### 1. Stack Implementation Using Array

#### Description
In this implementation, the stack is manually managed using an array. A pointer, `top`, keeps track of the index of the last element inserted into the stack.

#### Operations Supported
- **Push**: Adds an element to the top of the stack.
- **Pop**: Removes the top element from the stack.
- **Peek**: Returns the top element without removing it.
- **isFull and isEmpty**: Checks if the stack is full or empty.

#### Algorithm

- **Push Operation**:
  1. Check if the stack is full (`top == size - 1`).
  2. If not full, increment `top` and insert the new element at `arr[top]`.

- **Pop Operation**:
  1. Check if the stack is empty (`top == -1`).
  2. If not empty, remove the element at `arr[top]` and decrement `top`.

- **Peek Operation**:
  1. Check if the stack is empty.
  2. If not empty, return the element at `arr[top]`.

- **isFull / isEmpty**:
  - `isFull`: Returns true if `top == size - 1`.
  - `isEmpty`: Returns true if `top == -1`.

#### Time Complexity
- **Push**: O(1)
- **Pop**: O(1)
- **Peek**: O(1)

### 2. Stack Implementation Using C++ STL

#### Description
The C++ Standard Template Library (STL) provides a built-in stack class, making stack implementation simpler and safer. Memory management is handled internally, offering easy-to-use functions to manipulate the stack.

#### Operations Supported
- **push**: Adds an element to the top of the stack.
- **pop**: Removes the top element from the stack.
- **top**: Returns the top element without removing it.
- **empty**: Checks if the stack is empty.

#### Algorithm

- **Push Operation (push)**:
  1. Use `st.push(value)` to insert an element at the top of the stack.

- **Pop Operation (pop)**:
  1. Use `st.pop()` to remove the top element from the stack.

- **Access Top Element (top)**:
  1. Use `st.top()` to retrieve the element at the top of the stack without removing it.

- **Check If Stack is Empty**:
  1. Use `st.empty()` to check if the stack is empty.

#### Time Complexity
- **Push**: O(1)
- **Pop**: O(1)
- **Top**: O(1)

## Usage

### Stack Using Array
To use the stack implemented using arrays, simply run the code and call the functions for push, pop, peek, and checking if the stack is full or empty.

### Stack Using C++ STL
Using the STL stack is straightforward. Create a stack object and utilize the in-built functions like `push()`, `pop()`, and `top()`.

```cpp
#include <stack>

std::stack<int> st;
st.push(5);
st.push(10);
st.top(); // Returns 10
st.pop(); // Removes 10
