#include <fmt/format.h>

namespace lmt {

int func() {
    fmt::print("lmt::func()\n");
    return 1;
}

} // namespace lmt

int main() {
    int rc = lmt::func();

    // access function under old namespace
    namespace sls = lmt;
    rc = sls::func();
}
