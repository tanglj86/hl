/* Auto-generated sem_destroy stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <semaphore.h>

uintptr_t STUB_sem_destroy(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sem_destroy((FAR sem_t*)parm1);
}

