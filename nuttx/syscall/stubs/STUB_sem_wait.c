/* Auto-generated sem_wait stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <semaphore.h>

uintptr_t STUB_sem_wait(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sem_wait((FAR sem_t*)parm1);
}

