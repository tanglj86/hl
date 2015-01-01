/* Auto-generated sigqueue stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <signal.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_sigqueue(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)sigqueue((int)parm1, (int)parm2, (union sigval)((FAR void *)parm3));
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
