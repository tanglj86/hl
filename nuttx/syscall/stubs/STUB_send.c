/* Auto-generated send stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/socket.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

uintptr_t STUB_send(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4)
{
  return (uintptr_t)send((int)parm1, (FAR const void*)parm2, (size_t)parm3, (int)parm4);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
