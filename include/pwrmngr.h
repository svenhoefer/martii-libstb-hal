#include <config.h>
#if HAVE_TRIPLEDRAGON
#include "../libtriple/pwrmngr.h"
#elif HAVE_SPARK_HARDWARE
#include "../libspark/pwrmngr.h"
#elif HAVE_AZBOX_HARDWARE
#include "../azbox/pwrmngr.h"
#elif HAVE_GENERIC_HARDWARE
#if BOXMODEL_RASPI
#include "../raspi/pwrmngr.h"
#else
#include "../generic-pc/pwrmngr.h"
#endif
#else
#error neither HAVE_TRIPLEDRAGON nor HAVE_SPARK_HARDWARE defined
#endif
