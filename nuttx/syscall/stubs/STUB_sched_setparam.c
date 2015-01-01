/* Auto-generated sched_setparam stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sched.h>

uintptr_t STUB_sched_setparam(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)sched_setparam((pid_t)parm1, (const struct sched_param*)parm2);
}

