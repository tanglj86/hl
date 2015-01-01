/* Auto-generated shmat stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/shm.h>

#if defined(CONFIG_MM_SHM)

uintptr_t STUB_shmat(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)shmat((int)parm1, (FAR const void *)parm2, (int)parm3);
}

#endif /* defined(CONFIG_MM_SHM) */
