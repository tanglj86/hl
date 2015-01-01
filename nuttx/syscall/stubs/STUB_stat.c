/* Auto-generated stat stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/stat.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_stat(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)stat((const char*)parm1, (FAR struct stat*)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
