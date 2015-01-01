/* Auto-generated clock_settime stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

uintptr_t STUB_clock_settime(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)clock_settime((clockid_t)parm1, (const struct timespec*)parm2);
}

