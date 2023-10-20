
# HashTable Implementation 

This project provides a C++ implementation of a HashTable data structure. It includes methods for insertion, retrieval, and deletion of key-value pairs. Additionally, this implementation utilizes custom-implemented `Vector` and `Flist` classes to handle dynamic arrays and linked lists, respectively.

## Table of Contents

- [Overview](#overview)
- [Custom Vector Implementation](#custom-vector-implementation)
- [Custom Flist Implementation](#custom-flist-implementation)
- [Usage](#usage)
- [Implementation Details](#implementation-details)
- [How to Use](#how-to-use)
- [Contributing](#contributing)

## Overview

A HashTable is a data structure that allows you to store key-value pairs, and quickly retrieve the value associated with a given key. This implementation handles collisions using chaining, where each array index contains a linked list of key-value pairs. The project also includes custom implementations of `Vector` and `Flist` classes to manage dynamic arrays and linked lists efficiently.

## Custom Vector Implementation

The `Vector` class is a dynamic array implementation used in this project. It allows for dynamic resizing and efficient element access. Details about its implementation can be found in the `Vector.h` file.

## Custom Flist Implementation

The `Flist` class is a custom implementation of a singly linked list used in this project. It is used for chaining in cases of hash collisions. Details about its implementation can be found in the `Flist.h` file.

## Usage

To use this HashTable implementation in your C++ project, along with the custom `Vector` and `Flist` classes, include the necessary header files and create an instance of the `HashTable` class. Here's an example of how to use the HashTable:

```cpp
#include "HashTable.h"
#include "Vector.h"
#include "Flist.h"
#include "MyUtils.h"
#include <iostream>

int main() {
    HashTable table(100); // Create a HashTable with an initial size of 100
    
    table.insert(1, 42); // Insert a key-value pair
    int value = table.get(1); // Retrieve the value for a given key
    
    std::cout << "Value for key 1: " << value << std::endl;
    
    table.remove(1); // Remove a key-value pair
    
    return 0;
}
```

## Implementation Details

- **Hash Function:** The hash function used in this implementation calculates the hash value based on the absolute value of the key.
- **Custom Vector:** The custom `Vector` class is used for dynamic array management in the HashTable implementation.
- **Custom Flist:** The custom `Flist` class is used for chaining in case of hash collisions.
- **Prime Number Usage:** The implementation uses prime numbers to determine the size of the hash table, which can help reduce collisions.

## How to Use

1. **Clone the Repository:**
   ```bash
   git clone <repository-url>
   cd HashTable-Implementation
   ```

2. **Compile and Run:**
   ```bash
   g++ main.cpp -o main
   ./main
   ```

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or create a pull request.

