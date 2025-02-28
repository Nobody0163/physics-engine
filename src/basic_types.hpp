#pragma once

#include <cstdint>

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef float  f32;
typedef double f64;

static_assert(sizeof(u8) == 1, "u8 isn't 1 byte")
static_assert(sizeof(u16) == 2, "u16 isn't 2 bytes")
static_assert(sizeof(u32) == 4, "u32 isn't 4 bytes")
static_assert(sizeof(u64) == 8, "u64 isn't 8 bytes")
static_assert(sizeof(i8) == 1, "i8 isn't 1 byte")
static_assert(sizeof(i16) == 2, "i16 isn't 2 bytes")
static_assert(sizeof(i32) == 4, "i32 isn't 4 bytes")
static_assert(sizeof(i64) == 8, "i64 isn't 8 bytes")
static_assert(sizeof(f32) == 4, "f32 isn't 4 bytes")
static_assert(sizeof(f64) == 8, "f64 isn't 8 bytes")
