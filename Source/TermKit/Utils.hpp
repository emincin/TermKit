#ifndef TERMKIT_UTILS_HPP
#define TERMKIT_UTILS_HPP

#include "Common.hpp"

namespace TermKit {

class Utils {
public:
    Utils() = delete;
    static function isPrintableChar(char c) -> bool;
};

} // namespace TermKit

#endif
