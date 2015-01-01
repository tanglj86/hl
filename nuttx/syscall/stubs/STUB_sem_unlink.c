/* Auto-generated sem_unlink stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <semaphore.h>

#if defined(CONFIG_FS_NAMED_SEMAPHORES)

uintptr_t STUB_sem_unlink(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sem_unlink((FAR const char*)parm1);
}

#endif /* defined(CONFIG_FS_NAMED_SEMAPHORES) */
