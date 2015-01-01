/* Auto-generated recv proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/socket.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

ssize_t recv(int parm1, FAR void* parm2, size_t parm3, int parm4)
{
  return (ssize_t)sys_call4((unsigned int)SYS_recv, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
