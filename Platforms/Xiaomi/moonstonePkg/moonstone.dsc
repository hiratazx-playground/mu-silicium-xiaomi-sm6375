##
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                = moonstone
  PLATFORM_GUID                = 3FAE1F62-E8F6-45A8-BFF8-B9F7FD3121D4
  PLATFORM_VERSION             = 0.1
  DSC_SPECIFICATION            = 0x00010005
  OUTPUT_DIRECTORY             = Build/moonstonePkg
  SUPPORTED_ARCHITECTURES      = AARCH64
  BUILD_TARGETS                = RELEASE|DEBUG
  SKUID_IDENTIFIER             = DEFAULT
  FLASH_DEFINITION             = moonstonePkg/moonstone.fdf
  USE_CUSTOM_DISPLAY_DRIVER    = 0

[PcdsFixedAtBuild]
  # DDR Start Address
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000

  # UEFI Stack Addresses
  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x9FF90000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000

  # Device GUID
  gSiliciumPkgTokenSpaceGuid.PcdDeviceGuid|{ 0x62, 0x1F, 0xAE, 0x3F, 0xF6, 0xE8, 0xA8, 0x45, 0xBF, 0xF8, 0xB9, 0xF7, 0xFD, 0x31, 0x21, 0xD4 }

  # SmBios
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemManufacturer|"Xiaomi"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemModel|"POCO X5 5G"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"moonstone"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"POCO_X5_5G_moonstone"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosBoardModel|"POCO X5 5G"

  # Simple Frame Buffer
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferWidth|1080
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferHeight|2400
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferColorDepth|32

  # Platform Pei
  gQcomPkgTokenSpaceGuid.PcdPlatformType|"LA"

  # Dynamic RAM Start Address
  gSiliciumPkgTokenSpaceGuid.PcdRamPartitionBase|0xA7400000

  # SD Card Slot
  gQcomPkgTokenSpaceGuid.PcdInitCardSlot|TRUE

[LibraryClasses]
  MemoryMapLib|moonstonePkg/Library/MemoryMapLib/MemoryMapLib.inf
  ConfigurationMapLib|moonstonePkg/Library/ConfigurationMapLib/ConfigurationMapLib.inf
  AcpiDeviceUpdateLib|SiliciumPkg/Library/AcpiDeviceUpdateLibNull/AcpiDeviceUpdateLibNull.inf

[PcdsDynamicDefault]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1080
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|2400
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1080
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|2400
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|135
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|126
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|135
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|126

!include StraitPkg/StraitPkg.dsc.inc