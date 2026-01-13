#pragma once

#if defined(LANG_EN)
  #include "../text/en.h"
#elif defined(LANG_PT)
  #include "../text/pt.h"
#else
  #error "No language selected"
#endif