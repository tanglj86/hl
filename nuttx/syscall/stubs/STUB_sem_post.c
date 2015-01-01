/* Auto-generated sem_post stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <semaphore.h>

uintptr_t STUB_sem_post(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sem_post((FAR sem_t*)parm1);
}

