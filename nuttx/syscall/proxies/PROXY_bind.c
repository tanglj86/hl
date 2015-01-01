/* Auto-generated bind proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/socket.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

int bind(int parm1, FAR const struct sockaddr* parm2, socklen_t parm3)
{
  return (int)sys_call3((unsigned int)SYS_bind, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
