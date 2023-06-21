# Get Set Bit
A Simple C Library For Bit Manipulation
## Table of Contents
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Individual Field Setting Documentation](#individual-field-setting-documentation)
  - [Getters](#getters)
    - [Unchecked](#unchecked)
    - [Checked](#checked)
    - [Checked Crash](#checked-crash)
  - [Setters](#setters)
    - [Unchecked](#unchecked-1)
    - [Checked](#checked-1)
    - [Checked Crash](#checked-crash-1)
- [Bit Field Setting Documentation](#bit-field-setting-documentation)
## Prerequisites
This uses the `C99 standard`. Make sure your compiler supports this!
## Usage

In your `CMakeLists.txt`, add the following:

```cmake
include(FetchContent)

FetchContent_Declare(
        get_set_bit
        GIT_REPOSITORY https://github.com/SmushyTaco/Get-Set-Bit.git
        GIT_TAG        main
)

FetchContent_GetProperties(get_set_bit)
if(NOT get_set_bit_POPULATED)
    FetchContent_Populate(get_set_bit)
    add_subdirectory(${get_set_bit_SOURCE_DIR} ${get_set_bit_BINARY_DIR})
endif()

target_link_libraries(untitled get_set_bit)

target_include_directories(untitled PUBLIC "${get_set_bit_SOURCE_DIR}")
```

Replace every instance of `untitled` with the executable target.

and in your C file you can use the library like so after configuring your CMake file:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    setBitInt(&example, 0, true);
}

```

## Individual Field Setting Documentation
The documentation is very simple, there are three varients of getters and three varients of setters and these varients are provided for all integer types (`signed char`, `unsigned char`, `char`, `signed short`, `unsigned short`, `short`, `signed int`, `unsigned int`, `int`, `signed long`, `unsigned long`, `long`, `signed long long`, `unsigned long long`, `long long`, `int8_t`, `uint8_t`, `int16_t`, `uint16_t`, `int32_t`, `uint32_t`, `int64_t`, `uint64_t`, `int_fast8_t`, `uint_fast8_t`, `int_fast16_t`, `uint_fast16_t`, `int_fast32_t`, `uint_fast32_t`, `int_fast64_t`, `uint_fast64_t`, `int_least8_t`, `uint_least8_t`, `int_least16_t`, `uint_least16_t`, `int_least32_t`, `uint_least32_t`, `int_least64_t`, `uint_least64_t`, `intmax_t`, `uintmax_t`, `intptr_t`, `uintptr_t`, and `size_t`).

Both getters and setters have a position parameter, keep in mind that this parameter is `zero based`. For example, an `int` is `32 bits` on most machines so the smallest position is `0` and the largest position is `31`.

All the examples below, use the `int` version of functions, but all datatypes are supported. So if you want the bit of an `int` you'd use `getBitInt`, if you want the bit of a `long`, you'd use `getBitLong`, if you want the bit of an `unsigned long` you'd use `getBitUnsignedLong`, if you want the bit of a `signed char` you'd use `getBitSignedChar`, if you want the bit of a `int8_t` you'd use `getBitInt8T`, if you want the bit of a `uint8_t` you'd use `getBitUint8T`, if you want the bit of a `int_fast8_t` you'd use `getBitIntFast8T`, if you want the bit of a `uint_fast8_t` you'd use `getBitUintFast8T`, if you want the bit of a `int_least8_t` you'd use `getBitIntLeast8T`, if you want the bit of a `uint_least8_t` you'd use `getBitUintLeast8T`, if you want the bit of a `intmax_t` you'd use `getBitIntMaxT`, if you want the bit of a `uintmax_t` you'd use `getBitUintMaxT`, if you want the bit of a `intptr_t` you'd use `getBitIntPtrT`, if you want the bit of a `uintptr_t` you'd use `getBitUintPtrT`, if you want the bit of a `size_t` you'd use `getBitSizeT`, etc.
### Getters
#### Unchecked
The unchecked getter returns a boolean (`false` if the bit is `0` and `true` if the bit is `1`) and takes 2 parameters, the value of the variable and the position of the bit you want to check. For example:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    getBitInt(example, 0);
}

```
This will get the first bit of the example number and return `true` if the bit is `1` or return `false` if the bit is `0`. In this instance it'll return `false` because the bit is `0`. If the position is larger than the number of bits the variable can store, this will result in `undefiend behavior`. So the code below would be unpredictable:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    getBitInt(example, 32);
}

```
#### Checked
The return type is the same as the unchecked one, the first two parameters are the same too, but there's a third parameter which is a pointer to a boolean. If the position is out of bounds, the value of the pointer is set to `false`, if the position is in bounds, the value of the pointer is set to `true`. For example:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    bool isPositionInBounds = false;
    getBitIntChecked(example, 0, &isPositionInBounds);
    if (!isPositionInBounds) {
        fprintf_s(stderr, "The position was out of bounds!");
        exit(EXIT_FAILURE);
    }
    printf_s("The bit has be successfully retrieved!");
}

```
The position of `0` is in bounds so the output would be `The bit has be successfully retrieved!` while this:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    bool isPositionInBounds = false;
    getBitIntChecked(example, 32, &isPositionInBounds);
    if (!isPositionInBounds) {
        fprintf_s(stderr, "The position was out of bounds!");
        exit(EXIT_FAILURE);
    }
    printf_s("The bit has be successfully retrieved!");
}

```
Would output the message `The position was out of bounds!` instead.
#### Checked Crash
The parameters and return type are the same as the unchecked one but if the position is out of bounds the program is crashed with a useful error message. So this code wouldn't crash or output anything:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    getBitIntCheckedCrash(example, 0);
}

```
While this code would crash:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    getBitIntCheckedCrash(example, 32);
}

```
and output the error message `Error: The position of "32" is too large for the "int" type which is of size 32 in bits. Remember the position is zero based meaning the smallest position is "0" and the largest position is "31"!` instead.
### Setters
#### Unchecked
The unchecked setter returns nothing and takes 3 parameters, a pointer to your variable, the position of the bit you want to set, and a boolean which the bit will be set to (`false` sets it to `0` and `true` sets it to `1`). It is used like so:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    setBitInt(&example, 0, true);
}

```
If the position is larger than the number of bits the variable can store, this will result in `undefiend behavior`. So the code below would be unpredictable:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    setBitInt(&example, 32, true);
}

```
#### Checked
The parameters are the same as the unchecked one but this returns a boolean. If the returned boolean is `true` then that means the position was in bounds and the code was ran. If it returns `false` then that means the position was out of bounds and the code didn't run. For example:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    if (!setBitIntChecked(&example, 0, true)) {
        fprintf_s(stderr, "The position was out of bounds!");
        exit(EXIT_FAILURE);
    }
    printf_s("The bit has be successfully set!");
}

```
This would output the message `The bit has be successfully set!` while this:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    if (!setBitIntChecked(&example, 32, true)) {
        fprintf_s(stderr, "The position was out of bounds!");
        exit(EXIT_FAILURE);
    }
    printf_s("The bit has be successfully set!");
}

```
Would output the message `The position was out of bounds!` instead.
#### Checked Crash
The parameters and return type are the same as the unchecked one but if the position is out of bounds the program is crashed with a useful error message. So this code wouldn't crash or output anything:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    setBitIntCheckedCrash(&example, 0, true);
}

```
While this code would crash:
```c
#include "get_set_bit.h"
int main(void) {
    int example = 0;
    setBitIntCheckedCrash(&example, 32, true);
}

```
and output the error message `Error: The position of "32" is too large for the "int" type which is of size 32 in bits. Remember the position is zero based meaning the smallest position is "0" and the largest position is "31"!` instead.
## Bit Field Setting Documentation
This section is short because you are expected to read what you saw before and apply many of those principles here. Signed ints are used for the examples but all types and typedefs are supported like seen before and follow the same naming conventions.
```c
// This counts how many bits a number you input takes up. This can be used to prevent overflows.
static inline unsigned char countBitsSignedInt(signed int number);
// This takes in your variable storing your bit field, the starting position of the bit field, and the ending position of it, and then returns the value to you.
static inline signed int getBitFieldSignedInt(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition);
// This is like the other method but takes two pointers. These two pointers will tell you if either of the positions you provided are out of bounds.
static inline signed int getBitFieldSignedIntChecked(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds);
// This takes the same number of parameters like the first get method but crashes if it encounters any errors. A detailed error message providing you all the information you need will be printed before the crash.
static inline signed int getBitFieldSignedIntCheckedCrash(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition);
// This is used to set a bit field. It doesn't take a pointer so you'd equal the variable to the function call.
static inline signed int setBitFieldSignedInt(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition, const signed int bitFieldValue);
// This has the same position checks as the other non crash check method but it also has a check to make sure the value you're setting the bit field to doesn't overflow.
static inline signed int setBitFieldSignedIntChecked(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition, const signed int bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds);
// This has all the checks as the method you just saw but it crashes and prints a detailed error message if it encounters an issue.
static inline signed int setBitFieldSignedIntCheckedCrash(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition, const signed int bitFieldValue);
```
