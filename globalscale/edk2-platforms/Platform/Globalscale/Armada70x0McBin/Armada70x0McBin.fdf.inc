#
#  Copyright (C) 2018 Marvell International Ltd. and its affiliates
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#

# Per-board additional content of the DXE phase firmware volume

  INF Silicon/Marvell/Drivers/Gpio/MvPca95xxDxe/MvPca95xxDxe.inf

  # DTB
  #INF RuleOverride = DTB Silicon/Marvell/Armada7k8k/DeviceTree/Armada70x0McBin.inf
  INF RuleOverride = DTB Platform/Marvell/Armada7k8k/DeviceTree/Armada70x0McBin.inf

!if $(ARCH) == AARCH64
  # ACPI support
  #INF RuleOverride = ACPITABLE Silicon/Marvell/Armada7k8k/AcpiTables/Armada70x0McBin.inf
  INF RuleOverride = ACPITABLE Platform/Marvell/Armada7k8k/AcpiTables/Armada70x0McBin.inf
!endif
