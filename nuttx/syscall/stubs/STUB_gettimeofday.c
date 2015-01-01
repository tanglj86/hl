/* Auto-generated gettimeofday stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/time.h>

uintptr_t STUB_gettimeofday(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)gettimeofday((struct timeval*)parm1, (FAR void*)parm2);
}

