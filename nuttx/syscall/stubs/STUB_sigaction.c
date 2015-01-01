/* Auto-generated sigaction stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <signal.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_sigaction(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)sigaction((int)parm1, (FAR const struct sigaction*)parm2, (FAR struct sigaction*)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
