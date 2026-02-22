#ifndef TERMKIT_TERMINAL_HPP
#define TERMKIT_TERMINAL_HPP

#include "Common.hpp"

namespace TermKit {

class Terminal {
public:
    Terminal() = delete;
    static function enableRawMode() -> bool;
    static function disableRawMode() -> bool;
    static function read(char* s, usize n) -> isize;
    static function write(const char* s, usize n) -> isize;
    static function write(StringView sv) -> isize;
};

} // namespace TermKit

#endif
