/* Auto-generated sched_getparam stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sched.h>

uintptr_t STUB_sched_getparam(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)sched_getparam((pid_t)parm1, (struct sched_param*)parm2);
}

