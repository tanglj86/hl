/* Auto-generated mkfifo stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/stat.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_mkfifo(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)mkfifo((FAR const char*)parm1, (mode_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
