# [42] Push Swap

This project is split into two parts. Push_swap is given a stack of integers, an extra empty stack, and 11 different commands that it is allowed to use. Given this, sort the array using only said commands, in the least number of moves. In this implementation, insertion sort is used as the base, with optimization done to reduce the number of moves. Checker then takes the output and evaluates its validity.

### Allowed Commands

```
sa  : swap the first 2 elements at the top of stack a
sb  : swap the first 2 elements at the top of stack b
ss  : sa and sb at the same time
pa  : take the first element at the top of b and put it at the top of a
pb  : take the first element at the top of a and put it at the top of b
ra  : shift up all elements of stack a by 1. The first element becomes the last one
rb  : shift up all elements of stack b by 1. The first element becomes the last one
rr  : ra and rb at the same time
rra : shift down all elements of stack a by 1. The last element becomes the first one
rrb : shift down all elements of stack b by 1. The last element becomes the first one
rrr : rra and rrb at the same time
```

### Possible Optimization

Insertion sort has its limits despite the optimization done. Modifying a sorting algorithm more suited to sort with top of stack would be much better.Ideally, different sorting algorithms would be used depending on the size and overall variance of the data. Reading the entire list does not count as an action, so a smart program that can make decisions based on the current state of the list would be ideal.

## Final Score

113/100

## Usage

### Compilation

Compiler:

```
clang-6.0
```

Dependencies:

```
libft
```

### Execution

How to run:

```
./checker [numbers]
(commands)

./push_swap [numbers]
```

Flags:

```
-a : enables stack size count in visualizer
-c : enables color for stacks in visualizer
-s : enables delay for visualizer
-t : shows total actions
-v : enables visualizer
```

## Example

```
./checker 3 2 1 0
rra
pb
sa
rra
pa
OK
```

```
./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```

## Norme

This project is coded in accordance with the school's norms. A full copy of the norm can be found [here](https://github.com/MagicHatJo/-42-Norm/blob/master/norme.en.pdf).
