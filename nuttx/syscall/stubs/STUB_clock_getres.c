/* Auto-generated clock_getres stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

uintptr_t STUB_clock_getres(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)clock_getres((clockid_t)parm1, (struct timespec*)parm2);
}

