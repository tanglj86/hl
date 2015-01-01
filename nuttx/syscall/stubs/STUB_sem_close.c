/* Auto-generated sem_close stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <semaphore.h>

#if defined(CONFIG_FS_NAMED_SEMAPHORES)

uintptr_t STUB_sem_close(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sem_close((FAR sem_t*)parm1);
}

#endif /* defined(CONFIG_FS_NAMED_SEMAPHORES) */
