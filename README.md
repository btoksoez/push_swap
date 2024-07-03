# Push_swap

Welcome to my Push_swap project repository! This project, part of the 42 curriculum, focuses on sorting data on a stack using a limited set of instructions while aiming to use the fewest possible actions. It involves manipulating various algorithms and selecting the most appropriate solution for optimized data sorting.

## Table of Contents

- [Introduction](#introduction)
- [Rules](#rules)
- [Push_swap Program](#push_swap-program)
- [Benchmark](#benchmark)
- [Contributing](#contributing)
- [License](#license)

## Rules

- **Initial Setup:**
  - Stack `a` contains unique integers.
  - Stack `b` is initially empty.

- **Operations:**
  - `sa`, `sb`, `ss`: Swap elements.
  - `pa`, `pb`: Push elements between stacks.
  - `ra`, `rb`, `rr`: Rotate stacks upwards.
  - `rra`, `rrb`, `rrr`: Rotate stacks downwards.

## Push_swap Program
### Description

The `push_swap` program sorts numbers in stack `a` using the smallest number of instructions possible. The program handles errors gracefully, including invalid arguments and duplicates.

### Example Usage

```sh
$> ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa

$> ./push_swap 0 one 2 3
Error
Benchmark

My implementation achieves maximum efficiency, capable of sorting 500 random numbers in fewer than 5500 operations.
