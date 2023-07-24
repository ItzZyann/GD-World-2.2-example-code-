// TODO //
#include "include.h"

__attribute__((constructor))
void lib_gdkit() {

 gdkit::loadHook(true);
}
