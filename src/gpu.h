/*
 * This file is part of linux-driver-management.
 *
 * Copyright © 2016-2017 Ikey Doherty
 *
 * linux-driver-management is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 */

#pragma once

/**
 * Interesting vendors (to LDM)
 */
#define PCI_VENDOR_ID_INTEL 0x8086
#define PCI_VENDOR_ID_NVIDIA 0x10DE
#define PCI_VENDOR_ID_AMD 0x1002

/**
 * Encapsulate the PCI address for a device
 */
typedef struct LdmPCIAddress {
        uint16_t domain; /**<Host bridge */
        uint8_t bus;     /**<Bus on the bridge */
        uint8_t dev;     /**<Device */
        uint8_t func;    /**<Functon of the device */
} LdmPCIAddress;

/**
 * LdmGPU represents a usable GPU on the system
 */
typedef struct LdmGPU {
        char *device_name;     /**<Allocated device name */
        LdmPCIAddress address; /**<Address of the GPU */
        uint16_t vendor_id;    /**<PCI vendor ID */
        uint16_t device_id;    /**<PCI device ID */
} LdmGPU;

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 8
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=8 tabstop=8 expandtab:
 * :indentSize=8:tabSize=8:noTabs=true:
 */