/* Auto-generated nanosleep stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_nanosleep(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)nanosleep((FAR const struct timespec *)parm1, (FAR struct timespec*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
