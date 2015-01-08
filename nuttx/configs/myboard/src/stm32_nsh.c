/****************************************************************************
 * config/myboard/src/stm32_nsh.c
 *
 *   Copyright (C) 2012, 2014 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdbool.h>
#include <stdio.h>
#include <debug.h>
#include <errno.h>

#include "stm32.h"
#include "myboard_internal.h"


/****************************************************************************
 * Pre-Processor Definitions
 ****************************************************************************/

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: nsh_archinitialize
 *
 * Description:
 *   Perform architecture-specific initialization (if this was not already
 *   done by board_initialize();
 *
 ****************************************************************************/

int nsh_archinitialize(void)
{
#if defined(HAVE_SDIO) || defined(HAVE_USBHOST) || defined(HAVE_W25) || defined(HAVE_AT24)
  int ret;
#endif

#ifdef HAVE_AT24

  /* Initialize the AT24 driver */

  ret = stm32_at24_automount(AT24_MINOR);
  if (ret < 0)
    {
      syslog(LOG_ERR, "ERROR: stm32_at24_automount failed: %d\n", ret);
    }

  return ret;
#endif
  /* Initialize and register the W25 FLASH file system. */

#ifdef HAVE_W25
  ret = stm32_w25initialize(CONFIG_NSH_W25MINOR);
  if (ret < 0)
    {
      syslog(LOG_ERR, "ERROR: Failed to initialize W25 minor %d: %d\n",
              CONFIG_NSH_W25MINOR, ret);
      return ret;
    }
#endif

  /* Initialize the SDIO-based MMC/SD slot */

#ifdef HAVE_SDIO
  ret = stm32_sdio_initialize();
  if (ret < 0)
    {
      syslog(LOG_ERR, "Failed to initialize MMC/SD driver: %d\n", ret);
      return ret;
    }
#endif

  /* Initialize USB host operation.  stm32_usbhost_initialize() starts a thread
   * will monitor for USB connection and disconnection events.
   */

#ifdef HAVE_USBHOST
  ret = stm32_usbhost_initialize();
  if (ret != OK)
    {
      syslog(LOG_ERR, "ERROR: Failed to initialize USB host: %d\n", ret);
      return ret;
    }
#endif

#ifdef HAVE_USBMONITOR
  /* Start the USB Monitor */

  ret = usbmonitor_start(0, NULL);
  if (ret != OK)
    {
      udbg("Start USB monitor: %d\n", ret);
    }
#endif
  return OK;
}

