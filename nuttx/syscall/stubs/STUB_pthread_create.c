/* Auto-generated pthread_create stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_create(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4)
{
  return (uintptr_t)pthread_create((FAR pthread_t*)parm1, (FAR const pthread_attr_t*)parm2, (pthread_startroutine_t)parm3, (pthread_addr_t)parm4);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
