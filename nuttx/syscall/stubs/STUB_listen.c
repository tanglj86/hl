/* Auto-generated listen stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/socket.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET)

uintptr_t STUB_listen(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)listen((int)parm1, (int)parm2);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 && defined(CONFIG_NET) */
