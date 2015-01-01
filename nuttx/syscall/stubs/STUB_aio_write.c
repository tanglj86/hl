/* Auto-generated aio_write stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <aio.h>

#if defined(CONFIG_FS_AIO)

uintptr_t STUB_aio_write(int nbr, uintptr_t parm1)
{
  return (uintptr_t)aio_write((FAR struct aiocb *)parm1);
}

#endif /* defined(CONFIG_FS_AIO) */
