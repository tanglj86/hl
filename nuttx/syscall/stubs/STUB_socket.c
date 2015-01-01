/* Auto-generated socket stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/socket.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

uintptr_t STUB_socket(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)socket((int)parm1, (int)parm2, (int)parm3);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
