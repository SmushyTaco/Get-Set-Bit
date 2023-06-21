#ifndef SMUSHYTACO_GET_SET_BIT_FIELD_H
#define SMUSHYTACO_GET_SET_BIT_FIELD_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
// Error Handling Helpers For Checked Methods
static inline bool isInBoundsPosition(const unsigned char position, const size_t bitSize) { return position < bitSize; }
// Char
static inline unsigned char countBitsSignedChar(signed char number) {
    if (number == SCHAR_MIN) return sizeof(signed char) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (signed char) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUnsignedChar(unsigned char number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
static inline unsigned char countBitsChar(char number) {
    if (number == CHAR_MIN) return sizeof(char) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (char) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
// Short
static inline unsigned char countBitsSignedShort(signed short number) {
    if (number == SHRT_MIN) return sizeof(signed short) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (signed short) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUnsignedShort(unsigned short number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
static inline unsigned char countBitsShort(short number) {
    if (number == SHRT_MIN) return sizeof(short) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (short) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
// Int
static inline unsigned char countBitsSignedInt(signed int number) {
    if (number == INT_MIN) return sizeof(signed int) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUnsignedInt(unsigned int number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
static inline unsigned char countBitsInt(int number) {
    if (number == INT_MIN) return sizeof(int) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = -number;
    for (; number; number >>= 1, ++count);
    return count;
}
// Long
static inline unsigned char countBitsSignedLong(signed long number) {
    if (number == LONG_MIN) return sizeof(signed long) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0L) number = -number;
    for (; number; number >>= 1L, ++count);
    return count;
}
static inline unsigned char countBitsUnsignedLong(unsigned long number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1UL, ++count);
    return count;
}
static inline unsigned char countBitsLong(long number) {
    if (number == LONG_MIN) return sizeof(long) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0L) number = -number;
    for (; number; number >>= 1L, ++count);
    return count;
}
// Long Long
static inline unsigned char countBitsSignedLongLong(signed long long number) {
    if (number == LONG_MIN) return sizeof(signed long long) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0LL) number = -number;
    for (; number; number >>= 1LL, ++count);
    return count;
}
static inline unsigned char countBitsUnsignedLongLong(unsigned long long number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1ULL, ++count);
    return count;
}
static inline unsigned char countBitsLongLong(long long number) {
    if (number == LONG_MIN) return sizeof(long long) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0LL) number = -number;
    for (; number; number >>= 1LL, ++count);
    return count;
}
// int8_t
static inline unsigned char countBitsInt8T(int8_t number) {
    if (number == INT8_MIN) return sizeof(int8_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (int8_t) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUint8T(uint8_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int16_t
static inline unsigned char countBitsInt16T(int16_t number) {
    if (number == INT16_MIN) return sizeof(int16_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (int16_t) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUint16T(uint16_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int32_t
static inline unsigned char countBitsInt32T(int32_t number) {
    if (number == INT32_MIN) return sizeof(int32_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUint32T(uint32_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int64_t
static inline unsigned char countBitsInt64T(int64_t number) {
    if (number == INT64_MIN) return sizeof(int64_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0LL) number = -number;
    for (; number; number >>= 1LL, ++count);
    return count;
}
static inline unsigned char countBitsUint64T(uint64_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1ULL, ++count);
    return count;
}
// int_fast8_t
static inline unsigned char countBitsIntFast8T(int_fast8_t number) {
    if (number == INT_FAST8_MIN) return sizeof(int_fast8_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (int_fast8_t) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUintFast8T(uint_fast8_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int_fast16_t
static inline unsigned char countBitsIntFast16T(int_fast16_t number) {
    if (number == INT_FAST16_MIN) return sizeof(int_fast16_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (int_fast16_t) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUintFast16T(uint_fast16_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int_fast32_t
static inline unsigned char countBitsIntFast32T(int_fast32_t number) {
    if (number == INT_FAST32_MIN) return sizeof(int_fast32_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUintFast32T(uint_fast32_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int_fast64_t
static inline unsigned char countBitsIntFast64T(int_fast64_t number) {
    if (number == INT_FAST64_MIN) return sizeof(int_fast64_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0LL) number = -number;
    for (; number; number >>= 1LL, ++count);
    return count;
}
static inline unsigned char countBitsUintFast64T(uint_fast64_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1ULL, ++count);
    return count;
}
// int_least8_t
static inline unsigned char countBitsIntLeast8T(int_least8_t number) {
    if (number == INT_LEAST8_MIN) return sizeof(int_least8_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (int_least8_t) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUintLeast8T(uint_least8_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int_least16_t
static inline unsigned char countBitsIntLeast16T(int_least16_t number) {
    if (number == INT_LEAST16_MIN) return sizeof(int_least16_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = (int_least16_t) -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUintLeast16T(uint_least16_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int_least32_t
static inline unsigned char countBitsIntLeast32T(int_least32_t number) {
    if (number == INT_LEAST32_MIN) return sizeof(int_least32_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0) number = -number;
    for (; number; number >>= 1, ++count);
    return count;
}
static inline unsigned char countBitsUintLeast32T(uint_least32_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1U, ++count);
    return count;
}
// int_least64_t
static inline unsigned char countBitsIntLeast64T(int_least64_t number) {
    if (number == INT_LEAST64_MIN) return sizeof(int_least64_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0LL) number = -number;
    for (; number; number >>= 1LL, ++count);
    return count;
}
static inline unsigned char countBitsUintLeast64T(uint_least64_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1ULL, ++count);
    return count;
}
// intmax_t
static inline unsigned char countBitsIntMaxT(intmax_t number) {
    if (number == INTMAX_MIN) return sizeof(intmax_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0LL) number = -number;
    for (; number; number >>= 1LL, ++count);
    return count;
}
static inline unsigned char countBitsUintMaxT(uintmax_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1ULL, ++count);
    return count;
}
// intptr_t
static inline unsigned char countBitsIntPtrT(intptr_t number) {
    if (number == INTPTR_MIN) return sizeof(intptr_t) * CHAR_BIT;
    unsigned char count = 1U;
    if (number < 0LL) number = -number;
    for (; number; number >>= 1LL, ++count);
    return count;
}
static inline unsigned char countBitsUintPtrT(uintptr_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1ULL, ++count);
    return count;
}
// size_t
static inline unsigned char countBitsSizeT(size_t number) {
    unsigned char count;
    for (count = 0U; number; number >>= 1ULL, ++count);
    return count;
}
// Error Handling For Checked Methods
static inline bool hasErrorForGet(unsigned char startPosition, unsigned char endPosition, const size_t bitSize, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    bool isStartPositionInBoundsLocal = isInBoundsPosition(startPosition, bitSize);
    bool isEndPositionInBoundsLocal = isInBoundsPosition(endPosition, bitSize);
    bool isPositionInBoundsLocal = isStartPositionInBoundsLocal && isEndPositionInBoundsLocal;
    if(isStartPositionInBounds) *isStartPositionInBounds = isStartPositionInBoundsLocal;
    if(isEndPositionInBounds) *isEndPositionInBounds = isEndPositionInBoundsLocal;
    return !isPositionInBoundsLocal;
}
static inline bool hasErrorForSet(unsigned char startPosition, unsigned char endPosition, const size_t bitSize, const unsigned char bitFieldValueSize, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    bool isStartPositionInBoundsLocal = isInBoundsPosition(startPosition, bitSize);
    bool isEndPositionInBoundsLocal = isInBoundsPosition(endPosition, bitSize);
    bool isPositionInBoundsLocal = isStartPositionInBoundsLocal && isEndPositionInBoundsLocal;
    bool bitFieldValueStaysWithinTheBitLimitLocal = bitFieldValueSize <= (endPosition - startPosition + 1U);
    if(isStartPositionInBounds) *isStartPositionInBounds = isStartPositionInBoundsLocal;
    if(isEndPositionInBounds) *isEndPositionInBounds = isEndPositionInBoundsLocal;
    if(bitFieldValueStaysWithinTheBitLimit) *bitFieldValueStaysWithinTheBitLimit = bitFieldValueStaysWithinTheBitLimitLocal;
    return !isPositionInBoundsLocal || !bitFieldValueStaysWithinTheBitLimitLocal;
}
static inline void crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(unsigned char startPosition, unsigned char endPosition, const size_t bitSize, const char typeName[]) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    bool isStartPositionInBounds = isInBoundsPosition(startPosition, bitSize);
    bool isEndPositionInBounds = isInBoundsPosition(endPosition, bitSize);
    bool isPositionInBounds = isStartPositionInBounds && isEndPositionInBounds;
    if (!isPositionInBounds) {
        if (!isStartPositionInBounds) fprintf(stderr, "Error: The start position of \"%hhu\" is too large for the \"%s\" type which is of size %zu in bits. Remember the position is zero based meaning the smallest position is \"0\" and the largest position is \"%zu\" for the \"%s\" type!\n", startPosition, typeName, bitSize, bitSize - 1, typeName);
        if (!isEndPositionInBounds) fprintf(stderr, "Error: The end position of \"%hhu\" is too large for the \"%s\" type which is of size %zu in bits. Remember the position is zero based meaning the smallest position is \"0\" and the largest position is \"%zu\" for the \"%s\" type!\n", endPosition, typeName, bitSize, bitSize - 1, typeName);
        fflush(stderr);
        abort();
    }
}
static inline void crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(unsigned char startPosition, unsigned char endPosition, const unsigned char bitFieldValueSize, const size_t bitSize, const char typeName[]) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    bool isStartPositionInBounds = isInBoundsPosition(startPosition, bitSize);
    bool isEndPositionInBounds = isInBoundsPosition(endPosition, bitSize);
    bool isPositionInBounds = isStartPositionInBounds && isEndPositionInBounds;
    bool bitFieldValueStaysWithinTheBitLimitLocal = bitFieldValueSize <= (endPosition - startPosition + 1U);
    bool shouldCrash = false;
    if (!isPositionInBounds) {
        if (!isStartPositionInBounds) fprintf(stderr, "Error: The start position of \"%hhu\" is too large for the \"%s\" type which is of size %zu in bits. Remember the position is zero based meaning the smallest position is \"0\" and the largest position is \"%zu\" for the \"%s\" type!\n", startPosition, typeName, bitSize, bitSize - 1, typeName);
        if (!isEndPositionInBounds) fprintf(stderr, "Error: The end position of \"%hhu\" is too large for the \"%s\" type which is of size %zu in bits. Remember the position is zero based meaning the smallest position is \"0\" and the largest position is \"%zu\" for the \"%s\" type!\n", endPosition, typeName, bitSize, bitSize - 1, typeName);
        shouldCrash = true;
    }
    if (!bitFieldValueStaysWithinTheBitLimitLocal) {
        fprintf(stderr, "Error: The amount of bits needed to store \"bitFieldValue\" is \"%hhu\" while the bounds you set only gives you \"%u\" bits!\n", bitFieldValueSize, endPosition - startPosition + 1U);
        shouldCrash = true;
    }
    if (shouldCrash) {
        fflush(stderr);
        abort();
    }
}
// Get Unsigned Char
static inline unsigned char getBitFieldUnsignedChar(unsigned char bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned char mask = (unsigned char) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    unsigned char result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline unsigned char getBitFieldUnsignedCharChecked(const unsigned char bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(unsigned char) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUnsignedChar(bitField, startPosition, endPosition);
}
static inline unsigned char getBitFieldUnsignedCharCheckedCrash(const unsigned char bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "unsigned char";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(unsigned char) * CHAR_BIT, typeName);
    return getBitFieldUnsignedChar(bitField, startPosition, endPosition);
}
// Set Unsigned Char
static inline unsigned char setBitFieldUnsignedChar(unsigned char bitField, unsigned char startPosition, unsigned char endPosition, unsigned char bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned char mask = (unsigned char) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline unsigned char setBitFieldUnsignedCharChecked(const unsigned char bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned char bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(unsigned char) * CHAR_BIT, countBitsUnsignedChar(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUnsignedChar(bitField, startPosition, endPosition, bitFieldValue);
}
static inline unsigned char setBitFieldUnsignedCharCheckedCrash(const unsigned char bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned char bitFieldValue) {
    const char typeName[] = "unsigned char";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUnsignedChar(bitFieldValue), sizeof(unsigned char) * CHAR_BIT, typeName);
    return setBitFieldUnsignedChar(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Signed Char
static inline signed char getBitFieldSignedChar(const signed char bitField, const unsigned char startPosition, const unsigned char endPosition) { return (signed char) getBitFieldUnsignedChar(bitField, startPosition, endPosition); }
static inline signed char getBitFieldSignedCharChecked(const signed char bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(signed char) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (signed char) getBitFieldUnsignedChar(bitField, startPosition, endPosition);
}
static inline signed char getBitFieldSignedCharCheckedCrash(const signed char bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "signed char";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(signed char) * CHAR_BIT, typeName);
    return (signed char) getBitFieldUnsignedChar(bitField, startPosition, endPosition);
}
// Set Signed Char
static inline signed char setBitFieldSignedChar(const signed char bitField, const unsigned char startPosition, const unsigned char endPosition, const signed char bitFieldValue) { return (signed char) setBitFieldUnsignedChar(bitField, startPosition, endPosition, bitFieldValue); }
static inline signed char setBitFieldSignedCharChecked(const signed char bitField, const unsigned char startPosition, const unsigned char endPosition, const signed char bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(signed char) * CHAR_BIT, countBitsSignedChar(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldSignedChar(bitField, startPosition, endPosition, bitFieldValue);
}
static inline signed char setBitFieldSignedCharCheckedCrash(const signed char bitField, const unsigned char startPosition, const unsigned char endPosition, const signed char bitFieldValue) {
    const char typeName[] = "signed char";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsSignedChar(bitFieldValue), sizeof(signed char) * CHAR_BIT, typeName);
    return setBitFieldSignedChar(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Char
static inline char getBitFieldChar(const char bitField, const unsigned char startPosition, const unsigned char endPosition) { return (char) getBitFieldUnsignedChar(bitField, startPosition, endPosition); }
static inline char getBitFieldCharChecked(const char bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(char) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (char) getBitFieldUnsignedChar(bitField, startPosition, endPosition);
}
static inline char getBitFieldCharCheckedCrash(const char bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "char";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(char) * CHAR_BIT, typeName);
    return (char) getBitFieldUnsignedChar(bitField, startPosition, endPosition);
}
// Set Char
static inline char setBitFieldChar(const char bitField, const unsigned char startPosition, const unsigned char endPosition, const char bitFieldValue) { return (char) setBitFieldUnsignedChar(bitField, startPosition, endPosition, bitFieldValue); }
static inline char setBitFieldCharChecked(const char bitField, const unsigned char startPosition, const unsigned char endPosition, const char bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(char) * CHAR_BIT, countBitsChar(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldChar(bitField, startPosition, endPosition, bitFieldValue);
}
static inline char setBitFieldCharCheckedCrash(const char bitField, const unsigned char startPosition, const unsigned char endPosition, const char bitFieldValue) {
    const char typeName[] = "char";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsChar(bitFieldValue), sizeof(char) * CHAR_BIT, typeName);
    return setBitFieldChar(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Unsigned Short
static inline unsigned short getBitFieldUnsignedShort(unsigned short bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned short mask = (unsigned short) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    unsigned short result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline unsigned short getBitFieldUnsignedShortChecked(const unsigned short bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(unsigned short) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUnsignedShort(bitField, startPosition, endPosition);
}
static inline unsigned short getBitFieldUnsignedShortCheckedCrash(const unsigned short bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "unsigned short";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(unsigned short) * CHAR_BIT, typeName);
    return getBitFieldUnsignedShort(bitField, startPosition, endPosition);
}
// Set Unsigned Short
static inline unsigned short setBitFieldUnsignedShort(unsigned short bitField, unsigned char startPosition, unsigned char endPosition, unsigned short bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned short mask = (unsigned short) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline unsigned short setBitFieldUnsignedShortChecked(const unsigned short bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned short bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(unsigned short) * CHAR_BIT, countBitsUnsignedShort(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUnsignedShort(bitField, startPosition, endPosition, bitFieldValue);
}
static inline unsigned short setBitFieldUnsignedShortCheckedCrash(const unsigned short bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned short bitFieldValue) {
    const char typeName[] = "unsigned short";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUnsignedShort(bitFieldValue), sizeof(unsigned short) * CHAR_BIT, typeName);
    return setBitFieldUnsignedShort(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Signed Short
static inline signed short getBitFieldSignedShort(const signed short bitField, const unsigned char startPosition, const unsigned char endPosition) { return (signed short) getBitFieldUnsignedShort(bitField, startPosition, endPosition); }
static inline signed short getBitFieldSignedShortChecked(const signed short bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(signed short) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (signed short) getBitFieldUnsignedShort(bitField, startPosition, endPosition);
}
static inline signed short getBitFieldSignedShortCheckedCrash(const signed short bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "signed short";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(signed short) * CHAR_BIT, typeName);
    return (signed short) getBitFieldUnsignedShort(bitField, startPosition, endPosition);
}
// Set Signed Short
static inline signed short setBitFieldSignedShort(const signed short bitField, const unsigned char startPosition, const unsigned char endPosition, const signed short bitFieldValue) { return (signed short) setBitFieldUnsignedShort(bitField, startPosition, endPosition, bitFieldValue); }
static inline signed short setBitFieldSignedShortChecked(const signed short bitField, const unsigned char startPosition, const unsigned char endPosition, const signed short bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(signed short) * CHAR_BIT, countBitsSignedShort(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldSignedShort(bitField, startPosition, endPosition, bitFieldValue);
}
static inline signed short setBitFieldSignedShortCheckedCrash(const signed short bitField, const unsigned char startPosition, const unsigned char endPosition, const signed short bitFieldValue) {
    const char typeName[] = "signed short";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsSignedShort(bitFieldValue), sizeof(signed short) * CHAR_BIT, typeName);
    return setBitFieldSignedShort(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Short
static inline short getBitFieldShort(const short bitField, const unsigned char startPosition, const unsigned char endPosition) { return (short) getBitFieldUnsignedShort(bitField, startPosition, endPosition); }
static inline short getBitFieldShortChecked(const short bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(short) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (short) getBitFieldUnsignedShort(bitField, startPosition, endPosition);
}
static inline short getBitFieldShortCheckedCrash(const short bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "short";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(short) * CHAR_BIT, typeName);
    return (short) getBitFieldUnsignedShort(bitField, startPosition, endPosition);
}
// Set Short
static inline short setBitFieldShort(const short bitField, const unsigned char startPosition, const unsigned char endPosition, const short bitFieldValue) { return (short) setBitFieldUnsignedShort(bitField, startPosition, endPosition, bitFieldValue); }
static inline short setBitFieldShortChecked(const short bitField, const unsigned char startPosition, const unsigned char endPosition, const short bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(short) * CHAR_BIT, countBitsShort(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldShort(bitField, startPosition, endPosition, bitFieldValue);
}
static inline short setBitFieldShortCheckedCrash(const short bitField, const unsigned char startPosition, const unsigned char endPosition, const short bitFieldValue) {
    const char typeName[] = "short";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsShort(bitFieldValue), sizeof(short) * CHAR_BIT, typeName);
    return setBitFieldShort(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Unsigned Int
static inline unsigned int getBitFieldUnsignedInt(unsigned int bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned int mask = ((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition;
    unsigned int result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline unsigned int getBitFieldUnsignedIntChecked(const unsigned int bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(unsigned int) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUnsignedInt(bitField, startPosition, endPosition);
}
static inline unsigned int getBitFieldUnsignedIntCheckedCrash(const unsigned int bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "unsigned int";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(unsigned int) * CHAR_BIT, typeName);
    return getBitFieldUnsignedInt(bitField, startPosition, endPosition);
}
// Set Unsigned Int
static inline unsigned int setBitFieldUnsignedInt(unsigned int bitField, unsigned char startPosition, unsigned char endPosition, unsigned int bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned int mask = ((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline unsigned int setBitFieldUnsignedIntChecked(const unsigned int bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned int bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(unsigned int) * CHAR_BIT, countBitsUnsignedInt(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUnsignedInt(bitField, startPosition, endPosition, bitFieldValue);
}
static inline unsigned int setBitFieldUnsignedIntCheckedCrash(const unsigned int bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned int bitFieldValue) {
    const char typeName[] = "unsigned int";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUnsignedInt(bitFieldValue), sizeof(unsigned int) * CHAR_BIT, typeName);
    return setBitFieldUnsignedInt(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Signed Int
static inline signed int getBitFieldSignedInt(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition) { return (signed int) getBitFieldUnsignedInt(bitField, startPosition, endPosition); }
static inline signed int getBitFieldSignedIntChecked(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(signed int) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (signed int) getBitFieldUnsignedInt(bitField, startPosition, endPosition);
}
static inline signed int getBitFieldSignedIntCheckedCrash(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "signed int";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(signed int) * CHAR_BIT, typeName);
    return (signed int) getBitFieldUnsignedInt(bitField, startPosition, endPosition);
}
// Set Signed Int
static inline signed int setBitFieldSignedInt(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition, const signed int bitFieldValue) { return (signed int) setBitFieldUnsignedInt(bitField, startPosition, endPosition, bitFieldValue); }
static inline signed int setBitFieldSignedIntChecked(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition, const signed int bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(signed int) * CHAR_BIT, countBitsSignedInt(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldSignedInt(bitField, startPosition, endPosition, bitFieldValue);
}
static inline signed int setBitFieldSignedIntCheckedCrash(const signed int bitField, const unsigned char startPosition, const unsigned char endPosition, const signed int bitFieldValue) {
    const char typeName[] = "signed int";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsSignedInt(bitFieldValue), sizeof(signed int) * CHAR_BIT, typeName);
    return setBitFieldSignedInt(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Int
static inline int getBitFieldInt(const int bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int) getBitFieldUnsignedInt(bitField, startPosition, endPosition); }
static inline int getBitFieldIntChecked(const int bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int) getBitFieldUnsignedInt(bitField, startPosition, endPosition);
}
static inline int getBitFieldIntCheckedCrash(const int bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int) * CHAR_BIT, typeName);
    return (int) getBitFieldUnsignedInt(bitField, startPosition, endPosition);
}
// Set Int
static inline int setBitFieldInt(const int bitField, const unsigned char startPosition, const unsigned char endPosition, const int bitFieldValue) { return (int) setBitFieldUnsignedInt(bitField, startPosition, endPosition, bitFieldValue); }
static inline int setBitFieldIntChecked(const int bitField, const unsigned char startPosition, const unsigned char endPosition, const int bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int) * CHAR_BIT, countBitsInt(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldSignedInt(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int setBitFieldIntCheckedCrash(const int bitField, const unsigned char startPosition, const unsigned char endPosition, const int bitFieldValue) {
    const char typeName[] = "int";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsInt(bitFieldValue), sizeof(int) * CHAR_BIT, typeName);
    return setBitFieldSignedInt(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Unsigned Long
static inline unsigned long getBitFieldUnsignedLong(unsigned long bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned long mask = ((1UL << (endPosition - startPosition + 1UL)) - 1UL) << startPosition;
    unsigned long result = (bitField & mask) >> startPosition;
    if ((result & (1UL << (endPosition - startPosition))) != 0UL) result |= ~((1UL << (endPosition - startPosition + 1UL)) - 1UL);
    return result;
}
static inline unsigned long getBitFieldUnsignedLongChecked(const unsigned long bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(unsigned long) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0UL;
    return getBitFieldUnsignedLong(bitField, startPosition, endPosition);
}
static inline unsigned long getBitFieldUnsignedLongCheckedCrash(const unsigned long bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "unsigned long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(unsigned long) * CHAR_BIT, typeName);
    return getBitFieldUnsignedLong(bitField, startPosition, endPosition);
}
// Set Unsigned Long
static inline unsigned long setBitFieldUnsignedLong(unsigned long bitField, unsigned char startPosition, unsigned char endPosition, unsigned long bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned long mask = ((1UL << (endPosition - startPosition + 1UL)) - 1UL) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline unsigned long setBitFieldUnsignedLongChecked(const unsigned long bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned long bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(unsigned long) * CHAR_BIT, countBitsUnsignedLong(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUnsignedLong(bitField, startPosition, endPosition, bitFieldValue);
}
static inline unsigned long setBitFieldUnsignedLongCheckedCrash(const unsigned long bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned long bitFieldValue) {
    const char typeName[] = "unsigned long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUnsignedLong(bitFieldValue), sizeof(unsigned long) * CHAR_BIT, typeName);
    return setBitFieldUnsignedLong(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Signed Long
static inline signed long getBitFieldSignedLong(const signed long bitField, const unsigned char startPosition, const unsigned char endPosition) { return (signed long) getBitFieldUnsignedLong(bitField, startPosition, endPosition); }
static inline signed long getBitFieldSignedLongChecked(const signed long bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(signed long) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0L;
    return (signed long) getBitFieldUnsignedLong(bitField, startPosition, endPosition);
}
static inline signed long getBitFieldSignedLongCheckedCrash(const signed long bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "signed long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(signed long) * CHAR_BIT, typeName);
    return (signed long) getBitFieldUnsignedLong(bitField, startPosition, endPosition);
}
// Set Signed Long
static inline signed long setBitFieldSignedLong(const signed long bitField, const unsigned char startPosition, const unsigned char endPosition, const signed long bitFieldValue) { return (signed long) setBitFieldUnsignedLong(bitField, startPosition, endPosition, bitFieldValue); }
static inline signed long setBitFieldSignedLongChecked(const signed long bitField, const unsigned char startPosition, const unsigned char endPosition, const signed long bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(signed long) * CHAR_BIT, countBitsSignedLong(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldSignedLong(bitField, startPosition, endPosition, bitFieldValue);
}
static inline signed long setBitFieldSignedLongCheckedCrash(const signed long bitField, const unsigned char startPosition, const unsigned char endPosition, const signed long bitFieldValue) {
    const char typeName[] = "signed long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsSignedLong(bitFieldValue), sizeof(signed long) * CHAR_BIT, typeName);
    return setBitFieldSignedLong(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Long
static inline long getBitFieldLong(const long bitField, const unsigned char startPosition, const unsigned char endPosition) { return (long) getBitFieldUnsignedLong(bitField, startPosition, endPosition); }
static inline long getBitFieldLongChecked(const long bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(long) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0L;
    return (long) getBitFieldUnsignedLong(bitField, startPosition, endPosition);
}
static inline long getBitFieldLongCheckedCrash(const long bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(long) * CHAR_BIT, typeName);
    return (long) getBitFieldUnsignedLong(bitField, startPosition, endPosition);
}
// Set Long
static inline long setBitFieldLong(const long bitField, const unsigned char startPosition, const unsigned char endPosition, const long bitFieldValue) { return (long) setBitFieldUnsignedLong(bitField, startPosition, endPosition, bitFieldValue); }
static inline long setBitFieldLongChecked(const long bitField, const unsigned char startPosition, const unsigned char endPosition, const long bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(long) * CHAR_BIT, countBitsLong(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldSignedLong(bitField, startPosition, endPosition, bitFieldValue);
}
static inline long setBitFieldLongCheckedCrash(const long bitField, const unsigned char startPosition, const unsigned char endPosition, const long bitFieldValue) {
    const char typeName[] = "long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsLong(bitFieldValue), sizeof(long) * CHAR_BIT, typeName);
    return setBitFieldSignedLong(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Unsigned Long Long
static inline unsigned long long getBitFieldUnsignedLongLong(unsigned long long bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned long long mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    unsigned long long result = (bitField & mask) >> startPosition;
    if ((result & (1ULL << (endPosition - startPosition))) != 0) result |= ~((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL);
    return result;
}
static inline unsigned long long getBitFieldUnsignedLongLongChecked(const unsigned long long bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(unsigned long long) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0ULL;
    return getBitFieldUnsignedLongLong(bitField, startPosition, endPosition);
}
static inline unsigned long long getBitFieldUnsignedLongLongCheckedCrash(const unsigned long long bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "unsigned long long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(unsigned long long) * CHAR_BIT, typeName);
    return getBitFieldUnsignedLongLong(bitField, startPosition, endPosition);
}
// Set Unsigned Long Long
static inline unsigned long long setBitFieldUnsignedLongLong(unsigned long long bitField, unsigned char startPosition, unsigned char endPosition, unsigned long long bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    unsigned long long mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline unsigned long long setBitFieldUnsignedLongLongChecked(const unsigned long long bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned long long bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(unsigned long long) * CHAR_BIT, countBitsUnsignedLongLong(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUnsignedLongLong(bitField, startPosition, endPosition, bitFieldValue);
}
static inline unsigned long long setBitFieldUnsignedLongLongCheckedCrash(const unsigned long long bitField, const unsigned char startPosition, const unsigned char endPosition, const unsigned long long bitFieldValue) {
    const char typeName[] = "unsigned long long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUnsignedLongLong(bitFieldValue), sizeof(unsigned long long) * CHAR_BIT, typeName);
    return setBitFieldUnsignedLongLong(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Signed Long Long
static inline signed long long getBitFieldSignedLongLong(const signed long long bitField, const unsigned char startPosition, const unsigned char endPosition) { return (signed long long) getBitFieldUnsignedLongLong(bitField, startPosition, endPosition); }
static inline signed long long getBitFieldSignedLongLongChecked(const signed long long bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(signed long long) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0LL;
    return (signed long long) getBitFieldUnsignedLongLong(bitField, startPosition, endPosition);
}
static inline signed long long getBitFieldSignedLongLongCheckedCrash(const signed long long bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "signed long long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(signed long long) * CHAR_BIT, typeName);
    return (signed long long) getBitFieldUnsignedLongLong(bitField, startPosition, endPosition);
}
// Set Signed Long Long
static inline signed long long setBitFieldSignedLongLong(const signed long long bitField, const unsigned char startPosition, const unsigned char endPosition, const signed long long bitFieldValue) { return (signed long long) setBitFieldUnsignedLongLong(bitField, startPosition, endPosition, bitFieldValue); }
static inline signed long long setBitFieldSignedLongLongChecked(const signed long long bitField, const unsigned char startPosition, const unsigned char endPosition, const signed long long bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(signed long long) * CHAR_BIT, countBitsSignedLongLong(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldSignedLongLong(bitField, startPosition, endPosition, bitFieldValue);
}
static inline signed long long setBitFieldSignedLongLongCheckedCrash(const signed long long bitField, const unsigned char startPosition, const unsigned char endPosition, const signed long long bitFieldValue) {
    const char typeName[] = "signed long long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsSignedLongLong(bitFieldValue), sizeof(signed long long) * CHAR_BIT, typeName);
    return setBitFieldSignedLongLong(bitField, startPosition, endPosition, bitFieldValue);
}
// Get Long Long
static inline long long getBitFieldLongLong(const long long bitField, const unsigned char startPosition, const unsigned char endPosition) { return (long long) getBitFieldUnsignedLongLong(bitField, startPosition, endPosition); }
static inline long long getBitFieldLongLongChecked(const long long bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(long long) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0LL;
    return (long long) getBitFieldUnsignedLongLong(bitField, startPosition, endPosition);
}
static inline long long getBitFieldLongLongCheckedCrash(const long long bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "long long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(long long) * CHAR_BIT, typeName);
    return (long long) getBitFieldUnsignedLongLong(bitField, startPosition, endPosition);
}
// Set Long Long
static inline long long setBitFieldLongLong(const long long bitField, const unsigned char startPosition, const unsigned char endPosition, const long long bitFieldValue) { return (long long) setBitFieldUnsignedLongLong(bitField, startPosition, endPosition, bitFieldValue); }
static inline long long setBitFieldLongLongChecked(const long long bitField, const unsigned char startPosition, const unsigned char endPosition, const long long bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(long long) * CHAR_BIT, countBitsLongLong(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldLongLong(bitField, startPosition, endPosition, bitFieldValue);
}
static inline long long setBitFieldLongLongCheckedCrash(const long long bitField, const unsigned char startPosition, const unsigned char endPosition, const long long bitFieldValue) {
    const char typeName[] = "long long";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsLongLong(bitFieldValue), sizeof(long long) * CHAR_BIT, typeName);
    return setBitFieldLongLong(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint8_t
static inline uint8_t getBitFieldUint8T(uint8_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint8_t mask = (uint8_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    uint8_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint8_t getBitFieldUint8TChecked(const uint8_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint8_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUint8T(bitField, startPosition, endPosition);
}
static inline uint8_t getBitFieldUint8TCheckedCrash(const uint8_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint8_t) * CHAR_BIT, typeName);
    return getBitFieldUint8T(bitField, startPosition, endPosition);
}
// Set uint8_t
static inline uint8_t setBitFieldUint8T(uint8_t bitField, unsigned char startPosition, unsigned char endPosition, uint8_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint8_t mask = (uint8_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint8_t setBitFieldUint8TChecked(const uint8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint8_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint8_t) * CHAR_BIT, countBitsUint8T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUint8T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint8_t setBitFieldUint8TCheckedCrash(const uint8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint8_t bitFieldValue) {
    const char typeName[] = "uint8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUint8T(bitFieldValue), sizeof(uint8_t) * CHAR_BIT, typeName);
    return setBitFieldUint8T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int8_t
static inline int8_t getBitFieldInt8T(const int8_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int8_t) getBitFieldUint8T(bitField, startPosition, endPosition); }
static inline int8_t getBitFieldInt8TChecked(const int8_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int8_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int8_t) getBitFieldUint8T(bitField, startPosition, endPosition);
}
static inline int8_t getBitFieldInt8TCheckedCrash(const int8_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int8_t) * CHAR_BIT, typeName);
    return (int8_t) getBitFieldUint8T(bitField, startPosition, endPosition);
}
// Set int8_t
static inline int8_t setBitFieldInt8T(const int8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int8_t bitFieldValue) { return (int8_t) setBitFieldUint8T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int8_t setBitFieldInt8TChecked(const int8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int8_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int8_t) * CHAR_BIT, countBitsInt8T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldInt8T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int8_t setBitFieldInt8TCheckedCrash(const int8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int8_t bitFieldValue) {
    const char typeName[] = "int8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsInt8T(bitFieldValue), sizeof(int8_t) * CHAR_BIT, typeName);
    return setBitFieldInt8T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint16_t
static inline uint16_t getBitFieldUint16T(uint16_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint16_t mask = (uint16_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    uint16_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint16_t getBitFieldUint16TChecked(const uint16_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint16_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUint16T(bitField, startPosition, endPosition);
}
static inline uint16_t getBitFieldUint16TCheckedCrash(const uint16_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint16_t) * CHAR_BIT, typeName);
    return getBitFieldUint16T(bitField, startPosition, endPosition);
}
// Set uint16_t
static inline uint16_t setBitFieldUint16T(uint16_t bitField, unsigned char startPosition, unsigned char endPosition, uint16_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint16_t mask = (uint16_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint16_t setBitFieldUint16TChecked(const uint16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint16_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint16_t) * CHAR_BIT, countBitsUint16T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUint16T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint16_t setBitFieldUint16TCheckedCrash(const uint16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint16_t bitFieldValue) {
    const char typeName[] = "uint16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUint16T(bitFieldValue), sizeof(uint16_t) * CHAR_BIT, typeName);
    return setBitFieldUint16T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int16_t
static inline int16_t getBitFieldInt16T(const int16_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int16_t) getBitFieldUint16T(bitField, startPosition, endPosition); }
static inline int16_t getBitFieldInt16TChecked(const int16_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int16_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int16_t) getBitFieldUint16T(bitField, startPosition, endPosition);
}
static inline int16_t getBitFieldInt16TCheckedCrash(const int16_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int16_t) * CHAR_BIT, typeName);
    return (int16_t) getBitFieldUint16T(bitField, startPosition, endPosition);
}
// Set int16_t
static inline int16_t setBitFieldInt16T(const int16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int16_t bitFieldValue) { return (int16_t) setBitFieldUint16T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int16_t setBitFieldInt16TChecked(const int16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int16_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int16_t) * CHAR_BIT, countBitsInt16T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldInt16T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int16_t setBitFieldInt16TCheckedCrash(const int16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int16_t bitFieldValue) {
    const char typeName[] = "int16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsInt16T(bitFieldValue), sizeof(int16_t) * CHAR_BIT, typeName);
    return setBitFieldInt16T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint32_t
static inline uint32_t getBitFieldUint32T(uint32_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint32_t mask = ((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition;
    uint32_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint32_t getBitFieldUint32TChecked(const uint32_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint32_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUint32T(bitField, startPosition, endPosition);
}
static inline uint32_t getBitFieldUint32TCheckedCrash(const uint32_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint32_t) * CHAR_BIT, typeName);
    return getBitFieldUint32T(bitField, startPosition, endPosition);
}
// Set uint32_t
static inline uint32_t setBitFieldUint32T(uint32_t bitField, unsigned char startPosition, unsigned char endPosition, uint32_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint32_t mask = ((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint32_t setBitFieldUint32TChecked(const uint32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint32_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint32_t) * CHAR_BIT, countBitsUint32T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUint32T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint32_t setBitFieldUint32TCheckedCrash(const uint32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint32_t bitFieldValue) {
    const char typeName[] = "uint32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUint32T(bitFieldValue), sizeof(uint32_t) * CHAR_BIT, typeName);
    return setBitFieldUint32T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int32_t
static inline int32_t getBitFieldInt32T(const int32_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int32_t) getBitFieldUint32T(bitField, startPosition, endPosition); }
static inline int32_t getBitFieldInt32TChecked(const int32_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int32_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int32_t) getBitFieldUint32T(bitField, startPosition, endPosition);
}
static inline int32_t getBitFieldInt32TCheckedCrash(const int32_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int32_t) * CHAR_BIT, typeName);
    return (int32_t) getBitFieldUint32T(bitField, startPosition, endPosition);
}
// Set int32_t
static inline int32_t setBitFieldInt32T(const int32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int32_t bitFieldValue) { return (int32_t) setBitFieldUint32T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int32_t setBitFieldInt32TChecked(const int32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int32_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int32_t) * CHAR_BIT, countBitsInt32T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldInt32T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int32_t setBitFieldInt32TCheckedCrash(const int32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int32_t bitFieldValue) {
    const char typeName[] = "int32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsInt32T(bitFieldValue), sizeof(int32_t) * CHAR_BIT, typeName);
    return setBitFieldInt32T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint64_t
static inline uint64_t getBitFieldUint64T(uint64_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint64_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    uint64_t result = (bitField & mask) >> startPosition;
    if ((result & (1ULL << (endPosition - startPosition))) != 0ULL) result |= ~((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL);
    return result;
}
static inline uint64_t getBitFieldUint64TChecked(const uint64_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint64_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0ULL;
    return getBitFieldUint64T(bitField, startPosition, endPosition);
}
static inline uint64_t getBitFieldUint64TCheckedCrash(const uint64_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint64_t) * CHAR_BIT, typeName);
    return getBitFieldUint64T(bitField, startPosition, endPosition);
}
// Set uint64_t
static inline uint64_t setBitFieldUint64T(uint64_t bitField, unsigned char startPosition, unsigned char endPosition, uint64_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint64_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint64_t setBitFieldUint64TChecked(const uint64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint64_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint64_t) * CHAR_BIT, countBitsUint64T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUint64T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint64_t setBitFieldUint64TCheckedCrash(const uint64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint64_t bitFieldValue) {
    const char typeName[] = "uint64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUint64T(bitFieldValue), sizeof(uint64_t) * CHAR_BIT, typeName);
    return setBitFieldUint64T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int64_t
static inline int64_t getBitFieldInt64T(const int64_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int64_t) getBitFieldUint64T(bitField, startPosition, endPosition); }
static inline int64_t getBitFieldInt64TChecked(const int64_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int64_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0LL;
    return (int64_t) getBitFieldUint64T(bitField, startPosition, endPosition);
}
static inline int64_t getBitFieldInt64TCheckedCrash(const int64_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int64_t) * CHAR_BIT, typeName);
    return (int64_t) getBitFieldUint64T(bitField, startPosition, endPosition);
}
// Set int64_t
static inline int64_t setBitFieldInt64T(const int64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int64_t bitFieldValue) { return (int64_t) setBitFieldUint64T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int64_t setBitFieldInt64TChecked(const int64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int64_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int64_t) * CHAR_BIT, countBitsInt64T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldInt64T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int64_t setBitFieldInt64TCheckedCrash(const int64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int64_t bitFieldValue) {
    const char typeName[] = "int64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsInt64T(bitFieldValue), sizeof(int64_t) * CHAR_BIT, typeName);
    return setBitFieldInt64T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint_fast8_t
static inline uint_fast8_t getBitFieldUintFast8T(uint_fast8_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_fast8_t mask = (uint_fast8_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    uint_fast8_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0U) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint_fast8_t getBitFieldUintFast8TChecked(const uint_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint_fast8_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUintFast8T(bitField, startPosition, endPosition);
}
static inline uint_fast8_t getBitFieldUintFast8TCheckedCrash(const uint_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint_fast8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint_fast8_t) * CHAR_BIT, typeName);
    return getBitFieldUintFast8T(bitField, startPosition, endPosition);
}
// Set uint_fast8_t
static inline uint_fast8_t setBitFieldUintFast8T(uint_fast8_t bitField, unsigned char startPosition, unsigned char endPosition, uint_fast8_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_fast8_t mask = (uint_fast8_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint_fast8_t setBitFieldUintFast8TChecked(const uint_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_fast8_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint_fast8_t) * CHAR_BIT, countBitsUintFast8T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintFast8T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint_fast8_t setBitFieldUintFast8TCheckedCrash(const uint_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_fast8_t bitFieldValue) {
    const char typeName[] = "uint_fast8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintFast8T(bitFieldValue), sizeof(uint_fast8_t) * CHAR_BIT, typeName);
    return setBitFieldUintFast8T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int_fast8_t
static inline int_fast8_t getBitFieldIntFast8T(const int_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int_fast8_t) getBitFieldUintFast8T(bitField, startPosition, endPosition); }
static inline int_fast8_t getBitFieldIntFast8TChecked(const int_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int_fast8_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int_fast8_t) getBitFieldUintFast8T(bitField, startPosition, endPosition);
}
static inline int_fast8_t getBitFieldIntFast8TCheckedCrash(const int_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int_fast8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int_fast8_t) * CHAR_BIT, typeName);
    return (int_fast8_t) getBitFieldUintFast8T(bitField, startPosition, endPosition);
}
// Set int_fast8_t
static inline int_fast8_t setBitFieldIntFast8T(const int_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast8_t bitFieldValue) { return (int_fast8_t) setBitFieldUintFast8T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int_fast8_t setBitFieldIntFast8TChecked(const int_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast8_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int_fast8_t) * CHAR_BIT, countBitsIntFast8T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntFast8T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int_fast8_t setBitFieldIntFast8TCheckedCrash(const int_fast8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast8_t bitFieldValue) {
    const char typeName[] = "int_fast8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntFast8T(bitFieldValue), sizeof(int_fast8_t) * CHAR_BIT, typeName);
    return setBitFieldIntFast8T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint_fast16_t
static inline uint_fast16_t getBitFieldUintFast16T(uint_fast16_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_fast16_t mask = (uint_fast16_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    uint_fast16_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0U) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint_fast16_t getBitFieldUintFast16TChecked(const uint_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint_fast16_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUintFast16T(bitField, startPosition, endPosition);
}
static inline uint_fast16_t getBitFieldUintFast16TCheckedCrash(const uint_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint_fast16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint_fast16_t) * CHAR_BIT, typeName);
    return getBitFieldUintFast16T(bitField, startPosition, endPosition);
}
// Set uint_fast16_t
static inline uint_fast16_t setBitFieldUintFast16T(uint_fast16_t bitField, unsigned char startPosition, unsigned char endPosition, uint_fast16_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_fast16_t mask = (uint_fast16_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint_fast16_t setBitFieldUintFast16TChecked(const uint_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_fast16_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint_fast16_t) * CHAR_BIT, countBitsUintFast16T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintFast16T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint_fast16_t setBitFieldUintFast16TCheckedCrash(const uint_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_fast16_t bitFieldValue) {
    const char typeName[] = "uint_fast16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintFast16T(bitFieldValue), sizeof(uint_fast16_t) * CHAR_BIT, typeName);
    return setBitFieldUintFast16T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int_fast16_t
static inline int_fast16_t getBitFieldIntFast16T(const int_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int_fast16_t) getBitFieldUintFast16T(bitField, startPosition, endPosition); }
static inline int_fast16_t getBitFieldIntFast16TChecked(const int_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int_fast16_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int_fast16_t) getBitFieldUintFast16T(bitField, startPosition, endPosition);
}
static inline int_fast16_t getBitFieldIntFast16TCheckedCrash(const int_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int_fast16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int_fast16_t) * CHAR_BIT, typeName);
    return (int_fast16_t) getBitFieldUintFast16T(bitField, startPosition, endPosition);
}
// Set int_fast16_t
static inline int_fast16_t setBitFieldIntFast16T(const int_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast16_t bitFieldValue) { return (int_fast16_t) setBitFieldUintFast16T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int_fast16_t setBitFieldIntFast16TChecked(const int_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast16_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int_fast16_t) * CHAR_BIT, countBitsIntFast16T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntFast16T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int_fast16_t setBitFieldIntFast16TCheckedCrash(const int_fast16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast16_t bitFieldValue) {
    const char typeName[] = "int_fast16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntFast16T(bitFieldValue), sizeof(int_fast16_t) * CHAR_BIT, typeName);
    return setBitFieldIntFast16T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint_fast32_t
static inline uint_fast32_t getBitFieldUintFast32T(uint_fast32_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_fast32_t mask = ((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition;
    uint_fast32_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint_fast32_t getBitFieldUintFast32TChecked(const uint_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint_fast32_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUintFast32T(bitField, startPosition, endPosition);
}
static inline uint_fast32_t getBitFieldUintFast32TCheckedCrash(const uint_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint_fast32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint_fast32_t) * CHAR_BIT, typeName);
    return getBitFieldUintFast32T(bitField, startPosition, endPosition);
}
// Set uint_fast32_t
static inline uint_fast32_t setBitFieldUintFast32T(uint_fast32_t bitField, unsigned char startPosition, unsigned char endPosition, uint_fast32_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_fast32_t mask = ((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint_fast32_t setBitFieldUintFast32TChecked(const uint_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_fast32_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint_fast32_t) * CHAR_BIT, countBitsUintFast32T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintFast32T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint_fast32_t setBitFieldUintFast32TCheckedCrash(const uint_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_fast32_t bitFieldValue) {
    const char typeName[] = "uint_fast32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintFast32T(bitFieldValue), sizeof(uint_fast32_t) * CHAR_BIT, typeName);
    return setBitFieldUintFast32T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int_fast32_t
static inline int_fast32_t getBitFieldIntFast32T(const int_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int_fast32_t) getBitFieldUintFast32T(bitField, startPosition, endPosition); }
static inline int_fast32_t getBitFieldIntFast32TChecked(const int_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int_fast32_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int_fast32_t) getBitFieldUintFast32T(bitField, startPosition, endPosition);
}
static inline int_fast32_t getBitFieldIntFast32TCheckedCrash(const int_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int_fast32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int_fast32_t) * CHAR_BIT, typeName);
    return (int_fast32_t) getBitFieldUintFast32T(bitField, startPosition, endPosition);
}
// Set int_fast32_t
static inline int_fast32_t setBitFieldIntFast32T(const int_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast32_t bitFieldValue) { return (int_fast32_t) setBitFieldUintFast32T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int_fast32_t setBitFieldIntFast32TChecked(const int_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast32_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int_fast32_t) * CHAR_BIT, countBitsIntFast32T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntFast32T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int_fast32_t setBitFieldIntFast32TCheckedCrash(const int_fast32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast32_t bitFieldValue) {
    const char typeName[] = "int_fast32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntFast32T(bitFieldValue), sizeof(int_fast32_t) * CHAR_BIT, typeName);
    return setBitFieldIntFast32T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint_fast64_t
static inline uint_fast64_t getBitFieldUintFast64T(uint_fast64_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_fast64_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    uint_fast64_t result = (bitField & mask) >> startPosition;
    if ((result & (1ULL << (endPosition - startPosition))) != 0) result |= ~((1ULL << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint_fast64_t getBitFieldUintFast64TChecked(const uint_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint_fast64_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0ULL;
    return getBitFieldUintFast64T(bitField, startPosition, endPosition);
}
static inline uint_fast64_t getBitFieldUintFast64TCheckedCrash(const uint_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint_fast64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint_fast64_t) * CHAR_BIT, typeName);
    return getBitFieldUintFast64T(bitField, startPosition, endPosition);
}
// Set uint_fast64_t
static inline uint_fast64_t setBitFieldUintFast64T(uint_fast64_t bitField, unsigned char startPosition, unsigned char endPosition, uint_fast64_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_fast64_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint_fast64_t setBitFieldUintFast64TChecked(const uint_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_fast64_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint_fast64_t) * CHAR_BIT, countBitsUintFast64T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintFast64T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint_fast64_t setBitFieldUintFast64TCheckedCrash(const uint_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_fast64_t bitFieldValue) {
    const char typeName[] = "uint_fast64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintFast64T(bitFieldValue), sizeof(uint_fast64_t) * CHAR_BIT, typeName);
    return setBitFieldUintFast64T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int_fast64_t
static inline int_fast64_t getBitFieldIntFast64T(const int_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int_fast64_t) getBitFieldUintFast64T(bitField, startPosition, endPosition); }
static inline int_fast64_t getBitFieldIntFast64TChecked(const int_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int_fast64_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0LL;
    return (int_fast64_t) getBitFieldUintFast64T(bitField, startPosition, endPosition);
}
static inline int_fast64_t getBitFieldIntFast64TCheckedCrash(const int_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int_fast64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int_fast64_t) * CHAR_BIT, typeName);
    return (int_fast64_t) getBitFieldUintFast64T(bitField, startPosition, endPosition);
}
// Set int_fast64_t
static inline int_fast64_t setBitFieldIntFast64T(const int_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast64_t bitFieldValue) { return (int_fast64_t) setBitFieldUintFast64T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int_fast64_t setBitFieldIntFast64TChecked(const int_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast64_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int_fast64_t) * CHAR_BIT, countBitsIntFast64T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntFast64T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int_fast64_t setBitFieldIntFast64TCheckedCrash(const int_fast64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_fast64_t bitFieldValue) {
    const char typeName[] = "int_fast64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntFast64T(bitFieldValue), sizeof(int_fast64_t) * CHAR_BIT, typeName);
    return setBitFieldIntFast64T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint_least8_t
static inline uint_least8_t getBitFieldUintLeast8T(uint_least8_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_least8_t mask = (uint_least8_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    uint_least8_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0U) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint_least8_t getBitFieldUintLeast8TChecked(const uint_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint_least8_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUintLeast8T(bitField, startPosition, endPosition);
}
static inline uint_least8_t getBitFieldUintLeast8TCheckedCrash(const uint_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint_least8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint_least8_t) * CHAR_BIT, typeName);
    return getBitFieldUintLeast8T(bitField, startPosition, endPosition);
}
// Set uint_least8_t
static inline uint_least8_t setBitFieldUintLeast8T(uint_least8_t bitField, unsigned char startPosition, unsigned char endPosition, uint_least8_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_least8_t mask = (uint_least8_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint_least8_t setBitFieldUintLeast8TChecked(const uint_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_least8_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint_least8_t) * CHAR_BIT, countBitsUintLeast8T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintLeast8T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint_least8_t setBitFieldUintLeast8TCheckedCrash(const uint_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_least8_t bitFieldValue) {
    const char typeName[] = "uint_least8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintLeast8T(bitFieldValue), sizeof(uint_least8_t) * CHAR_BIT, typeName);
    return setBitFieldUintLeast8T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int_least8_t
static inline int_least8_t getBitFieldIntLeast8T(const int_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int_least8_t) getBitFieldUintLeast8T(bitField, startPosition, endPosition); }
static inline int_least8_t getBitFieldIntLeast8TChecked(const int_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int_least8_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int_least8_t) getBitFieldUintLeast8T(bitField, startPosition, endPosition);
}
static inline int_least8_t getBitFieldIntLeast8TCheckedCrash(const int_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int_least8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int_least8_t) * CHAR_BIT, typeName);
    return (int_least8_t) getBitFieldUintLeast8T(bitField, startPosition, endPosition);
}
// Set int_least8_t
static inline int_least8_t setBitFieldIntLeast8T(const int_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least8_t bitFieldValue) { return (int_least8_t) setBitFieldUintLeast8T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int_least8_t setBitFieldIntLeast8TChecked(const int_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least8_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int_least8_t) * CHAR_BIT, countBitsIntLeast8T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntLeast8T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int_least8_t setBitFieldIntLeast8TCheckedCrash(const int_least8_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least8_t bitFieldValue) {
    const char typeName[] = "int_least8_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntLeast8T(bitFieldValue), sizeof(int_least8_t) * CHAR_BIT, typeName);
    return setBitFieldIntLeast8T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint_least16_t
static inline uint_least16_t getBitFieldUintLeast16T(uint_least16_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_least16_t mask = (uint_least16_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    uint_least16_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0U) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint_least16_t getBitFieldUintLeast16TChecked(const uint_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint_least16_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUintLeast16T(bitField, startPosition, endPosition);
}
static inline uint_least16_t getBitFieldUintLeast16TCheckedCrash(const uint_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint_least16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint_least16_t) * CHAR_BIT, typeName);
    return getBitFieldUintLeast16T(bitField, startPosition, endPosition);
}
// Set uint_least16_t
static inline uint_least16_t setBitFieldUintLeast16T(uint_least16_t bitField, unsigned char startPosition, unsigned char endPosition, uint_least16_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_least16_t mask = (uint_least16_t) (((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition);
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint_least16_t setBitFieldUintLeast16TChecked(const uint_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_least16_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint_least16_t) * CHAR_BIT, countBitsUintLeast16T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintLeast16T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint_least16_t setBitFieldUintLeast16TCheckedCrash(const uint_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_least16_t bitFieldValue) {
    const char typeName[] = "uint_least16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintLeast16T(bitFieldValue), sizeof(uint_least16_t) * CHAR_BIT, typeName);
    return setBitFieldUintLeast16T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int_least16_t
static inline int_least16_t getBitFieldIntLeast16T(const int_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int_least16_t) getBitFieldUintLeast16T(bitField, startPosition, endPosition); }
static inline int_least16_t getBitFieldIntLeast16TChecked(const int_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int_least16_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int_least16_t) getBitFieldUintLeast16T(bitField, startPosition, endPosition);
}
static inline int_least16_t getBitFieldIntLeast16TCheckedCrash(const int_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int_least16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int_least16_t) * CHAR_BIT, typeName);
    return (int_least16_t) getBitFieldUintLeast16T(bitField, startPosition, endPosition);
}
// Set int_least16_t
static inline int_least16_t setBitFieldIntLeast16T(const int_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least16_t bitFieldValue) { return (int_least16_t) setBitFieldUintLeast16T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int_least16_t setBitFieldIntLeast16TChecked(const int_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least16_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int_least16_t) * CHAR_BIT, countBitsIntLeast16T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntLeast16T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int_least16_t setBitFieldIntLeast16TCheckedCrash(const int_least16_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least16_t bitFieldValue) {
    const char typeName[] = "int_least16_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntLeast16T(bitFieldValue), sizeof(int_least16_t) * CHAR_BIT, typeName);
    return setBitFieldIntLeast16T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint_least32_t
static inline uint_least32_t getBitFieldUintLeast32T(uint_least32_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_least32_t mask = ((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition;
    uint_least32_t result = (bitField & mask) >> startPosition;
    if ((result & (1U << (endPosition - startPosition))) != 0U) result |= ~((1U << (endPosition - startPosition + 1U)) - 1U);
    return result;
}
static inline uint_least32_t getBitFieldUintLeast32TChecked(const uint_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint_least32_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0U;
    return getBitFieldUintLeast32T(bitField, startPosition, endPosition);
}
static inline uint_least32_t getBitFieldUintLeast32TCheckedCrash(const uint_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint_least32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint_least32_t) * CHAR_BIT, typeName);
    return getBitFieldUintLeast32T(bitField, startPosition, endPosition);
}
// Set uint_least32_t
static inline uint_least32_t setBitFieldUintLeast32T(uint_least32_t bitField, unsigned char startPosition, unsigned char endPosition, uint_least32_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_least32_t mask = ((1U << (endPosition - startPosition + 1U)) - 1U) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint_least32_t setBitFieldUintLeast32TChecked(const uint_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_least32_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint_least32_t) * CHAR_BIT, countBitsUintLeast32T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintLeast32T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint_least32_t setBitFieldUintLeast32TCheckedCrash(const uint_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_least32_t bitFieldValue) {
    const char typeName[] = "uint_least32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintLeast32T(bitFieldValue), sizeof(uint_least32_t) * CHAR_BIT, typeName);
    return setBitFieldUintLeast32T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int_least32_t
static inline int_least32_t getBitFieldIntLeast32T(const int_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int_least32_t) getBitFieldUintLeast32T(bitField, startPosition, endPosition); }
static inline int_least32_t getBitFieldIntLeast32TChecked(const int_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int_least32_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0;
    return (int_least32_t) getBitFieldUintLeast32T(bitField, startPosition, endPosition);
}
static inline int_least32_t getBitFieldIntLeast32TCheckedCrash(const int_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int_least32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int_least32_t) * CHAR_BIT, typeName);
    return (int_least32_t) getBitFieldUintLeast32T(bitField, startPosition, endPosition);
}
// Set int_least32_t
static inline int_least32_t setBitFieldIntLeast32T(const int_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least32_t bitFieldValue) { return (int_least32_t) setBitFieldUintLeast32T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int_least32_t setBitFieldIntLeast32TChecked(const int_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least32_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int_least32_t) * CHAR_BIT, countBitsIntLeast32T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntLeast32T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int_least32_t setBitFieldIntLeast32TCheckedCrash(const int_least32_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least32_t bitFieldValue) {
    const char typeName[] = "int_least32_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntLeast32T(bitFieldValue), sizeof(int_least32_t) * CHAR_BIT, typeName);
    return setBitFieldIntLeast32T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uint_least64_t
static inline uint_least64_t getBitFieldUintLeast64T(uint_least64_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_least64_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    uint_least64_t result = (bitField & mask) >> startPosition;
    if ((result & (1ULL << (endPosition - startPosition))) != 0ULL) result |= ~((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL);
    return result;
}
static inline uint_least64_t getBitFieldUintLeast64TChecked(const uint_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uint_least64_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0ULL;
    return getBitFieldUintLeast64T(bitField, startPosition, endPosition);
}
static inline uint_least64_t getBitFieldUintLeast64TCheckedCrash(const uint_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uint_least64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uint_least64_t) * CHAR_BIT, typeName);
    return getBitFieldUintLeast64T(bitField, startPosition, endPosition);
}
// Set uint_least64_t
static inline uint_least64_t setBitFieldUintLeast64T(uint_least64_t bitField, unsigned char startPosition, unsigned char endPosition, uint_least64_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uint_least64_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uint_least64_t setBitFieldUintLeast64TChecked(const uint_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_least64_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uint_least64_t) * CHAR_BIT, countBitsUintLeast64T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintLeast64T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uint_least64_t setBitFieldUintLeast64TCheckedCrash(const uint_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uint_least64_t bitFieldValue) {
    const char typeName[] = "uint_least64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintLeast64T(bitFieldValue), sizeof(uint_least64_t) * CHAR_BIT, typeName);
    return setBitFieldUintLeast64T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get int_least64_t
static inline int_least64_t getBitFieldIntLeast64T(const int_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (int_least64_t) getBitFieldUintLeast64T(bitField, startPosition, endPosition); }
static inline int_least64_t getBitFieldIntLeast64TChecked(const int_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(int_least64_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0LL;
    return (int_least64_t) getBitFieldUintLeast64T(bitField, startPosition, endPosition);
}
static inline int_least64_t getBitFieldIntLeast64TCheckedCrash(const int_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "int_least64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(int_least64_t) * CHAR_BIT, typeName);
    return (int_least64_t) getBitFieldUintLeast64T(bitField, startPosition, endPosition);
}
// Set int_least64_t
static inline int_least64_t setBitFieldIntLeast64T(const int_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least64_t bitFieldValue) { return (int_least64_t) setBitFieldUintLeast64T(bitField, startPosition, endPosition, bitFieldValue); }
static inline int_least64_t setBitFieldIntLeast64TChecked(const int_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least64_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(int_least64_t) * CHAR_BIT, countBitsIntLeast64T(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntLeast64T(bitField, startPosition, endPosition, bitFieldValue);
}
static inline int_least64_t setBitFieldIntLeast64TCheckedCrash(const int_least64_t bitField, const unsigned char startPosition, const unsigned char endPosition, const int_least64_t bitFieldValue) {
    const char typeName[] = "int_least64_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntLeast64T(bitFieldValue), sizeof(int_least64_t) * CHAR_BIT, typeName);
    return setBitFieldIntLeast64T(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uintmax_t
static inline uintmax_t getBitFieldUintMaxT(uintmax_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uintmax_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    uintmax_t result = (bitField & mask) >> startPosition;
    if ((result & (1ULL << (endPosition - startPosition))) != 0ULL) result |= ~((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL);
    return result;
}
static inline uintmax_t getBitFieldUintMaxTChecked(const uintmax_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uintmax_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0ULL;
    return getBitFieldUintMaxT(bitField, startPosition, endPosition);
}
static inline uintmax_t getBitFieldUintMaxTCheckedCrash(const uintmax_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uintmax_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uintmax_t) * CHAR_BIT, typeName);
    return getBitFieldUintMaxT(bitField, startPosition, endPosition);
}
// Set uintmax_t
static inline uintmax_t setBitFieldUintMaxT(uintmax_t bitField, unsigned char startPosition, unsigned char endPosition, uintmax_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uintmax_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uintmax_t setBitFieldUintMaxTChecked(const uintmax_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uintmax_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uintmax_t) * CHAR_BIT, countBitsUintMaxT(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintMaxT(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uintmax_t setBitFieldUintMaxTCheckedCrash(const uintmax_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uintmax_t bitFieldValue) {
    const char typeName[] = "uintmax_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintMaxT(bitFieldValue), sizeof(uintmax_t) * CHAR_BIT, typeName);
    return setBitFieldUintMaxT(bitField, startPosition, endPosition, bitFieldValue);
}
// Get intmax_t
static inline intmax_t getBitFieldIntMaxT(const intmax_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (intmax_t) getBitFieldUintMaxT(bitField, startPosition, endPosition); }
static inline intmax_t getBitFieldIntMaxTChecked(const intmax_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(intmax_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0LL;
    return (intmax_t) getBitFieldUintMaxT(bitField, startPosition, endPosition);
}
static inline intmax_t getBitFieldIntMaxTCheckedCrash(const intmax_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "intmax_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(intmax_t) * CHAR_BIT, typeName);
    return (intmax_t) getBitFieldUintMaxT(bitField, startPosition, endPosition);
}
// Set intmax_t
static inline intmax_t setBitFieldIntMaxT(const intmax_t bitField, const unsigned char startPosition, const unsigned char endPosition, const intmax_t bitFieldValue) { return (intmax_t) setBitFieldUintMaxT(bitField, startPosition, endPosition, bitFieldValue); }
static inline intmax_t setBitFieldIntMaxTChecked(const intmax_t bitField, const unsigned char startPosition, const unsigned char endPosition, const intmax_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(intmax_t) * CHAR_BIT, countBitsIntMaxT(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntMaxT(bitField, startPosition, endPosition, bitFieldValue);
}
static inline intmax_t setBitFieldIntMaxTCheckedCrash(const intmax_t bitField, const unsigned char startPosition, const unsigned char endPosition, const intmax_t bitFieldValue) {
    const char typeName[] = "intmax_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntMaxT(bitFieldValue), sizeof(intmax_t) * CHAR_BIT, typeName);
    return setBitFieldIntMaxT(bitField, startPosition, endPosition, bitFieldValue);
}
// Get uintptr_t
static inline uintptr_t getBitFieldUintPtrT(uintptr_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uintptr_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    uintptr_t result = (bitField & mask) >> startPosition;
    if ((result & (1ULL << (endPosition - startPosition))) != 0ULL) result |= ~((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL);
    return result;
}
static inline uintptr_t getBitFieldUintPtrTChecked(const uintptr_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(uintptr_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0ULL;
    return getBitFieldUintPtrT(bitField, startPosition, endPosition);
}
static inline uintptr_t getBitFieldUintPtrTCheckedCrash(const uintptr_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "uintptr_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(uintptr_t) * CHAR_BIT, typeName);
    return getBitFieldUintPtrT(bitField, startPosition, endPosition);
}
// Set uintptr_t
static inline uintptr_t setBitFieldUintPtrT(uintptr_t bitField, unsigned char startPosition, unsigned char endPosition, uintptr_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    uintptr_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline uintptr_t setBitFieldUintPtrTChecked(const uintptr_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uintptr_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(uintptr_t) * CHAR_BIT, countBitsUintPtrT(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldUintPtrT(bitField, startPosition, endPosition, bitFieldValue);
}
static inline uintptr_t setBitFieldUintPtrTCheckedCrash(const uintptr_t bitField, const unsigned char startPosition, const unsigned char endPosition, const uintptr_t bitFieldValue) {
    const char typeName[] = "uintptr_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsUintPtrT(bitFieldValue), sizeof(uintptr_t) * CHAR_BIT, typeName);
    return setBitFieldUintPtrT(bitField, startPosition, endPosition, bitFieldValue);
}
// Get intptr_t
static inline intptr_t getBitFieldIntPtrT(const intptr_t bitField, const unsigned char startPosition, const unsigned char endPosition) { return (intptr_t) getBitFieldUintPtrT(bitField, startPosition, endPosition); }
static inline intptr_t getBitFieldIntPtrTChecked(const intptr_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(intptr_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0LL;
    return (intptr_t) getBitFieldUintPtrT(bitField, startPosition, endPosition);
}
static inline intptr_t getBitFieldIntPtrTCheckedCrash(const intptr_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "intptr_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(intptr_t) * CHAR_BIT, typeName);
    return (intptr_t) getBitFieldUintPtrT(bitField, startPosition, endPosition);
}
// Set intptr_t
static inline intptr_t setBitFieldIntPtrT(const intptr_t bitField, const unsigned char startPosition, const unsigned char endPosition, const intptr_t bitFieldValue) { return (intptr_t) setBitFieldUintPtrT(bitField, startPosition, endPosition, bitFieldValue); }
static inline intptr_t setBitFieldIntPtrTChecked(const intptr_t bitField, const unsigned char startPosition, const unsigned char endPosition, const intptr_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(intptr_t) * CHAR_BIT, countBitsIntPtrT(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldIntPtrT(bitField, startPosition, endPosition, bitFieldValue);
}
static inline intptr_t setBitFieldIntPtrTCheckedCrash(const intptr_t bitField, const unsigned char startPosition, const unsigned char endPosition, const intptr_t bitFieldValue) {
    const char typeName[] = "intptr_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsIntPtrT(bitFieldValue), sizeof(intptr_t) * CHAR_BIT, typeName);
    return setBitFieldIntPtrT(bitField, startPosition, endPosition, bitFieldValue);
}
// Get size_t
static inline size_t getBitFieldSizeT(size_t bitField, unsigned char startPosition, unsigned char endPosition) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    size_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    size_t result = (bitField & mask) >> startPosition;
    if ((result & (1ULL << (endPosition - startPosition))) != 0ULL) result |= ~((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL);
    return result;
}
static inline size_t getBitFieldSizeTChecked(const size_t bitField, const unsigned char startPosition, const unsigned char endPosition, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForGet(startPosition, endPosition, sizeof(size_t) * CHAR_BIT, isStartPositionInBounds, isEndPositionInBounds)) return 0ULL;
    return getBitFieldSizeT(bitField, startPosition, endPosition);
}
static inline size_t getBitFieldSizeTCheckedCrash(const size_t bitField, const unsigned char startPosition, const unsigned char endPosition) {
    const char typeName[] = "size_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForGet(startPosition, endPosition, sizeof(size_t) * CHAR_BIT, typeName);
    return getBitFieldSizeT(bitField, startPosition, endPosition);
}
// Set size_t
static inline size_t setBitFieldSizeT(size_t bitField, unsigned char startPosition, unsigned char endPosition, size_t bitFieldValue) {
    if(startPosition > endPosition) startPosition ^= endPosition, endPosition ^= startPosition, startPosition ^= endPosition;
    size_t mask = ((1ULL << (endPosition - startPosition + 1ULL)) - 1ULL) << startPosition;
    bitField &= ~mask;
    bitFieldValue = (bitFieldValue << startPosition) & mask;
    bitField |= bitFieldValue;
    return bitField;
}
static inline size_t setBitFieldSizeTChecked(const size_t bitField, const unsigned char startPosition, const unsigned char endPosition, const size_t bitFieldValue, bool *restrict const bitFieldValueStaysWithinTheBitLimit, bool *restrict const isStartPositionInBounds, bool *restrict const isEndPositionInBounds) {
    if (hasErrorForSet(startPosition, endPosition, sizeof(size_t) * CHAR_BIT, countBitsSizeT(bitFieldValue), bitFieldValueStaysWithinTheBitLimit, isStartPositionInBounds, isEndPositionInBounds)) return bitField;
    return setBitFieldSizeT(bitField, startPosition, endPosition, bitFieldValue);
}
static inline size_t setBitFieldSizeTCheckedCrash(const size_t bitField, const unsigned char startPosition, const unsigned char endPosition, const size_t bitFieldValue) {
    const char typeName[] = "size_t";
    crashIfOutOfBoundsOrIfBitFieldValueIsTooLargeForSet(startPosition, endPosition, countBitsSizeT(bitFieldValue), sizeof(size_t) * CHAR_BIT, typeName);
    return setBitFieldSizeT(bitField, startPosition, endPosition, bitFieldValue);
}
#endif //SMUSHYTACO_GET_SET_BIT_FIELD_H
