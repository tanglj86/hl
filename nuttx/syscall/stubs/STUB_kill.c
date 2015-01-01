/* Auto-generated kill stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <signal.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_kill(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)kill((pid_t)parm1, (int)parm2);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
