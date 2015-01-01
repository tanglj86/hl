/* Auto-generated atexit stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <stdlib.h>

#if defined(CONFIG_SCHED_ATEXIT)

uintptr_t STUB_atexit(int nbr, uintptr_t parm1)
{
  return (uintptr_t)atexit((void (*)(void))parm1);
}

#endif /* defined(CONFIG_SCHED_ATEXIT) */
