/* Auto-generated shmctl stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/shm.h>

#if defined(CONFIG_MM_SHM)

uintptr_t STUB_shmctl(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)shmctl((int)parm1, (int)parm2, (FAR struct shmid_ds *)parm3);
}

#endif /* defined(CONFIG_MM_SHM) */
