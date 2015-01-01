/* Auto-generated sem_trywait stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <semaphore.h>

uintptr_t STUB_sem_trywait(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sem_trywait((FAR sem_t*)parm1);
}

