GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.55.1.dylib
COMPILE=clang -DU_ATTRIBUTE_DEPRECATED= -I/usr/local/include   -DU_HAVE_ATOMIC=0  -I/usr/local/include -mmacosx-version-min=10.6 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings  -Qunused-arguments -Wno-parentheses-equality -fno-common -c
LIBFLAGS=-I/usr/local/include  -dynamic
GENLIB=clang -dynamiclib -dynamic -I/usr/local/include -mmacosx-version-min=10.6 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings  -Qunused-arguments -Wno-parentheses-equality -L/usr/local/lib -mmacosx-version-min=10.6  
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,55 -Wl,-current_version -Wl,55.1 -install_name
RPATH_FLAGS=
BIR_LDFLAGS=
AR=ar
ARFLAGS=r -c
RANLIB=ranlib
INSTALL_CMD=/usr/bin/install -c
