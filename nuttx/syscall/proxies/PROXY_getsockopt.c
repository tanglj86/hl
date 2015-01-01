/* Auto-generated getsockopt proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/socket.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

int getsockopt(int parm1, int parm2, int parm3, FAR void* parm4, FAR socklen_t* parm5)
{
  return (int)sys_call5((unsigned int)SYS_getsockopt, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
