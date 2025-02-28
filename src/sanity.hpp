#ifndef SANITY
#define SANITY
// https://stackoverflow.com/questions/48426484/concise-way-to-disable-specific-warning-instances-in-clang
#define DO_PRAGMA(x) _Pragma(#x)
#define NOWARN(warnoption, ...)                    \
    DO_PRAGMA(GCC diagnostic push)                 \
    DO_PRAGMA(GCC diagnostic ignored #warnoption)  \
    __VA_ARGS__                                    \
    DO_PRAGMA(GCC diagnostic pop)

#define PRINTERR(thing) std::cerr << std::endl << "[ERROR]    " << thing << std::endl;
#define PRINTNOTE(thing) std::cout << std::endl << "[NOTE]    " << thing << std::endl;
#ifdef LEVITATE_DEBUG
#define PRINTDEBUG(thing) std::cout << "[DEBUG]    " << thing << std::endl;
#else
#define PRINTDEBUG(thing);
#endif
#endif