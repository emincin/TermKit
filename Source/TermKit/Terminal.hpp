#ifndef TERMKIT_TERMINAL_HPP
#define TERMKIT_TERMINAL_HPP

#include "Common.hpp"

namespace TermKit {

class Terminal {
public:
    static function enableRawMode() -> bool;
};

} // namespace TermKit

#endif
