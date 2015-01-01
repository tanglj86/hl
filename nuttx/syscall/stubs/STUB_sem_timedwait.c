/* Auto-generated sem_timedwait stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <semaphore.h>

uintptr_t STUB_sem_timedwait(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)sem_timedwait((FAR sem_t*)parm1, (FAR const struct timespec *)parm2);
}

