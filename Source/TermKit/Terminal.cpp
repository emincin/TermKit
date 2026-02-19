#include "Terminal.hpp"
#if defined(IS_POSIX)
#include <termios.h>
#include <unistd.h>
#endif

namespace TermKit {

function Terminal::enableRawMode() -> bool {
#if defined(IS_POSIX)
    return true;
#endif
    return false;
}

function Terminal::disableRawMode() -> bool {
#if defined(IS_POSIX)
    return true;
#endif
    return false;
}

} // namespace TermKit
