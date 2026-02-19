#ifndef TERMKIT_TERMINAL_HPP
#define TERMKIT_TERMINAL_HPP

#include "Common.hpp"

namespace TermKit {

class Terminal {
public:
    static function enableRawMode() -> bool;
    static function disableRawMode() -> bool;
};

} // namespace TermKit

#endif
