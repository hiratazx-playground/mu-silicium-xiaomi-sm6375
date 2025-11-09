  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/moonstone/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/moonstone/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/moonstone/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/QcomMpmTimerDxe/QcomMpmTimerDxe.inf

  INF ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/moonstone/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf
  
  INF Binaries/moonstone/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/NpaDxe/NpaDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/moonstone/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/moonstone/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/moonstone/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/MinidumpTADxe/MinidumpTADxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  #INF Binaries/moonstone/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  #INF Binaries/moonstone/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/moonstone/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf


  INF Binaries/moonstone/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/moonstone/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/MacDxe/MacDxe.inf
  INF Binaries/moonstone/QcomPkg/SocPkg/StraitPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/moonstone/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/moonstone/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
