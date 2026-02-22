#ifndef TERMKIT_JSBIND_HPP
#define TERMKIT_JSBIND_HPP

#include "quickjs.h"

namespace TermKit {

class JSBind {
public:
    JSBind();
    ~JSBind();

private:
    JSContext* context;
    JSRuntime* runtime;
};

} // namespace TermKit

#endif
