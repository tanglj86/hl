/* Auto-generated sigwaitinfo stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <signal.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_sigwaitinfo(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)sigwaitinfo((FAR const sigset_t*)parm1, (FAR struct siginfo*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
