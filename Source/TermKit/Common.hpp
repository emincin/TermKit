#ifndef TERMKIT_COMMON_HPP
#define TERMKIT_COMMON_HPP

#include <cstdint>
#include <string>
#include <string_view>

#if defined(__APPLE__) && defined(__MACH__)
#define IS_MACOS 1
#endif

#if defined(IS_LINUX) || defined(IS_MACOS)
#define IS_POSIX 1
#endif

#define function auto
#define let auto

using i8 = std::int8_t;
using u8 = std::uint8_t;

using i16 = std::int16_t;
using u16 = std::uint16_t;

using i32 = std::int32_t;
using u32 = std::uint32_t;

using i64 = std::int64_t;
using u64 = std::uint64_t;

using isize = std::intptr_t;
using usize = std::uintptr_t;

using String = std::string;
using StringView = std::string_view;

#endif
