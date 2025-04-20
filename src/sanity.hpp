#ifndef SANITY
#define SANITY
#include <iostream>

// https://stackoverflow.com/questions/48426484/concise-way-to-disable-specific-warning-instances-in-clang
// NOTE: don't fucking use this unless it's for things like "unused #include" (and you're really sure you want to include that file)
#define DO_PRAGMA(x) _Pragma(#x)
#define NOWARN(warnoption, ...)                    \
    DO_PRAGMA(GCC diagnostic push)                 \
    DO_PRAGMA(GCC diagnostic ignored #warnoption)  \
    __VA_ARGS__                                    \
    DO_PRAGMA(GCC diagnostic pop)

#define PRINTERR_INLINE(thing) std::cerr << "[ERROR]    " << thing << std::endl
#define PRINTERR(thing) PRINTERR_INLINE(thing);
#define PRINTNOTE(thing) std::cout << "[NOTE]    " << thing << std::endl;
#ifdef LEVITATE_DEBUG
#define PRINTDEBUG(thing) std::cout << "[DEBUG]    " << thing << std::endl;
#else
#define PRINTDEBUG(thing);
#endif
#endif