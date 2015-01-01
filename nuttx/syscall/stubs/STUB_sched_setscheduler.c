/* Auto-generated sched_setscheduler stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sched.h>

uintptr_t STUB_sched_setscheduler(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)sched_setscheduler((pid_t)parm1, (int)parm2, (const struct sched_param*)parm3);
}

