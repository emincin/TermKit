#include "Common.hpp"
#include "JSBind.hpp"
#include "Terminal.hpp"

using namespace TermKit;

function testRawMode() {
    let ok = false;
    ok = Terminal::enableRawMode();
    while (true) {
    }
    ok = Terminal::disableRawMode();
}

function parseArgs(int argc, char** argv) {
    if (argc <= 0) {
        return;
    }
    if (argc == 1) {
    } else if (argc == 2) {
    } else if (argc == 3) {
    }
}

int main(int argc, char** argv) {
    parseArgs(argc, argv);
    return 0;
}
