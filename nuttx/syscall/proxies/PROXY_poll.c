/* Auto-generated poll proxy file -- do not edit */

#include <nuttx/config.h>
#include <poll.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_POLL) && (CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0)

int poll(FAR struct pollfd* parm1, nfds_t parm2, int parm3)
{
  return (int)sys_call3((unsigned int)SYS_poll, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_POLL) && (CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0) */
