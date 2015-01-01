/* Auto-generated sched_getstreams proxy file -- do not edit */

#include <nuttx/config.h>
#include <nuttx/sched.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && CONFIG_NFILE_STREAMS > 0

FAR struct streamlist* sched_getstreams(void)
{
  return (FAR struct streamlist*)sys_call0((unsigned int)SYS_sched_getstreams);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && CONFIG_NFILE_STREAMS > 0 */
