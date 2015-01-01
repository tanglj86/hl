/* Auto-generated shmget proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/shm.h>
#include <syscall.h>

#if defined(CONFIG_MM_SHM)

int shmget(key_t parm1, size_t parm2, int parm3)
{
  return (int)sys_call3((unsigned int)SYS_shmget, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* defined(CONFIG_MM_SHM) */
