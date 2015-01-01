/* Auto-generated recvfrom stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/socket.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

uintptr_t STUB_recvfrom(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4, uintptr_t parm5, uintptr_t parm6)
{
  return (uintptr_t)recvfrom((int)parm1, (FAR void*)parm2, (size_t)parm3, (int)parm4, (FAR struct sockaddr*)parm5, (FAR socklen_t*)parm6);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
