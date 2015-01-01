/* Auto-generated sched_rr_get_interval stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sched.h>

uintptr_t STUB_sched_rr_get_interval(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)sched_rr_get_interval((pid_t)parm1, (struct timespec*)parm2);
}

