# Simple Hash Table Implementation in C )))

This repository contains a simple implementation of a hash table in C. It demonstrates fundamental concepts of hash table design including hashing functions, collision resolution, and dynamic resizing.

## Features

- **Custom Hash Table**: Implementation of a hash table data structure.
- **Collision Resolution**: Handles collisions using chaining.
- **Dynamic Resizing**: Automatically resizes the hash table for optimal performance.
- **Prime Number Calculation**: Utilizes prime numbers for hash functions.

## Files

- [`hash_table.c`](https://github.com/malewicz1337/hash-table-c/blob/main/src/hash_table.c): Core implementation of the hash table.
- [`hash_table.h`](https://github.com/malewicz1337/hash-table-c/blob/main/src/hash_table.h): Header file for hash table functions.
- [`main.c`](https://github.com/malewicz1337/hash-table-c/blob/main/src/main.c): Contains tests and examples of using the hash table.
- [`prime.c`](https://github.com/malewicz1337/hash-table-c/blob/main/src/prime.c): Functions for prime number calculations.
- [`prime.h`](https://github.com/malewicz1337/hash-table-c/blob/main/src/prime.h): Header file for prime number functions.

## Usage

To use this hash table implementation:

Compile:

```bash
cd src
cc main.c hash_table.c prime.c -o ../build/main
```

Run:

```bash
cd ..
cd build
./main
```

## Testing

The `main.c` file contains tests for various operations such as insertion, search, and deletion in the hash table. Compile and run this file to see the hash table in action.

## License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/malewicz1337/hash-table-c/blob/main/LICENSE) file for details.
