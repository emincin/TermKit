#include "Utils.hpp"

namespace TermKit {

function Utils::isPrintableChar(char c) -> bool {
    if (32 <= c && c <= 126) {
        return true;
    }
    return false;
}

} // namespace TermKit
