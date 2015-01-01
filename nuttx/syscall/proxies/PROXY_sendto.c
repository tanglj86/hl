/* Auto-generated sendto proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/socket.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

ssize_t sendto(int parm1, FAR const void* parm2, size_t parm3, int parm4, FAR const struct sockaddr* parm5, socklen_t parm6)
{
  return (ssize_t)sys_call6((unsigned int)SYS_sendto, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5, (uintptr_t)parm6);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
