/* Auto-generated sched_getscheduler stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sched.h>

uintptr_t STUB_sched_getscheduler(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sched_getscheduler((pid_t)parm1);
}

