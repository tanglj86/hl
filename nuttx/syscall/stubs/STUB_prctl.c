/* Auto-generated prctl stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/prctl.h>

#if CONFIG_TASK_NAME_SIZE > 0

uintptr_t STUB_prctl(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4, uintptr_t parm5, uintptr_t parm6)
{
  return (uintptr_t)prctl((int)parm1, parm2, parm3, parm4, parm5, parm6);
}

#endif /* CONFIG_TASK_NAME_SIZE > 0 */
