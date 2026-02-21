#include "Terminal.hpp"

#if defined(IS_POSIX)
#include <termios.h>
#include <unistd.h>
#endif

namespace TermKit {

function Terminal::enableRawMode() -> bool {
#if defined(IS_POSIX)
    int ret = 0;
    struct termios io = {0};
    ret = tcgetattr(STDIN_FILENO, &io);
    ret = tcsetattr(STDIN_FILENO, TCSANOW, &io);
    return true;
#endif
    return false;
}

function Terminal::disableRawMode() -> bool {
#if defined(IS_POSIX)
    int ret = 0;
    struct termios io = {0};
    ret = tcgetattr(STDIN_FILENO, &io);
    ret = tcsetattr(STDIN_FILENO, TCSANOW, &io);
    return true;
#endif
    return false;
}

function Terminal::read(char* s, usize n) -> isize {
#if defined(IS_POSIX)
    ssize_t number = ::read(STDIN_FILENO, s, n);
    return number;
#endif
    return 0;
}

function Terminal::write(const char* s, usize n) -> isize {
#if defined(IS_POSIX)
    ssize_t number = ::write(STDOUT_FILENO, s, n);
    return number;
#endif
    return 0;
}

function Terminal::write(StringView sv) -> isize {
    return Terminal::write(sv.data(), sv.size());
}

} // namespace TermKit
