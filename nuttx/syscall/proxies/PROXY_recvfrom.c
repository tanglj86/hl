/* Auto-generated recvfrom proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/socket.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

ssize_t recvfrom(int parm1, FAR void* parm2, size_t parm3, int parm4, FAR struct sockaddr* parm5, FAR socklen_t* parm6)
{
  return (ssize_t)sys_call6((unsigned int)SYS_recvfrom, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5, (uintptr_t)parm6);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
