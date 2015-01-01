/* Auto-generated on_exit stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <stdlib.h>

#if defined(CONFIG_SCHED_ONEXIT)

uintptr_t STUB_on_exit(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)on_exit((CODE void (*)(int, FAR void *))parm1, (FAR void *)parm2);
}

#endif /* defined(CONFIG_SCHED_ONEXIT) */
