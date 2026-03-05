#include "Common.hpp"
#include "JSBind.hpp"
#include "Terminal.hpp"
#include "Utils.hpp"
#include <format>

using namespace TermKit;

namespace {

function testRawMode() {
    let ok = false;
    ok = Terminal::enableRawMode();
    let msg = std::format("Raw Mode: {}", ok);
    Terminal::writeLine(msg);
    while (true) {
        let s = Terminal::read(1024);
        for (char c : s) {
            if (Utils::isPrintableChar(c)) {
                let str = String(1, c);
                Terminal::write(str);
            } else {
                let str = std::to_string(c);
                Terminal::write(str);
            }
        }
    }
    ok = Terminal::disableRawMode();
}

function parseArgs(int argc, char** argv) {
    if (argc <= 0) {
        return;
    }
    if (argc == 1) {
        testRawMode();
    } else if (argc == 2) {
    } else if (argc == 3) {
    }
}

} // namespace

int main(int argc, char** argv) {
    parseArgs(argc, argv);
    return 0;
}
