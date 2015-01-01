/* Auto-generated sigprocmask stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <signal.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_sigprocmask(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)sigprocmask((int)parm1, (FAR const sigset_t*)parm2, (FAR sigset_t*)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
