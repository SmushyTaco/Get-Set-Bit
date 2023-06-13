#ifndef SMUSHYTACO_GET_SET_BIT_H
#define SMUSHYTACO_GET_SET_BIT_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
// Error Handling For Checked Methods
static inline bool isInBounds(const unsigned char position, const size_t bitSize) { return position < bitSize; }
static inline bool isInBoundsWithPointer(const unsigned char position, const size_t bitSize, bool *restrict const isPositionInBounds) {
    *isPositionInBounds = isInBounds(position, bitSize);
    return *isPositionInBounds;
}
static inline void crashIfOutOfBounds(const unsigned char position, const size_t bitSize, const char typeName[]) {
    if (isInBounds(position, bitSize)) return;
    fprintf(stderr, "Error: The position of \"%hhu\" is too large for the \"%s\" type which is of size %zu in bits. Remember the position is zero based meaning the smallest position is \"0\" and the largest position is \"%zu\" for the \"%s\" type!", position, typeName, bitSize, bitSize - 1, typeName);
    exit(EXIT_FAILURE);
}
// Get Signed Char
static inline bool getBitSignedChar(const signed char number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitSignedCharChecked(const signed char number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(signed char) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitSignedChar(number, position);
}
static inline bool getBitSignedCharCheckedCrash(const signed char number, const unsigned char position) {
    const char typeName[] = "signed char";
    crashIfOutOfBounds(position, sizeof(signed char) * CHAR_BIT, typeName);
    return getBitSignedChar(number, position);
}
// Set Signed Char
static inline void setBitSignedChar(signed char *restrict const number, const unsigned char position, const bool value) { *number = (signed char) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitSignedCharChecked(signed char *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(signed char) * CHAR_BIT)) return false;
    setBitSignedChar(number, position, value);
    return true;
}
static inline void setBitSignedCharCheckedCrash(signed char *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "signed char";
    crashIfOutOfBounds(position, sizeof(signed char) * CHAR_BIT, typeName);
    setBitSignedChar(number, position, value);
}
// Get Unsigned Char
static inline bool getBitUnsignedChar(const unsigned char number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUnsignedCharChecked(const unsigned char number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(unsigned char) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUnsignedChar(number, position);
}
static inline bool getBitUnsignedCharCheckedCrash(const unsigned char number, const unsigned char position) {
    const char typeName[] = "unsigned char";
    crashIfOutOfBounds(position, sizeof(unsigned char) * CHAR_BIT, typeName);
    return getBitUnsignedChar(number, position);
}
// Set Unsigned Char
static inline void setBitUnsignedChar(unsigned char *restrict const number, const unsigned char position, const bool value) { *number = (unsigned char) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUnsignedCharChecked(unsigned char *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(unsigned char) * CHAR_BIT)) return false;
    setBitUnsignedChar(number, position, value);
    return true;
}
static inline void setBitUnsignedCharCheckedCrash(unsigned char *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "unsigned char";
    crashIfOutOfBounds(position, sizeof(unsigned char) * CHAR_BIT, typeName);
    setBitUnsignedChar(number, position, value);
}
// Get Char
static inline bool getBitChar(const char number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitCharChecked(const char number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(char) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitChar(number, position);
}
static inline bool getBitCharCheckedCrash(const char number, const unsigned char position) {
    const char typeName[] = "char";
    crashIfOutOfBounds(position, sizeof(char) * CHAR_BIT, typeName);
    return getBitChar(number, position);
}
// Set Char
static inline void setBitChar(char *restrict const number, const unsigned char position, const bool value) { *number = (char) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitCharChecked(char *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(char) * CHAR_BIT)) return false;
    setBitChar(number, position, value);
    return true;
}
static inline void setBitCharCheckedCrash(char *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "char";
    crashIfOutOfBounds(position, sizeof(char) * CHAR_BIT, typeName);
    setBitChar(number, position, value);
}
// Get Signed Short
static inline bool getBitSignedShort(const signed short number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitSignedShortChecked(const signed short number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(signed short) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitSignedShort(number, position);
}
static inline bool getBitSignedShortCheckedCrash(const signed short number, const unsigned char position) {
    const char typeName[] = "signed short";
    crashIfOutOfBounds(position, sizeof(signed short) * CHAR_BIT, typeName);
    return getBitSignedShort(number, position);
}
// Set Signed Short
static inline void setBitSignedShort(signed short *restrict const number, const unsigned char position, const bool value) { *number = (signed short) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitSignedShortChecked(signed short *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(signed short) * CHAR_BIT)) return false;
    setBitSignedShort(number, position, value);
    return true;
}
static inline void setBitSignedShortCheckedCrash(signed short *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "signed short";
    crashIfOutOfBounds(position, sizeof(signed short) * CHAR_BIT, typeName);
    setBitSignedShort(number, position, value);
}
// Get Unsigned Short
static inline bool getBitUnsignedShort(const unsigned short number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUnsignedShortChecked(const unsigned short number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(unsigned short) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUnsignedShort(number, position);
}
static inline bool getBitUnsignedShortCheckedCrash(const unsigned short number, const unsigned char position) {
    const char typeName[] = "unsigned short";
    crashIfOutOfBounds(position, sizeof(unsigned short) * CHAR_BIT, typeName);
    return getBitUnsignedShort(number, position);
}
// Set Unsigned Short
static inline void setBitUnsignedShort(unsigned short *restrict const number, const unsigned char position, const bool value) { *number = (unsigned short) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUnsignedShortChecked(unsigned short *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(unsigned short) * CHAR_BIT)) return false;
    setBitUnsignedShort(number, position, value);
    return true;
}
static inline void setBitUnsignedShortCheckedCrash(unsigned short *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "unsigned short";
    crashIfOutOfBounds(position, sizeof(unsigned short) * CHAR_BIT, typeName);
    setBitUnsignedShort(number, position, value);
}
// Get Short
static inline bool getBitShort(const short number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitShortChecked(const short number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(short) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitShort(number, position);
}
static inline bool getBitShortCheckedCrash(const short number, const unsigned char position) {
    const char typeName[] = "short";
    crashIfOutOfBounds(position, sizeof(short) * CHAR_BIT, typeName);
    return getBitShort(number, position);
}
// Set Short
static inline void setBitShort(short *restrict const number, const unsigned char position, const bool value) { *number = (short) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitShortChecked(short *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(short) * CHAR_BIT)) return false;
    setBitShort(number, position, value);
    return true;
}
static inline void setBitShortCheckedCrash(short *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "short";
    crashIfOutOfBounds(position, sizeof(short) * CHAR_BIT, typeName);
    setBitShort(number, position, value);
}
// Get Signed Int
static inline bool getBitSignedInt(const signed int number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitSignedIntChecked(const signed int number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(signed int) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitSignedInt(number, position);
}
static inline bool getBitSignedIntCheckedCrash(const signed int number, const unsigned char position) {
    const char typeName[] = "signed int";
    crashIfOutOfBounds(position, sizeof(signed int) * CHAR_BIT, typeName);
    return getBitSignedInt(number, position);
}
// Set Signed Int
static inline void setBitSignedInt(signed int *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1 << position)) | (value ? (1 << position) : 0); }
static inline bool setBitSignedIntChecked(signed int *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(signed int) * CHAR_BIT)) return false;
    setBitSignedInt(number, position, value);
    return true;
}
static inline void setBitSignedIntCheckedCrash(signed int *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "signed int";
    crashIfOutOfBounds(position, sizeof(signed int) * CHAR_BIT, typeName);
    setBitSignedInt(number, position, value);
}
// Get Unsigned Int
static inline bool getBitUnsignedInt(const unsigned int number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUnsignedIntChecked(const unsigned int number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(unsigned int) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUnsignedInt(number, position);
}
static inline bool getBitUnsignedIntCheckedCrash(const unsigned int number, const unsigned char position) {
    const char typeName[] = "unsigned int";
    crashIfOutOfBounds(position, sizeof(unsigned int) * CHAR_BIT, typeName);
    return getBitUnsignedInt(number, position);
}
// Set Unsigned Int
static inline void setBitUnsignedInt(unsigned int *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1U << position)) | (value ? (1U << position) : 0U); }
static inline bool setBitUnsignedIntChecked(unsigned int *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(unsigned int) * CHAR_BIT)) return false;
    setBitUnsignedInt(number, position, value);
    return true;
}
static inline void setBitUnsignedIntCheckedCrash(unsigned int *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "unsigned int";
    crashIfOutOfBounds(position, sizeof(unsigned int) * CHAR_BIT, typeName);
    setBitUnsignedInt(number, position, value);
}
// Get Int
static inline bool getBitInt(const int number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitIntChecked(const int number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitInt(number, position);
}
static inline bool getBitIntCheckedCrash(const int number, const unsigned char position) {
    const char typeName[] = "int";
    crashIfOutOfBounds(position, sizeof(int) * CHAR_BIT, typeName);
    return getBitInt(number, position);
}
// Set Int
static inline void setBitInt(int *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1 << position)) | (value ? (1 << position) : 0); }
static inline bool setBitIntChecked(int *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int) * CHAR_BIT)) return false;
    setBitInt(number, position, value);
    return true;
}
static inline void setBitIntCheckedCrash(int *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int";
    crashIfOutOfBounds(position, sizeof(int) * CHAR_BIT, typeName);
    setBitInt(number, position, value);
}
// Get Signed Long
static inline bool getBitSignedLong(const signed long number, const unsigned char position) { return ((number & (1L << position)) != 0L); }
static inline bool getBitSignedLongChecked(const signed long number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(signed long) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitSignedLong(number, position);
}
static inline bool getBitSignedLongCheckedCrash(const signed long number, const unsigned char position) {
    const char typeName[] = "signed long";
    crashIfOutOfBounds(position, sizeof(signed long) * CHAR_BIT, typeName);
    return getBitSignedLong(number, position);
}
// Set Signed Long
static inline void setBitSignedLong(signed long *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1L << position)) | (value ? (1L << position) : 0L); }
static inline bool setBitSignedLongChecked(signed long *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(signed long) * CHAR_BIT)) return false;
    setBitSignedLong(number, position, value);
    return true;
}
static inline void setBitSignedLongCheckedCrash(signed long *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "signed long";
    crashIfOutOfBounds(position, sizeof(signed long) * CHAR_BIT, typeName);
    setBitSignedLong(number, position, value);
}
// Get Unsigned Long
static inline bool getBitUnsignedLong(const unsigned long number, const unsigned char position) { return ((number & (1UL << position)) != 0UL); }
static inline bool getBitUnsignedLongChecked(const unsigned long number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(unsigned long) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUnsignedLong(number, position);
}
static inline bool getBitUnsignedLongCheckedCrash(const unsigned long number, const unsigned char position) {
    const char typeName[] = "unsigned long";
    crashIfOutOfBounds(position, sizeof(unsigned long) * CHAR_BIT, typeName);
    return getBitUnsignedLong(number, position);
}
// Set Unsigned Long
static inline void setBitUnsignedLong(unsigned long *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1UL << position)) | (value ? (1UL << position) : 0UL); }
static inline bool setBitUnsignedLongChecked(unsigned long *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(unsigned long) * CHAR_BIT)) return false;
    setBitUnsignedLong(number, position, value);
    return true;
}
static inline void setBitUnsignedLongCheckedCrash(unsigned long *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "unsigned long";
    crashIfOutOfBounds(position, sizeof(unsigned long) * CHAR_BIT, typeName);
    setBitUnsignedLong(number, position, value);
}
// Get Long
static inline bool getBitLong(const long number, const unsigned char position) { return ((number & (1L << position)) != 0L); }
static inline bool getBitLongChecked(const long number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(long) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitLong(number, position);
}
static inline bool getBitLongCheckedCrash(const long number, const unsigned char position) {
    const char typeName[] = "long";
    crashIfOutOfBounds(position, sizeof(long) * CHAR_BIT, typeName);
    return getBitLong(number, position);
}
// Set Long
static inline void setBitLong(long *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1L << position)) | (value ? (1L << position) : 0L); }
static inline bool setBitLongChecked(long *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(long) * CHAR_BIT)) return false;
    setBitLong(number, position, value);
    return true;
}
static inline void setBitLongCheckedCrash(long *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "long";
    crashIfOutOfBounds(position, sizeof(long) * CHAR_BIT, typeName);
    setBitLong(number, position, value);
}
// Get Signed Long Long
static inline bool getBitSignedLongLong(const signed long long number, const unsigned char position) { return ((number & (1LL << position)) != 0LL); }
static inline bool getBitSignedLongLongChecked(const signed long long number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(signed long long) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitSignedLongLong(number, position);
}
static inline bool getBitSignedLongLongCheckedCrash(const signed long long number, const unsigned char position) {
    const char typeName[] = "signed long long";
    crashIfOutOfBounds(position, sizeof(signed long long) * CHAR_BIT, typeName);
    return getBitSignedLongLong(number, position);
}
// Set Signed Long Long
static inline void setBitSignedLongLong(signed long long *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1LL << position)) | (value ? (1LL << position) : 0LL); }
static inline bool setBitSignedLongLongChecked(signed long long *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(signed long long) * CHAR_BIT)) return false;
    setBitSignedLongLong(number, position, value);
    return true;
}
static inline void setBitSignedLongLongCheckedCrash(signed long long *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "signed long long";
    crashIfOutOfBounds(position, sizeof(signed long long) * CHAR_BIT, typeName);
    setBitSignedLongLong(number, position, value);
}
// Get Unsigned Long Long
static inline bool getBitUnsignedLongLong(const unsigned long long number, const unsigned char position) { return ((number & (1ULL << position)) != 0ULL); }
static inline bool getBitUnsignedLongLongChecked(const unsigned long long number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(unsigned long long) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUnsignedLongLong(number, position);
}
static inline bool getBitUnsignedLongLongCheckedCrash(const unsigned long long number, const unsigned char position) {
    const char typeName[] = "unsigned long long";
    crashIfOutOfBounds(position, sizeof(unsigned long long) * CHAR_BIT, typeName);
    return getBitUnsignedLongLong(number, position);
}
// Set Unsigned Long Long
static inline void setBitUnsignedLongLong(unsigned long long *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1ULL << position)) | (value ? (1ULL << position) : 0ULL); }
static inline bool setBitUnsignedLongLongChecked(unsigned long long *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(unsigned long long) * CHAR_BIT)) return false;
    setBitUnsignedLongLong(number, position, value);
    return true;
}
static inline void setBitUnsignedLongLongCheckedCrash(unsigned long long *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "unsigned long long";
    crashIfOutOfBounds(position, sizeof(unsigned long long) * CHAR_BIT, typeName);
    setBitUnsignedLongLong(number, position, value);
}
// Get Long Long
static inline bool getBitLongLong(const long long number, const unsigned char position) { return ((number & (1LL << position)) != 0LL); }
static inline bool getBitLongLongChecked(const long long number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(long long) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitLongLong(number, position);
}
static inline bool getBitLongLongCheckedCrash(const long long number, const unsigned char position) {
    const char typeName[] = "long long";
    crashIfOutOfBounds(position, sizeof(long long) * CHAR_BIT, typeName);
    return getBitLongLong(number, position);
}
// Set Long Long
static inline void setBitLongLong(long long *restrict const number, const unsigned char position, const bool value) { *number = (*number & ~(1LL << position)) | (value ? (1LL << position) : 0LL); }
static inline bool setBitLongLongChecked(long long *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(long long) * CHAR_BIT)) return false;
    setBitLongLong(number, position, value);
    return true;
}
static inline void setBitLongLongCheckedCrash(long long *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "long long";
    crashIfOutOfBounds(position, sizeof(long long) * CHAR_BIT, typeName);
    setBitLongLong(number, position, value);
}
#endif //SMUSHYTACO_GET_SET_BIT_H
