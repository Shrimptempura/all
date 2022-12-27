(C99) Assume that the following macro definitions are in effect:

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)
What will the following line look like after macro expansion?

IDENT(foo)
Solution
#pragma ident "foo"