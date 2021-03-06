/*
 * Copyright (C) 2014 Felix Fietkau <nbd@openwrt.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MT76_DMA_H
#define __MT76_DMA_H

#define MT_DMA_CTL_SD_LEN1		GENMASK(13, 0)
#define MT_DMA_CTL_LAST_SEC1		BIT(14)
#define MT_DMA_CTL_BURST		BIT(15)
#define MT_DMA_CTL_SD_LEN0		GENMASK(29, 16)
#define MT_DMA_CTL_LAST_SEC0		BIT(30)
#define MT_DMA_CTL_DMA_DONE		BIT(31)

#define MT_TXD_INFO_LEN			GENMASK(13, 0)
#define MT_TXD_INFO_NEXT_VLD		BIT(16)
#define MT_TXD_INFO_TX_BURST		BIT(17)
#define MT_TXD_INFO_80211		BIT(19)
#define MT_TXD_INFO_TSO			BIT(20)
#define MT_TXD_INFO_CSO			BIT(21)
#define MT_TXD_INFO_WIV			BIT(24)
#define MT_TXD_INFO_QSEL		GENMASK(26, 25)
#define MT_TXD_INFO_TCO			BIT(29)
#define MT_TXD_INFO_UCO			BIT(30)
#define MT_TXD_INFO_ICO			BIT(31)

#define MT_RX_FCE_INFO_LEN		GENMASK(13, 0)
#define MT_RX_FCE_INFO_SELF_GEN		BIT(15)
#define MT_RX_FCE_INFO_CMD_SEQ		GENMASK(19, 16)
#define MT_RX_FCE_INFO_EVT_TYPE		GENMASK(23, 20)
#define MT_RX_FCE_INFO_PCIE_INTR	BIT(24)
#define MT_RX_FCE_INFO_QSEL		GENMASK(26, 25)
#define MT_RX_FCE_INFO_D_PORT		GENMASK(29, 27)
#define MT_RX_FCE_INFO_TYPE		GENMASK(31, 30)

enum mt76_qsel {
	MT_QSEL_MGMT,
	MT_QSEL_HCCA,
	MT_QSEL_EDCA,
	MT_QSEL_EDCA_2,
};

struct mt76_desc {
	__le32 buf0;
	__le32 ctrl;
	__le32 buf1;
	__le32 info;
} __packed __aligned(4);

#endif
