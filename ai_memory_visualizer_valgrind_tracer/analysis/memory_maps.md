# Task 0 – AI Memory Visualizer

## 1. Objective

This analysis explains how stack and heap memory behave in C programs.

The goal is to understand pointers, recursion, memory allocation, object lifetimes, and use-after-free errors.

## 2. Stack Memory – stack_example.c

The program uses recursion with `walk_stack(0, 3)`.

Each recursive call creates a new stack frame containing its own local variables.

### Memory map

```text
STACK (at depth 3)

+-----------------------+
| depth = 3             |
| local_int = 103       |
| marker = 30           |
| local_buf[0] = 'D'    |
+-----------------------+
| depth = 2             |
| local_int = 102       |
| marker = 20           |
| local_buf[0] = 'C'    |
+-----------------------+
| depth = 1             |
| local_int = 101       |
| marker = 10           |
| local_buf[0] = 'B'    |
+-----------------------+
| depth = 0             |
| local_int = 100       |
| marker = 0            |
| local_buf[0] = 'A'    |
+-----------------------+
```

When recursion finishes, the calls return in this order:

`3 → 2 → 1 → 0`

Each local variable's lifetime ends when its function call finishes.

## 3. Heap Memory – aliasing_example.c

The function `make_numbers(int n)` allocates memory dynamically using `malloc()`.

```c
arr = (int *)malloc((size_t)n * sizeof(int));
```

The allocated array remains alive after `make_numbers()` returns, until it is freed.

### Pointer aliasing

```c
b = a;
```

Both pointers refer to the same allocated memory.

```text
STACK                     HEAP

a -----------+
             |
             +----------> [ allocated array ]
             |
b -----------+
```

### Memory deallocation

```c
free(a);
```

The allocated object's lifetime ends.

The pointer `b` is now dangling. It must not be used to access the freed allocation.

```text
STACK                     HEAP

a -----------+
             |
             +--X-------> [ FREED MEMORY ]
             |
b -----------+

X = allocation no longer valid
```

### Use-after-free

```c
printf("%d\n", b[2]);
b[3] = 1234;
```

These operations access memory after its lifetime has ended.

This is undefined behavior in C.

## 4. AI Critical Review

### Incomplete AI explanation

"The pointer `b` becomes invalid because `free(a)` deletes pointer `a`."

### Why this is misleading

`free(a)` does not delete the local pointer variable `a`.

Instead, it releases the dynamically allocated memory referenced by `a`.

The pointer variable `b` also exists, but the allocation it previously referenced is no longer valid.

### Corrected explanation

`a` and `b` are aliases of the same heap allocation. Calling `free(a)` ends the lifetime of that allocation. Accessing its former elements through `b` is a use-after-free error and causes undefined behavior.

## 5. Conclusion

Stack memory stores local variables and recursive function frames in these examples.

Heap memory stores dynamically allocated objects.

Pointer aliasing means multiple pointers can refer to the same object.

Memory must only be accessed while the referenced object is alive.

AI-generated explanations must be checked against the source code and actual program behavior.


### Heap allocation details

In `main()`, the variable `n` is initialized to 5.

```c
int n = 5;
a = make_numbers(n);
```

The function `make_numbers(5)` allocates memory for five integers using `malloc()`.

The allocated array contains:

```text
Index:  0   1   2   3   4
Value:  0  11  22  33  44
```

On a system where `sizeof(int) == 4`, the allocation occupies 20 bytes.

After `b = a`, both pointers refer to the same allocation.

Calling `free(a)` ends the lifetime of the allocated object. Subsequent accesses through `b` are undefined behavior.