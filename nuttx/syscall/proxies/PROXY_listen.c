/* Auto-generated listen proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/socket.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

int listen(int parm1, int parm2)
{
  return (int)sys_call2((unsigned int)SYS_listen, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
