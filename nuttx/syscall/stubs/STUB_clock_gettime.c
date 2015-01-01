/* Auto-generated clock_gettime stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

uintptr_t STUB_clock_gettime(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)clock_gettime((clockid_t)parm1, (struct timespec*)parm2);
}

