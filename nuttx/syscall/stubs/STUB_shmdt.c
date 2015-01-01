/* Auto-generated shmdt stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/shm.h>

#if defined(CONFIG_MM_SHM)

uintptr_t STUB_shmdt(int nbr, uintptr_t parm1)
{
  return (uintptr_t)shmdt((FAR const void *)parm1);
}

#endif /* defined(CONFIG_MM_SHM) */
