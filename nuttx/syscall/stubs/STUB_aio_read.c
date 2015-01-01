/* Auto-generated aio_read stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <aio.h>

#if defined(CONFIG_FS_AIO)

uintptr_t STUB_aio_read(int nbr, uintptr_t parm1)
{
  return (uintptr_t)aio_read((FAR struct aiocb *)parm1);
}

#endif /* defined(CONFIG_FS_AIO) */
