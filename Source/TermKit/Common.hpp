#ifndef TERMKIT_COMMON_HPP
#define TERMKIT_COMMON_HPP

#if defined(__APPLE__) && defined(__MACH__)
#define IS_MACOS 1
#endif

#if defined(IS_LINUX) || defined(IS_MACOS)
#define IS_POSIX 1
#endif

#define function auto
#define let auto

#endif
