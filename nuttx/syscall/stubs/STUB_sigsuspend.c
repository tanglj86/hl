/* Auto-generated sigsuspend stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <signal.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_sigsuspend(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sigsuspend((FAR const sigset_t*)parm1);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
