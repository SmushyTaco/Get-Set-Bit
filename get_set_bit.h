#ifndef SMUSHYTACO_GET_SET_BIT_H
#define SMUSHYTACO_GET_SET_BIT_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
// Error Handling For Checked Methods
static inline bool isInBounds(const unsigned char position, const size_t bitSize) { return position < bitSize; }
static inline bool isInBoundsWithPointer(const unsigned char position, const size_t bitSize, bool *restrict const isPositionInBounds) {
    bool isPositionInBoundsLocal = isInBounds(position, bitSize);
    if (isPositionInBounds) *isPositionInBounds = isPositionInBoundsLocal;
    return isPositionInBoundsLocal;
}
static inline void crashIfOutOfBounds(const unsigned char position, const size_t bitSize, const char typeName[]) {
    if (isInBounds(position, bitSize)) return;
    fprintf(stderr, "Error: The position of \"%hhu\" is too large for the \"%s\" type which is of size %zu in bits. Remember the position is zero based meaning the smallest position is \"0\" and the largest position is \"%zu\" for the \"%s\" type!", position, typeName, bitSize, bitSize - 1, typeName);
    abort();
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
// Get int8_t
static inline bool getBitInt8T(const int8_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitInt8TChecked(const int8_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int8_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitInt8T(number, position);
}
static inline bool getBitInt8TCheckedCrash(const int8_t number, const unsigned char position) {
    const char typeName[] = "int8_t";
    crashIfOutOfBounds(position, sizeof(int8_t) * CHAR_BIT, typeName);
    return getBitInt8T(number, position);
}
// Set int8_t
static inline void setBitInt8T(int8_t *restrict const number, const unsigned char position, const bool value) { *number = (int8_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitInt8TChecked(int8_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int8_t) * CHAR_BIT)) return false;
    setBitInt8T(number, position, value);
    return true;
}
static inline void setBitInt8TCheckedCrash(int8_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int8_t";
    crashIfOutOfBounds(position, sizeof(int8_t) * CHAR_BIT, typeName);
    setBitInt8T( number, position, value);
}
// Get uint8_t
static inline bool getBitUint8T(const uint8_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUint8TChecked(const uint8_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint8_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUint8T(number, position);
}
static inline bool getBitUint8TCheckedCrash(const uint8_t number, const unsigned char position) {
    const char typeName[] = "uint8_t";
    crashIfOutOfBounds(position, sizeof(uint8_t) * CHAR_BIT, typeName);
    return getBitUint8T(number, position);
}
// Set uint8_t
static inline void setBitUint8T(uint8_t *restrict const number, const unsigned char position, const bool value) { *number = (uint8_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUint8TChecked(uint8_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint8_t) * CHAR_BIT)) return false;
    setBitUint8T(number, position, value);
    return true;
}
static inline void setBitUint8TCheckedCrash(uint8_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint8_t";
    crashIfOutOfBounds(position, sizeof(uint8_t) * CHAR_BIT, typeName);
    setBitUint8T(number, position, value);
}
// Get int16_t
static inline bool getBitInt16T(const int16_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitInt16TChecked(const int16_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int16_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitInt16T(number, position);
}
static inline bool getBitInt16TCheckedCrash(const int16_t number, const unsigned char position) {
    const char typeName[] = "int16_t";
    crashIfOutOfBounds(position, sizeof(int16_t) * CHAR_BIT, typeName);
    return getBitInt16T(number, position);
}
// Set int16_t
static inline void setBitInt16T(int16_t *restrict const number, const unsigned char position, const bool value) { *number = (int16_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitInt16TChecked(int16_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int16_t) * CHAR_BIT)) return false;
    setBitInt16T(number, position, value);
    return true;
}
static inline void setBitInt16CheckedCrash(int16_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int16_t";
    crashIfOutOfBounds(position, sizeof(int16_t) * CHAR_BIT, typeName);
    setBitInt16T(number, position, value);
}
// Get uint16_t
static inline bool getBitUint16T(const uint16_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUint16TChecked(const uint16_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint16_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUint16T(number, position);
}
static inline bool getBitUint16TCheckedCrash(const uint16_t number, const unsigned char position) {
    const char typeName[] = "uint16_t";
    crashIfOutOfBounds(position, sizeof(uint16_t) * CHAR_BIT, typeName);
    return getBitUint16T(number, position);
}
// Set uint16_t
static inline void setBitUint16T(uint16_t *restrict const number, const unsigned char position, const bool value) { *number = (uint16_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUint16TChecked(uint16_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint16_t) * CHAR_BIT)) return false;
    setBitUint16T(number, position, value);
    return true;
}
static inline void setBitUint16TCheckedCrash(uint16_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint16_t";
    crashIfOutOfBounds(position, sizeof(uint16_t) * CHAR_BIT, typeName);
    setBitUint16T(number, position, value);
}
// Get int32_t
static inline bool getBitInt32T(const int32_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitInt32TChecked(const int32_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int32_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitInt32T(number, position);
}
static inline bool getBitInt32TCheckedCrash(const int32_t number, const unsigned char position) {
    const char typeName[] = "int32_t";
    crashIfOutOfBounds(position, sizeof(int32_t) * CHAR_BIT, typeName);
    return getBitInt32T(number, position);
}
// Set int32_t
static inline void setBitInt32T(int32_t *restrict const number, const unsigned char position, const bool value) { *number = (int32_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitInt32TChecked(int32_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int32_t) * CHAR_BIT)) return false;
    setBitInt32T(number, position, value);
    return true;
}
// Get uint32_t
static inline bool getBitUint32T(const uint32_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUint32TChecked(const uint32_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint32_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUint32T(number, position);
}
static inline bool getBitUint32TCheckedCrash(const uint32_t number, const unsigned char position) {
    const char typeName[] = "uint32_t";
    crashIfOutOfBounds(position, sizeof(uint32_t) * CHAR_BIT, typeName);
    return getBitUint32T(number, position);
}
// Set uint32_t
static inline void setBitUint32T(uint32_t *restrict const number, const unsigned char position, const bool value) { *number = (uint32_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUint32TChecked(uint32_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint32_t) * CHAR_BIT)) return false;
    setBitUint32T(number, position, value);
    return true;
}
static inline void setBitUint32TCheckedCrash(uint32_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint32_t";
    crashIfOutOfBounds(position, sizeof(uint32_t) * CHAR_BIT, typeName);
    setBitUint32T(number, position, value);
}
static inline void setBitInt32TCheckedCrash(int32_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int32_t";
    crashIfOutOfBounds(position, sizeof(int32_t) * CHAR_BIT, typeName);
    setBitInt32T(number, position, value);
}
// Get int64_t
static inline bool getBitInt64T(const int64_t number, const unsigned char position) { return ((number & (1LL << position)) != 0); }
static inline bool getBitInt64TChecked(const int64_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int64_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitInt64T(number, position);
}
static inline bool getBitInt64TCheckedCrash(const int64_t number, const unsigned char position) {
    const char typeName[] = "int64_t";
    crashIfOutOfBounds(position, sizeof(int64_t) * CHAR_BIT, typeName);
    return getBitInt64T(number, position);
}
// Set int64_t
static inline void setBitInt64T(int64_t *restrict const number, const unsigned char position, const bool value) { *number = (int64_t) ((*number & ~(1LL << position)) | (value ? (1LL << position) : 0)); }
static inline bool setBitInt64TChecked(int64_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int64_t) * CHAR_BIT)) return false;
    setBitInt64T(number, position, value);
    return true;
}
static inline void setBitInt64TCheckedCrash(int64_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int64_t";
    crashIfOutOfBounds(position, sizeof(int64_t) * CHAR_BIT, typeName);
    setBitInt64T(number, position, value);
}
// Get uint64_t
static inline bool getBitUint64T(const uint64_t number, const unsigned char position) { return ((number & (1ULL << position)) != 0ULL); }
static inline bool getBitUint64TChecked(const uint64_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint64_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUint64T(number, position);
}
static inline bool getBitUint64TCheckedCrash(const uint64_t number, const unsigned char position) {
    const char typeName[] = "uint64_t";
    crashIfOutOfBounds(position, sizeof(uint64_t) * CHAR_BIT, typeName);
    return getBitUint64T(number, position);
}
// Set uint64_t
static inline void setBitUint64T(uint64_t *restrict const number, const unsigned char position, const bool value) { *number = (uint64_t) ((*number & ~(1ULL << position)) | (value ? (1ULL << position) : 0ULL)); }
static inline bool setBitUint64TChecked(uint64_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint64_t) * CHAR_BIT)) return false;
    setBitUint64T(number, position, value);
    return true;
}
static inline void setBitUint64TCheckedCrash(uint64_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint64_t";
    crashIfOutOfBounds(position, sizeof(uint64_t) * CHAR_BIT, typeName);
    setBitUint64T(number, position, value);
}
// Get int_fast8_t
static inline bool getBitIntFast8T(const int_fast8_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitIntFast8TChecked(const int_fast8_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int_fast8_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntFast8T(number, position);
}
static inline bool getBitIntFast8TCheckedCrash(const int_fast8_t number, const unsigned char position) {
    const char typeName[] = "int_fast8_t";
    crashIfOutOfBounds(position, sizeof(int_fast8_t) * CHAR_BIT, typeName);
    return getBitIntFast8T(number, position);
}
// Set int_fast8_t
static inline void setBitIntFast8T(int_fast8_t *restrict const number, const unsigned char position, const bool value) { *number = (int_fast8_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitIntFast8TChecked(int_fast8_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int_fast8_t) * CHAR_BIT)) return false;
    setBitIntFast8T(number, position, value);
    return true;
}
static inline void setBitIntFast8TCheckedCrash(int_fast8_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int_fast8_t";
    crashIfOutOfBounds(position, sizeof(int_fast8_t) * CHAR_BIT, typeName);
    setBitIntFast8T(number, position, value);
}
// Get uint_fast8_t
static inline bool getBitUintFast8T(const uint_fast8_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUintFast8TChecked(const uint_fast8_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint_fast8_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintFast8T(number, position);
}
static inline bool getBitUintFast8TCheckedCrash(const uint_fast8_t number, const unsigned char position) {
    const char typeName[] = "uint_fast8_t";
    crashIfOutOfBounds(position, sizeof(uint_fast8_t) * CHAR_BIT, typeName);
    return getBitUintFast8T(number, position);
}
// Set uint_fast8_t
static inline void setBitUintFast8T(uint_fast8_t *restrict const number, const unsigned char position, const bool value) { *number = (uint_fast8_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUintFast8TChecked(uint_fast8_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint_fast8_t) * CHAR_BIT)) return false;
    setBitUintFast8T(number, position, value);
    return true;
}
static inline void setBitUintFast8TCheckedCrash(uint_fast8_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint_fast8_t";
    crashIfOutOfBounds(position, sizeof(uint_fast8_t) * CHAR_BIT, typeName);
    setBitUintFast8T(number, position, value);
}
// Get int_fast16_t
static inline bool getBitIntFast16T(const int_fast16_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitIntFast16TChecked(const int_fast16_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int_fast16_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntFast16T(number, position);
}
static inline bool getBitIntFast16TCheckedCrash(const int_fast16_t number, const unsigned char position) {
    const char typeName[] = "int_fast16_t";
    crashIfOutOfBounds(position, sizeof(int_fast16_t) * CHAR_BIT, typeName);
    return getBitIntFast16T(number, position);
}
// Set int_fast16_t
static inline void setBitIntFast16T(int_fast16_t *restrict const number, const unsigned char position, const bool value) { *number = (int_fast16_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitIntFast16TChecked(int_fast16_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int_fast16_t) * CHAR_BIT)) return false;
    setBitIntFast16T(number, position, value);
    return true;
}
static inline void setBitIntFast16TCheckedCrash(int_fast16_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int_fast16_t";
    crashIfOutOfBounds(position, sizeof(int_fast16_t) * CHAR_BIT, typeName);
    setBitIntFast16T(number, position, value);
}
// Get uint_fast16_t
static inline bool getBitUintFast16T(const uint_fast16_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUintFast16TChecked(const uint_fast16_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint_fast16_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintFast16T(number, position);
}
static inline bool getBitUintFast16TCheckedCrash(const uint_fast16_t number, const unsigned char position) {
    const char typeName[] = "uint_fast16_t";
    crashIfOutOfBounds(position, sizeof(uint_fast16_t) * CHAR_BIT, typeName);
    return getBitUintFast16T(number, position);
}
// Set uint_fast16_t
static inline void setBitUintFast16T(uint_fast16_t *restrict const number, const unsigned char position, const bool value) { *number = (uint_fast16_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUintFast16TChecked(uint_fast16_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint_fast16_t) * CHAR_BIT)) return false;
    setBitUintFast16T(number, position, value);
    return true;
}
static inline void setBitUintFast16TCheckedCrash(uint_fast16_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint_fast16_t";
    crashIfOutOfBounds(position, sizeof(uint_fast16_t) * CHAR_BIT, typeName);
    setBitUintFast16T(number, position, value);
}
// Get int_fast32_t
static inline bool getBitIntFast32T(const int_fast32_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitIntFast32TChecked(const int_fast32_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int_fast32_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntFast32T(number, position);
}
static inline bool getBitIntFast32TCheckedCrash(const int_fast32_t number, const unsigned char position) {
    const char typeName[] = "int_fast32_t";
    crashIfOutOfBounds(position, sizeof(int_fast32_t) * CHAR_BIT, typeName);
    return getBitIntFast32T(number, position);
}
// Set int_fast32_t
static inline void setBitIntFast32T(int_fast32_t *restrict const number, const unsigned char position, const bool value) { *number = (int_fast32_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitIntFast32TChecked(int_fast32_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int_fast32_t) * CHAR_BIT)) return false;
    setBitIntFast32T(number, position, value);
    return true;
}
static inline void setBitIntFast32TCheckedCrash(int_fast32_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int_fast32_t";
    crashIfOutOfBounds(position, sizeof(int_fast32_t) * CHAR_BIT, typeName);
    setBitIntFast32T(number, position, value);
}
// Get uint_fast32_t
static inline bool getBitUintFast32T(const uint_fast32_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUintFast32TChecked(const uint_fast32_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint_fast32_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintFast32T(number, position);
}
static inline bool getBitUintFast32TCheckedCrash(const uint_fast32_t number, const unsigned char position) {
    const char typeName[] = "uint_fast32_t";
    crashIfOutOfBounds(position, sizeof(uint_fast32_t) * CHAR_BIT, typeName);
    return getBitUintFast32T(number, position);
}
// Set uint_fast32_t
static inline void setBitUintFast32T(uint_fast32_t *restrict const number, const unsigned char position, const bool value) { *number = (uint_fast32_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUintFast32TChecked(uint_fast32_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint_fast32_t) * CHAR_BIT)) return false;
    setBitUintFast32T(number, position, value);
    return true;
}
static inline void setBitUintFast32TCheckedCrash(uint_fast32_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint_fast32_t";
    crashIfOutOfBounds(position, sizeof(uint_fast32_t) * CHAR_BIT, typeName);
    setBitUintFast32T(number, position, value);
}
// Get int_fast64_t
static inline bool getBitIntFast64T(const int_fast64_t number, const unsigned char position) { return ((number & (1LL << position)) != 0); }
static inline bool getBitIntFast64TChecked(const int_fast64_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int_fast64_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntFast64T(number, position);
}
static inline bool getBitIntFast64TCheckedCrash(const int_fast64_t number, const unsigned char position) {
    const char typeName[] = "int_fast64_t";
    crashIfOutOfBounds(position, sizeof(int_fast64_t) * CHAR_BIT, typeName);
    return getBitIntFast64T(number, position);
}
// Set int_fast64_t
static inline void setBitIntFast64T(int_fast64_t *restrict const number, const unsigned char position, const bool value) { *number = (int_fast64_t) ((*number & ~(1LL << position)) | (value ? (1LL << position) : 0)); }
static inline bool setBitIntFast64TChecked(int_fast64_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int_fast64_t) * CHAR_BIT)) return false;
    setBitIntFast64T(number, position, value);
    return true;
}
static inline void setBitIntFast64TCheckedCrash(int_fast64_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int_fast64_t";
    crashIfOutOfBounds(position, sizeof(int_fast64_t) * CHAR_BIT, typeName);
    setBitIntFast64T(number, position, value);
}
// Get uint_fast64_t
static inline bool getBitUintFast64T(const uint_fast64_t number, const unsigned char position) { return ((number & (1ULL << position)) != 0ULL); }
static inline bool getBitUintFast64TChecked(const uint_fast64_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint_fast64_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintFast64T(number, position);
}
static inline bool getBitUintFast64TCheckedCrash(const uint_fast64_t number, const unsigned char position) {
    const char typeName[] = "uint_fast64_t";
    crashIfOutOfBounds(position, sizeof(uint_fast64_t) * CHAR_BIT, typeName);
    return getBitUintFast64T(number, position);
}
// Set uint_fast64_t
static inline void setBitUintFast64T(uint_fast64_t *restrict const number, const unsigned char position, const bool value) { *number = (uint_fast64_t) ((*number & ~(1ULL << position)) | (value ? (1ULL << position) : 0ULL)); }
static inline bool setBitUintFast64TChecked(uint_fast64_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint_fast64_t) * CHAR_BIT)) return false;
    setBitUintFast64T(number, position, value);
    return true;
}
static inline void setBitUintFast64TCheckedCrash(uint_fast64_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint_fast64_t";
    crashIfOutOfBounds(position, sizeof(uint_fast64_t) * CHAR_BIT, typeName);
    setBitUintFast64T(number, position, value);
}
// Get int_least8_t
static inline bool getBitIntLeast8T(const int_least8_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitIntLeast8TChecked(const int_least8_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int_least8_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntLeast8T(number, position);
}
static inline bool getBitIntLeast8TCheckedCrash(const int_least8_t number, const unsigned char position) {
    const char typeName[] = "int_least8_t";
    crashIfOutOfBounds(position, sizeof(int_least8_t) * CHAR_BIT, typeName);
    return getBitIntLeast8T(number, position);
}
// Set int_least8_t
static inline void setBitIntLeast8T(int_least8_t *restrict const number, const unsigned char position, const bool value) { *number = (int_least8_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitIntLeast8TChecked(int_least8_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int_least8_t) * CHAR_BIT)) return false;
    setBitIntLeast8T(number, position, value);
    return true;
}
static inline void setBitIntLeast8TCheckedCrash(int_least8_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int_least8_t";
    crashIfOutOfBounds(position, sizeof(int_least8_t) * CHAR_BIT, typeName);
    setBitIntLeast8T(number, position, value);
}
// Get uint_least8_t
static inline bool getBitUintLeast8T(const uint_least8_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUintLeast8TChecked(const uint_least8_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint_least8_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintLeast8T(number, position);
}
static inline bool getBitUintLeast8TCheckedCrash(const uint_least8_t number, const unsigned char position) {
    const char typeName[] = "uint_least8_t";
    crashIfOutOfBounds(position, sizeof(uint_least8_t) * CHAR_BIT, typeName);
    return getBitUintLeast8T(number, position);
}
// Set uint_least8_t
static inline void setBitUintLeast8T(uint_least8_t *restrict const number, const unsigned char position, const bool value) { *number = (uint_least8_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUintLeast8TChecked(uint_least8_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint_least8_t) * CHAR_BIT)) return false;
    setBitUintLeast8T(number, position, value);
    return true;
}
static inline void setBitUintLeast8TCheckedCrash(uint_least8_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint_least8_t";
    crashIfOutOfBounds(position, sizeof(uint_least8_t) * CHAR_BIT, typeName);
    setBitUintLeast8T(number, position, value);
}
// Get int_least16_t
static inline bool getBitIntLeast16T(const int_least16_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitIntLeast16TChecked(const int_least16_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int_least16_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntLeast16T(number, position);
}
static inline bool getBitIntLeast16TCheckedCrash(const int_least16_t number, const unsigned char position) {
    const char typeName[] = "int_least16_t";
    crashIfOutOfBounds(position, sizeof(int_least16_t) * CHAR_BIT, typeName);
    return getBitIntLeast16T(number, position);
}
// Set int_least16_t
static inline void setBitIntLeast16T(int_least16_t *restrict const number, const unsigned char position, const bool value) { *number = (int_least16_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitIntLeast16TChecked(int_least16_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int_least16_t) * CHAR_BIT)) return false;
    setBitIntLeast16T(number, position, value);
    return true;
}
static inline void setBitIntLeast16TCheckedCrash(int_least16_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int_least16_t";
    crashIfOutOfBounds(position, sizeof(int_least16_t) * CHAR_BIT, typeName);
    setBitIntLeast16T(number, position, value);
}
// Get uint_least16_t
static inline bool getBitUintLeast16T(const uint_least16_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUintLeast16TChecked(const uint_least16_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint_least16_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintLeast16T(number, position);
}
static inline bool getBitUintLeast16TCheckedCrash(const uint_least16_t number, const unsigned char position) {
    const char typeName[] = "uint_least16_t";
    crashIfOutOfBounds(position, sizeof(uint_least16_t) * CHAR_BIT, typeName);
    return getBitUintLeast16T(number, position);
}
// Set uint_least16_t
static inline void setBitUintLeast16T(uint_least16_t *restrict const number, const unsigned char position, const bool value) { *number = (uint_least16_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUintLeast16TChecked(uint_least16_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint_least16_t) * CHAR_BIT)) return false;
    setBitUintLeast16T(number, position, value);
    return true;
}
static inline void setBitUintLeast16TCheckedCrash(uint_least16_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint_least16_t";
    crashIfOutOfBounds(position, sizeof(uint_least16_t) * CHAR_BIT, typeName);
    setBitUintLeast16T(number, position, value);
}
// Get int_least32_t
static inline bool getBitIntLeast32T(const int_least32_t number, const unsigned char position) { return ((number & (1 << position)) != 0); }
static inline bool getBitIntLeast32TChecked(const int_least32_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int_least32_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntLeast32T(number, position);
}
static inline bool getBitIntLeast32TCheckedCrash(const int_least32_t number, const unsigned char position) {
    const char typeName[] = "int_least32_t";
    crashIfOutOfBounds(position, sizeof(int_least32_t) * CHAR_BIT, typeName);
    return getBitIntLeast32T(number, position);
}
// Set int_least32_t
static inline void setBitIntLeast32T(int_least32_t *restrict const number, const unsigned char position, const bool value) { *number = (int_least32_t) ((*number & ~(1 << position)) | (value ? (1 << position) : 0)); }
static inline bool setBitIntLeast32TChecked(int_least32_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int_least32_t) * CHAR_BIT)) return false;
    setBitIntLeast32T(number, position, value);
    return true;
}
static inline void setBitIntLeast32TCheckedCrash(int_least32_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int_least32_t";
    crashIfOutOfBounds(position, sizeof(int_least32_t) * CHAR_BIT, typeName);
    setBitIntLeast32T(number, position, value);
}
// Get uint_least32_t
static inline bool getBitUintLeast32T(const uint_least32_t number, const unsigned char position) { return ((number & (1U << position)) != 0U); }
static inline bool getBitUintLeast32TChecked(const uint_least32_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint_least32_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintLeast32T(number, position);
}
static inline bool getBitUintLeast32TCheckedCrash(const uint_least32_t number, const unsigned char position) {
    const char typeName[] = "uint_least32_t";
    crashIfOutOfBounds(position, sizeof(uint_least32_t) * CHAR_BIT, typeName);
    return getBitUintLeast32T(number, position);
}
// Set uint_least32_t
static inline void setBitUintLeast32T(uint_least32_t *restrict const number, const unsigned char position, const bool value) { *number = (uint_least32_t) ((*number & ~(1U << position)) | (value ? (1U << position) : 0U)); }
static inline bool setBitUintLeast32TChecked(uint_least32_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint_least32_t) * CHAR_BIT)) return false;
    setBitUintLeast32T(number, position, value);
    return true;
}
static inline void setBitUintLeast32TCheckedCrash(uint_least32_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint_least32_t";
    crashIfOutOfBounds(position, sizeof(uint_least32_t) * CHAR_BIT, typeName);
    setBitUintLeast32T(number, position, value);
}
// Get int_least64_t
static inline bool getBitIntLeast64T(const int_least64_t number, const unsigned char position) { return ((number & (1LL << position)) != 0); }
static inline bool getBitIntLeast64TChecked(const int_least64_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(int_least64_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntLeast64T(number, position);
}
static inline bool getBitIntLeast64TCheckedCrash(const int_least64_t number, const unsigned char position) {
    const char typeName[] = "int_least64_t";
    crashIfOutOfBounds(position, sizeof(int_least64_t) * CHAR_BIT, typeName);
    return getBitIntLeast64T(number, position);
}
// Set int_least64_t
static inline void setBitIntLeast64T(int_least64_t *restrict const number, const unsigned char position, const bool value) { *number = (int_least64_t) ((*number & ~(1LL << position)) | (value ? (1LL << position) : 0)); }
static inline bool setBitIntLeast64TChecked(int_least64_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(int_least64_t) * CHAR_BIT)) return false;
    setBitIntLeast64T(number, position, value);
    return true;
}
static inline void setBitIntLeast64TCheckedCrash(int_least64_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "int_least64_t";
    crashIfOutOfBounds(position, sizeof(int_least64_t) * CHAR_BIT, typeName);
    setBitIntLeast64T(number, position, value);
}
// Get uint_least64_t
static inline bool getBitUintLeast64T(const uint_least64_t number, const unsigned char position) { return ((number & (1ULL << position)) != 0ULL); }
static inline bool getBitUintLeast64TChecked(const uint_least64_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uint_least64_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintLeast64T(number, position);
}
static inline bool getBitUintLeast64TCheckedCrash(const uint_least64_t number, const unsigned char position) {
    const char typeName[] = "uint_least64_t";
    crashIfOutOfBounds(position, sizeof(uint_least64_t) * CHAR_BIT, typeName);
    return getBitUintLeast64T(number, position);
}
// Set uint_least64_t
static inline void setBitUintLeast64T(uint_least64_t *restrict const number, const unsigned char position, const bool value) { *number = (uint_least64_t) ((*number & ~(1ULL << position)) | (value ? (1ULL << position) : 0ULL)); }
static inline bool setBitUintLeast64TChecked(uint_least64_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uint_least64_t) * CHAR_BIT)) return false;
    setBitUintLeast64T(number, position, value);
    return true;
}
static inline void setBitUintLeast64TCheckedCrash(uint_least64_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uint_least64_t";
    crashIfOutOfBounds(position, sizeof(uint_least64_t) * CHAR_BIT, typeName);
    setBitUintLeast64T(number, position, value);
}
// Get intmax_t
static inline bool getBitIntMaxT(const intmax_t number, const unsigned char position) { return ((number & (1LL << position)) != 0); }
static inline bool getBitIntMaxTChecked(const intmax_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(intmax_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntMaxT(number, position);
}
static inline bool getBitIntMaxTCheckedCrash(const intmax_t number, const unsigned char position) {
    const char typeName[] = "intmax_t";
    crashIfOutOfBounds(position, sizeof(intmax_t) * CHAR_BIT, typeName);
    return getBitIntMaxT(number, position);
}
// Set intmax_t
static inline void setBitIntMaxT(intmax_t *restrict const number, const unsigned char position, const bool value) { *number = (intmax_t) ((*number & ~(1LL << position)) | (value ? (1LL << position) : 0)); }
static inline bool setBitIntMaxTChecked(intmax_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(intmax_t) * CHAR_BIT)) return false;
    setBitIntMaxT(number, position, value);
    return true;
}
static inline void setBitIntMaxTCheckedCrash(intmax_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "intmax_t";
    crashIfOutOfBounds(position, sizeof(intmax_t) * CHAR_BIT, typeName);
    setBitIntMaxT(number, position, value);
}
// Get uintmax_t
static inline bool getBitUintMaxT(const uintmax_t number, const unsigned char position) { return ((number & ((uintmax_t)1ULL << position)) != 0ULL); }
static inline bool getBitUintMaxTChecked(const uintmax_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uintmax_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintMaxT(number, position);
}
static inline bool getBitUintMaxTCheckedCrash(const uintmax_t number, const unsigned char position) {
    const char typeName[] = "uintmax_t";
    crashIfOutOfBounds(position, sizeof(uintmax_t) * CHAR_BIT, typeName);
    return getBitUintMaxT(number, position);
}
// Set uintmax_t
static inline void setBitUintMaxT(uintmax_t *restrict const number, const unsigned char position, const bool value) { *number = (uintmax_t) ((*number & ~((uintmax_t)1ULL << position)) | (value ? ((uintmax_t)1ULL << position) : 0ULL)); }
static inline bool setBitUintMaxTChecked(uintmax_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uintmax_t) * CHAR_BIT)) return false;
    setBitUintMaxT(number, position, value);
    return true;
}
static inline void setBitUintMaxTCheckedCrash(uintmax_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uintmax_t";
    crashIfOutOfBounds(position, sizeof(uintmax_t) * CHAR_BIT, typeName);
    setBitUintMaxT(number, position, value);
}
// Get intptr_t
static inline bool getBitIntPtrT(const intptr_t number, const unsigned char position) { return ((number & (1LL << position)) != 0); }
static inline bool getBitIntPtrTChecked(const intptr_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(intptr_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitIntPtrT(number, position);
}
static inline bool getBitIntPtrTCheckedCrash(const intptr_t number, const unsigned char position) {
    const char typeName[] = "intptr_t";
    crashIfOutOfBounds(position, sizeof(intptr_t) * CHAR_BIT, typeName);
    return getBitIntPtrT(number, position);
}
// Set intptr_t
static inline void setBitIntPtrT(intptr_t *restrict const number, const unsigned char position, const bool value) { *number = (intptr_t) ((*number & ~(1LL << position)) | (value ? (1LL << position) : 0)); }
static inline bool setBitIntPtrTChecked(intptr_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(intptr_t) * CHAR_BIT)) return false;
    setBitIntPtrT(number, position, value);
    return true;
}
static inline void setBitIntPtrTCheckedCrash(intptr_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "intptr_t";
    crashIfOutOfBounds(position, sizeof(intptr_t) * CHAR_BIT, typeName);
    setBitIntPtrT(number, position, value);
}
// Get uintptr_t
static inline bool getBitUintPtrT(const uintptr_t number, const unsigned char position) { return ((number & ((uintptr_t)1ULL << position)) != 0ULL); }
static inline bool getBitUintPtrTChecked(const uintptr_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(uintptr_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitUintPtrT(number, position);
}
static inline bool getBitUintPtrTCheckedCrash(const uintptr_t number, const unsigned char position) {
    const char typeName[] = "uintptr_t";
    crashIfOutOfBounds(position, sizeof(uintptr_t) * CHAR_BIT, typeName);
    return getBitUintPtrT(number, position);
}
// Set uintptr_t
static inline void setBitUintPtrT(uintptr_t *restrict const number, const unsigned char position, const bool value) { *number = (uintptr_t) ((*number & ~((uintptr_t)1ULL << position)) | (value ? ((uintptr_t)1ULL << position) : 0U)); }
static inline bool setBitUintPtrTChecked(uintptr_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(uintptr_t) * CHAR_BIT)) return false;
    setBitUintPtrT(number, position, value);
    return true;
}
static inline void setBitUintPtrTCheckedCrash(uintptr_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "uintptr_t";
    crashIfOutOfBounds(position, sizeof(uintptr_t) * CHAR_BIT, typeName);
    setBitUintPtrT(number, position, value);
}
// Get size_t
static inline bool getBitSizeT(const size_t number, const unsigned char position) { return ((number & ((size_t)1ULL << position)) != 0ULL); }
static inline bool getBitSizeTChecked(const size_t number, const unsigned char position, bool *restrict const isPositionInBounds) {
    if (!isInBoundsWithPointer(position, sizeof(size_t) * CHAR_BIT, isPositionInBounds)) return false;
    return getBitSizeT(number, position);
}
static inline bool getBitSizeTCheckedCrash(const size_t number, const unsigned char position) {
    const char typeName[] = "size_t";
    crashIfOutOfBounds(position, sizeof(size_t) * CHAR_BIT, typeName);
    return getBitSizeT(number, position);
}
// Set size_t
static inline void setBitSizeT(size_t *restrict const number, const unsigned char position, const bool value) { *number = (size_t) ((*number & ~((size_t)1ULL << position)) | (value ? ((size_t)1ULL << position) : 0U)); }
static inline bool setBitSizeTChecked(size_t *restrict const number, const unsigned char position, const bool value) {
    if (!isInBounds(position, sizeof(size_t) * CHAR_BIT)) return false;
    setBitSizeT(number, position, value);
    return true;
}
static inline void setBitSizeTCheckedCrash(size_t *restrict const number, const unsigned char position, const bool value) {
    const char typeName[] = "size_t";
    crashIfOutOfBounds(position, sizeof(size_t) * CHAR_BIT, typeName);
    setBitSizeT(number, position, value);
}
#endif //SMUSHYTACO_GET_SET_BIT_H
