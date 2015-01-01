/* Auto-generated poll stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <poll.h>

#if !defined(CONFIG_DISABLE_POLL) && (CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0)

uintptr_t STUB_poll(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)poll((FAR struct pollfd*)parm1, (nfds_t)parm2, (int)parm3);
}

#endif /* !defined(CONFIG_DISABLE_POLL) && (CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0) */
