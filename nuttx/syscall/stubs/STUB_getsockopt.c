/* Auto-generated getsockopt stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/socket.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

uintptr_t STUB_getsockopt(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4, uintptr_t parm5)
{
  return (uintptr_t)getsockopt((int)parm1, (int)parm2, (int)parm3, (FAR void*)parm4, (FAR socklen_t*)parm5);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
