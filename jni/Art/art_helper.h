#include <jni.h>
#include <dlfcn.h>
#include <stdlib.h>

void init_parameter(int version);
void switchQuickToInterpret(void* artmeth);
void switchInterpretToInterpret(void* artmeth);
void doHook(void* origin, void* proxy);
