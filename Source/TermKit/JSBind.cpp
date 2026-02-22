#include "JSBind.hpp"

namespace TermKit {

JSBind::JSBind() {
    runtime = JS_NewRuntime();
    context = JS_NewContext(runtime);
}

JSBind::~JSBind() {
    JS_FreeContext(context);
    JS_FreeRuntime(runtime);
}

} // namespace TermKit
