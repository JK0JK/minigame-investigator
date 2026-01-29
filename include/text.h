#pragma once

#if defined(LANG_EN)
  #include "../data/text/en.h"
#elif defined(LANG_PT)
  #include "../data/text/pt.h"
#else
  #error "No language selected"
#endif