/* Auto-generated sched_getstreams stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <nuttx/sched.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && CONFIG_NFILE_STREAMS > 0

uintptr_t STUB_sched_getstreams(int nbr)
{
  return (uintptr_t)sched_getstreams();
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && CONFIG_NFILE_STREAMS > 0 */
