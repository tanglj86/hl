/* Auto-generated socket proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/socket.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

int socket(int parm1, int parm2, int parm3)
{
  return (int)sys_call3((unsigned int)SYS_socket, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
