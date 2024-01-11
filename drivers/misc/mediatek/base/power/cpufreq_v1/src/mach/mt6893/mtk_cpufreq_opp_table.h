/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2021 MediaTek Inc.
 */

#include "mtk_cpufreq_struct.h"
#include "mtk_cpufreq_config.h"

/* LL */
#define	CPU_DVFS_FREQ0_LL_26G26G	2000000
#define	CPU_DVFS_FREQ1_LL_26G26G	1800000
#define	CPU_DVFS_FREQ2_LL_26G26G	1725000
#define	CPU_DVFS_FREQ3_LL_26G26G	1625000
#define	CPU_DVFS_FREQ4_LL_26G26G	1525000
#define	CPU_DVFS_FREQ5_LL_26G26G	1450000
#define	CPU_DVFS_FREQ6_LL_26G26G	1350000
#define	CPU_DVFS_FREQ7_LL_26G26G	1250000
#define	CPU_DVFS_FREQ8_LL_26G26G	1075000
#define	CPU_DVFS_FREQ9_LL_26G26G	1000000
#define	CPU_DVFS_FREQ10_LL_26G26G	925000
#define	CPU_DVFS_FREQ11_LL_26G26G	850000
#define	CPU_DVFS_FREQ12_LL_26G26G	750000
#define	CPU_DVFS_FREQ13_LL_26G26G	675000
#define	CPU_DVFS_FREQ14_LL_26G26G	600000
#define	CPU_DVFS_FREQ15_LL_26G26G	500000

#define	CPU_DVFS_FREQ0_L_26G26G	2600000
#define	CPU_DVFS_FREQ1_L_26G26G	2507000
#define	CPU_DVFS_FREQ2_L_26G26G	2354000
#define	CPU_DVFS_FREQ3_L_26G26G	2200000
#define	CPU_DVFS_FREQ4_L_26G26G	1985000
#define	CPU_DVFS_FREQ5_L_26G26G	1855000
#define	CPU_DVFS_FREQ6_L_26G26G	1740000
#define	CPU_DVFS_FREQ7_L_26G26G	1624000
#define	CPU_DVFS_FREQ8_L_26G26G	1537000
#define	CPU_DVFS_FREQ9_L_26G26G	1451000
#define	CPU_DVFS_FREQ10_L_26G26G	1335000
#define	CPU_DVFS_FREQ11_L_26G26G	1162000
#define	CPU_DVFS_FREQ12_L_26G26G	1046000
#define	CPU_DVFS_FREQ13_L_26G26G	902000
#define	CPU_DVFS_FREQ14_L_26G26G	700000
#define	CPU_DVFS_FREQ15_L_26G26G	437000

#define	CPU_DVFS_FREQ0_B_26G26G	2600000
#define	CPU_DVFS_FREQ1_B_26G26G	2529000
#define	CPU_DVFS_FREQ2_B_26G26G	2410000
#define	CPU_DVFS_FREQ3_B_26G26G	2292000
#define	CPU_DVFS_FREQ4_B_26G26G	2127000
#define	CPU_DVFS_FREQ5_B_26G26G	2032000
#define	CPU_DVFS_FREQ6_B_26G26G	1938000
#define	CPU_DVFS_FREQ7_B_26G26G	1820000
#define	CPU_DVFS_FREQ8_B_26G26G	1745000
#define	CPU_DVFS_FREQ9_B_26G26G	1632000
#define	CPU_DVFS_FREQ10_B_26G26G	1482000
#define	CPU_DVFS_FREQ11_B_26G26G	1370000
#define	CPU_DVFS_FREQ12_B_26G26G	1258000
#define	CPU_DVFS_FREQ13_B_26G26G	1108000
#define	CPU_DVFS_FREQ14_B_26G26G	921000
#define	CPU_DVFS_FREQ15_B_26G26G	659000

#define	CPU_DVFS_FREQ0_CCI_26G26G	1700000
#define	CPU_DVFS_FREQ1_CCI_26G26G	1540000
#define	CPU_DVFS_FREQ2_CCI_26G26G	1400000
#define	CPU_DVFS_FREQ3_CCI_26G26G	1322000
#define	CPU_DVFS_FREQ4_CCI_26G26G	1288000
#define	CPU_DVFS_FREQ5_CCI_26G26G	1255000
#define	CPU_DVFS_FREQ6_CCI_26G26G	1182000
#define	CPU_DVFS_FREQ7_CCI_26G26G	1092000
#define	CPU_DVFS_FREQ8_CCI_26G26G	1021000
#define	CPU_DVFS_FREQ9_CCI_26G26G	949000
#define	CPU_DVFS_FREQ10_CCI_26G26G	895000
#define	CPU_DVFS_FREQ11_CCI_26G26G	824000
#define	CPU_DVFS_FREQ12_CCI_26G26G	770000
#define	CPU_DVFS_FREQ13_CCI_26G26G	716000
#define	CPU_DVFS_FREQ14_CCI_26G26G	627000
#define	CPU_DVFS_FREQ15_CCI_26G26G	520000

#define	CPU_DVFS_VOLT0_VPROC1_26G26G	100000
#define	CPU_DVFS_VOLT1_VPROC1_26G26G	95000
#define	CPU_DVFS_VOLT2_VPROC1_26G26G	93125
#define	CPU_DVFS_VOLT3_VPROC1_26G26G	90625
#define	CPU_DVFS_VOLT4_VPROC1_26G26G	88125
#define	CPU_DVFS_VOLT5_VPROC1_26G26G	86250
#define	CPU_DVFS_VOLT6_VPROC1_26G26G	83750
#define	CPU_DVFS_VOLT7_VPROC1_26G26G	81250
#define	CPU_DVFS_VOLT8_VPROC1_26G26G	76875
#define	CPU_DVFS_VOLT9_VPROC1_26G26G	75000
#define	CPU_DVFS_VOLT10_VPROC1_26G26G	73125
#define	CPU_DVFS_VOLT11_VPROC1_26G26G	71250
#define	CPU_DVFS_VOLT12_VPROC1_26G26G	68750
#define	CPU_DVFS_VOLT13_VPROC1_26G26G	66875
#define	CPU_DVFS_VOLT14_VPROC1_26G26G	65000
#define	CPU_DVFS_VOLT15_VPROC1_26G26G	65000

#define	CPU_DVFS_VOLT0_VPROC2_26G26G	105000
#define	CPU_DVFS_VOLT1_VPROC2_26G26G	103125
#define	CPU_DVFS_VOLT2_VPROC2_26G26G	100000
#define	CPU_DVFS_VOLT3_VPROC2_26G26G	96875
#define	CPU_DVFS_VOLT4_VPROC2_26G26G	91875
#define	CPU_DVFS_VOLT5_VPROC2_26G26G	89375
#define	CPU_DVFS_VOLT6_VPROC2_26G26G	86875
#define	CPU_DVFS_VOLT7_VPROC2_26G26G	84375
#define	CPU_DVFS_VOLT8_VPROC2_26G26G	83125
#define	CPU_DVFS_VOLT9_VPROC2_26G26G	81250
#define	CPU_DVFS_VOLT10_VPROC2_26G26G	78750
#define	CPU_DVFS_VOLT11_VPROC2_26G26G	75000
#define	CPU_DVFS_VOLT12_VPROC2_26G26G	72500
#define	CPU_DVFS_VOLT13_VPROC2_26G26G	69375
#define	CPU_DVFS_VOLT14_VPROC2_26G26G	65000
#define	CPU_DVFS_VOLT15_VPROC2_26G26G	65000

#define	CPU_DVFS_VOLT0_VPROC3_26G26G	105000
#define	CPU_DVFS_VOLT1_VPROC3_26G26G	103125
#define	CPU_DVFS_VOLT2_VPROC3_26G26G	100625
#define	CPU_DVFS_VOLT3_VPROC3_26G26G	98125
#define	CPU_DVFS_VOLT4_VPROC3_26G26G	94375
#define	CPU_DVFS_VOLT5_VPROC3_26G26G	92500
#define	CPU_DVFS_VOLT6_VPROC3_26G26G	90000
#define	CPU_DVFS_VOLT7_VPROC3_26G26G	87500
#define	CPU_DVFS_VOLT8_VPROC3_26G26G	85625
#define	CPU_DVFS_VOLT9_VPROC3_26G26G	83125
#define	CPU_DVFS_VOLT10_VPROC3_26G26G	80000
#define	CPU_DVFS_VOLT11_VPROC3_26G26G	77500
#define	CPU_DVFS_VOLT12_VPROC3_26G26G	75000
#define	CPU_DVFS_VOLT13_VPROC3_26G26G	72500
#define	CPU_DVFS_VOLT14_VPROC3_26G26G	69375
#define	CPU_DVFS_VOLT15_VPROC3_26G26G	65000

#define	CPU_DVFS_VOLT0_VPROC4_26G26G	100000
#define	CPU_DVFS_VOLT1_VPROC4_26G26G	100000
#define	CPU_DVFS_VOLT2_VPROC4_26G26G	100000
#define	CPU_DVFS_VOLT3_VPROC4_26G26G	96875
#define	CPU_DVFS_VOLT4_VPROC4_26G26G	95000
#define	CPU_DVFS_VOLT5_VPROC4_26G26G	93750
#define	CPU_DVFS_VOLT6_VPROC4_26G26G	90625
#define	CPU_DVFS_VOLT7_VPROC4_26G26G	86875
#define	CPU_DVFS_VOLT8_VPROC4_26G26G	83750
#define	CPU_DVFS_VOLT9_VPROC4_26G26G	81250
#define	CPU_DVFS_VOLT10_VPROC4_26G26G	78750
#define	CPU_DVFS_VOLT11_VPROC4_26G26G	75625
#define	CPU_DVFS_VOLT12_VPROC4_26G26G	73750
#define	CPU_DVFS_VOLT13_VPROC4_26G26G	71875
#define	CPU_DVFS_VOLT14_VPROC4_26G26G	68750
#define	CPU_DVFS_VOLT15_VPROC4_26G26G	65000

#define	CPU_DVFS_FREQ0_LL_30G26G	2000000
#define	CPU_DVFS_FREQ1_LL_30G26G	1800000
#define	CPU_DVFS_FREQ2_LL_30G26G	1725000
#define	CPU_DVFS_FREQ3_LL_30G26G	1625000
#define	CPU_DVFS_FREQ4_LL_30G26G	1525000
#define	CPU_DVFS_FREQ5_LL_30G26G	1450000
#define	CPU_DVFS_FREQ6_LL_30G26G	1350000
#define	CPU_DVFS_FREQ7_LL_30G26G	1250000
#define	CPU_DVFS_FREQ8_LL_30G26G	1075000
#define	CPU_DVFS_FREQ9_LL_30G26G	1000000
#define	CPU_DVFS_FREQ10_LL_30G26G	925000
#define	CPU_DVFS_FREQ11_LL_30G26G	850000
#define	CPU_DVFS_FREQ12_LL_30G26G	750000
#define	CPU_DVFS_FREQ13_LL_30G26G	675000
#define	CPU_DVFS_FREQ14_LL_30G26G	600000
#define	CPU_DVFS_FREQ15_LL_30G26G	500000

#define	CPU_DVFS_FREQ0_L_30G26G	2600000
#define	CPU_DVFS_FREQ1_L_30G26G	2507000
#define	CPU_DVFS_FREQ2_L_30G26G	2354000
#define	CPU_DVFS_FREQ3_L_30G26G	2200000
#define	CPU_DVFS_FREQ4_L_30G26G	1985000
#define	CPU_DVFS_FREQ5_L_30G26G	1855000
#define	CPU_DVFS_FREQ6_L_30G26G	1740000
#define	CPU_DVFS_FREQ7_L_30G26G	1624000
#define	CPU_DVFS_FREQ8_L_30G26G	1537000
#define	CPU_DVFS_FREQ9_L_30G26G	1451000
#define	CPU_DVFS_FREQ10_L_30G26G	1335000
#define	CPU_DVFS_FREQ11_L_30G26G	1162000
#define	CPU_DVFS_FREQ12_L_30G26G	1046000
#define	CPU_DVFS_FREQ13_L_30G26G	902000
#define	CPU_DVFS_FREQ14_L_30G26G	700000
#define	CPU_DVFS_FREQ15_L_30G26G	437000

#define	CPU_DVFS_FREQ0_B_30G26G	3000000
#define	CPU_DVFS_FREQ1_B_30G26G	2892000
#define	CPU_DVFS_FREQ2_B_30G26G	2713000
#define	CPU_DVFS_FREQ3_B_30G26G	2600000
#define	CPU_DVFS_FREQ4_B_30G26G	2463000
#define	CPU_DVFS_FREQ5_B_30G26G	2284000
#define	CPU_DVFS_FREQ6_B_30G26G	2141000
#define	CPU_DVFS_FREQ7_B_30G26G	1998000
#define	CPU_DVFS_FREQ8_B_30G26G	1820000
#define	CPU_DVFS_FREQ9_B_30G26G	1632000
#define	CPU_DVFS_FREQ10_B_30G26G	1482000
#define	CPU_DVFS_FREQ11_B_30G26G	1370000
#define	CPU_DVFS_FREQ12_B_30G26G	1258000
#define	CPU_DVFS_FREQ13_B_30G26G	1108000
#define	CPU_DVFS_FREQ14_B_30G26G	921000
#define	CPU_DVFS_FREQ15_B_30G26G	659000

#define	CPU_DVFS_FREQ0_CCI_30G26G	1700000
#define	CPU_DVFS_FREQ1_CCI_30G26G	1540000
#define	CPU_DVFS_FREQ2_CCI_30G26G	1400000
#define	CPU_DVFS_FREQ3_CCI_30G26G	1322000
#define	CPU_DVFS_FREQ4_CCI_30G26G	1288000
#define	CPU_DVFS_FREQ5_CCI_30G26G	1255000
#define	CPU_DVFS_FREQ6_CCI_30G26G	1182000
#define	CPU_DVFS_FREQ7_CCI_30G26G	1092000
#define	CPU_DVFS_FREQ8_CCI_30G26G	1021000
#define	CPU_DVFS_FREQ9_CCI_30G26G	949000
#define	CPU_DVFS_FREQ10_CCI_30G26G	895000
#define	CPU_DVFS_FREQ11_CCI_30G26G	824000
#define	CPU_DVFS_FREQ12_CCI_30G26G	770000
#define	CPU_DVFS_FREQ13_CCI_30G26G	716000
#define	CPU_DVFS_FREQ14_CCI_30G26G	627000
#define	CPU_DVFS_FREQ15_CCI_30G26G	520000

#define	CPU_DVFS_VOLT0_VPROC1_30G26G	100000
#define	CPU_DVFS_VOLT1_VPROC1_30G26G	95000
#define	CPU_DVFS_VOLT2_VPROC1_30G26G	93125
#define	CPU_DVFS_VOLT3_VPROC1_30G26G	90625
#define	CPU_DVFS_VOLT4_VPROC1_30G26G	88125
#define	CPU_DVFS_VOLT5_VPROC1_30G26G	86250
#define	CPU_DVFS_VOLT6_VPROC1_30G26G	83750
#define	CPU_DVFS_VOLT7_VPROC1_30G26G	81250
#define	CPU_DVFS_VOLT8_VPROC1_30G26G	76875
#define	CPU_DVFS_VOLT9_VPROC1_30G26G	75000
#define	CPU_DVFS_VOLT10_VPROC1_30G26G	73125
#define	CPU_DVFS_VOLT11_VPROC1_30G26G	71250
#define	CPU_DVFS_VOLT12_VPROC1_30G26G	68750
#define	CPU_DVFS_VOLT13_VPROC1_30G26G	66875
#define	CPU_DVFS_VOLT14_VPROC1_30G26G	65000
#define	CPU_DVFS_VOLT15_VPROC1_30G26G	65000

#define	CPU_DVFS_VOLT0_VPROC2_30G26G	105000
#define	CPU_DVFS_VOLT1_VPROC2_30G26G	103125
#define	CPU_DVFS_VOLT2_VPROC2_30G26G	100000
#define	CPU_DVFS_VOLT3_VPROC2_30G26G	96875
#define	CPU_DVFS_VOLT4_VPROC2_30G26G	91875
#define	CPU_DVFS_VOLT5_VPROC2_30G26G	89375
#define	CPU_DVFS_VOLT6_VPROC2_30G26G	86875
#define	CPU_DVFS_VOLT7_VPROC2_30G26G	84375
#define	CPU_DVFS_VOLT8_VPROC2_30G26G	83125
#define	CPU_DVFS_VOLT9_VPROC2_30G26G	81250
#define	CPU_DVFS_VOLT10_VPROC2_30G26G	78750
#define	CPU_DVFS_VOLT11_VPROC2_30G26G	75000
#define	CPU_DVFS_VOLT12_VPROC2_30G26G	72500
#define	CPU_DVFS_VOLT13_VPROC2_30G26G	69375
#define	CPU_DVFS_VOLT14_VPROC2_30G26G	65000
#define	CPU_DVFS_VOLT15_VPROC2_30G26G	65000

#define	CPU_DVFS_VOLT0_VPROC3_30G26G	105000
#define	CPU_DVFS_VOLT1_VPROC3_30G26G	103125
#define	CPU_DVFS_VOLT2_VPROC3_30G26G	100000
#define	CPU_DVFS_VOLT3_VPROC3_30G26G	98125
#define	CPU_DVFS_VOLT4_VPROC3_30G26G	95625
#define	CPU_DVFS_VOLT5_VPROC3_30G26G	92500
#define	CPU_DVFS_VOLT6_VPROC3_30G26G	90000
#define	CPU_DVFS_VOLT7_VPROC3_30G26G	87500
#define	CPU_DVFS_VOLT8_VPROC3_30G26G	84375
#define	CPU_DVFS_VOLT9_VPROC3_30G26G	81250
#define	CPU_DVFS_VOLT10_VPROC3_30G26G	78750
#define	CPU_DVFS_VOLT11_VPROC3_30G26G	76875
#define	CPU_DVFS_VOLT12_VPROC3_30G26G	75000
#define	CPU_DVFS_VOLT13_VPROC3_30G26G	72500
#define	CPU_DVFS_VOLT14_VPROC3_30G26G	69375
#define	CPU_DVFS_VOLT15_VPROC3_30G26G	65000

#define	CPU_DVFS_VOLT0_VPROC4_30G26G	100000
#define	CPU_DVFS_VOLT1_VPROC4_30G26G	100000
#define	CPU_DVFS_VOLT2_VPROC4_30G26G	100000
#define	CPU_DVFS_VOLT3_VPROC4_30G26G	96875
#define	CPU_DVFS_VOLT4_VPROC4_30G26G	95000
#define	CPU_DVFS_VOLT5_VPROC4_30G26G	93750
#define	CPU_DVFS_VOLT6_VPROC4_30G26G	90625
#define	CPU_DVFS_VOLT7_VPROC4_30G26G	86875
#define	CPU_DVFS_VOLT8_VPROC4_30G26G	83750
#define	CPU_DVFS_VOLT9_VPROC4_30G26G	81250
#define	CPU_DVFS_VOLT10_VPROC4_30G26G	78750
#define	CPU_DVFS_VOLT11_VPROC4_30G26G	75625
#define	CPU_DVFS_VOLT12_VPROC4_30G26G	73750
#define	CPU_DVFS_VOLT13_VPROC4_30G26G	71875
#define	CPU_DVFS_VOLT14_VPROC4_30G26G	68750
#define	CPU_DVFS_VOLT15_VPROC4_30G26G	65000

#define	CPU_DVFS_FREQ0_LL_30G28G	2000000
#define	CPU_DVFS_FREQ1_LL_30G28G	1800000
#define	CPU_DVFS_FREQ2_LL_30G28G	1725000
#define	CPU_DVFS_FREQ3_LL_30G28G	1625000
#define	CPU_DVFS_FREQ4_LL_30G28G	1525000
#define	CPU_DVFS_FREQ5_LL_30G28G	1450000
#define	CPU_DVFS_FREQ6_LL_30G28G	1350000
#define	CPU_DVFS_FREQ7_LL_30G28G	1250000
#define	CPU_DVFS_FREQ8_LL_30G28G	1075000
#define	CPU_DVFS_FREQ9_LL_30G28G	1000000
#define	CPU_DVFS_FREQ10_LL_30G28G	925000
#define	CPU_DVFS_FREQ11_LL_30G28G	850000
#define	CPU_DVFS_FREQ12_LL_30G28G	750000
#define	CPU_DVFS_FREQ13_LL_30G28G	675000
#define	CPU_DVFS_FREQ14_LL_30G28G	600000
#define	CPU_DVFS_FREQ15_LL_30G28G	500000

#define	CPU_DVFS_FREQ0_L_30G28G	2800000
#define	CPU_DVFS_FREQ1_L_30G28G	2700000
#define	CPU_DVFS_FREQ2_L_30G28G	2600000
#define	CPU_DVFS_FREQ3_L_30G28G	2369000
#define	CPU_DVFS_FREQ4_L_30G28G	2137000
#define	CPU_DVFS_FREQ5_L_30G28G	2000000
#define	CPU_DVFS_FREQ6_L_30G28G	1870000
#define	CPU_DVFS_FREQ7_L_30G28G	1740000
#define	CPU_DVFS_FREQ8_L_30G28G	1642000
#define	CPU_DVFS_FREQ9_L_30G28G	1545000
#define	CPU_DVFS_FREQ10_L_30G28G	1415000
#define	CPU_DVFS_FREQ11_L_30G28G	1187000
#define	CPU_DVFS_FREQ12_L_30G28G	1090000
#define	CPU_DVFS_FREQ13_L_30G28G	927000
#define	CPU_DVFS_FREQ14_L_30G28G	700000
#define	CPU_DVFS_FREQ15_L_30G28G	437000

#define	CPU_DVFS_FREQ0_B_30G28G	3000000
#define	CPU_DVFS_FREQ1_B_30G28G	2892000
#define	CPU_DVFS_FREQ2_B_30G28G	2713000
#define	CPU_DVFS_FREQ3_B_30G28G	2600000
#define	CPU_DVFS_FREQ4_B_30G28G	2463000
#define	CPU_DVFS_FREQ5_B_30G28G	2284000
#define	CPU_DVFS_FREQ6_B_30G28G	2141000
#define	CPU_DVFS_FREQ7_B_30G28G	1998000
#define	CPU_DVFS_FREQ8_B_30G28G	1820000
#define	CPU_DVFS_FREQ9_B_30G28G	1632000
#define	CPU_DVFS_FREQ10_B_30G28G	1482000
#define	CPU_DVFS_FREQ11_B_30G28G	1370000
#define	CPU_DVFS_FREQ12_B_30G28G	1258000
#define	CPU_DVFS_FREQ13_B_30G28G	1108000
#define	CPU_DVFS_FREQ14_B_30G28G	921000
#define	CPU_DVFS_FREQ15_B_30G28G	659000

#define	CPU_DVFS_FREQ0_CCI_30G28G	1700000
#define	CPU_DVFS_FREQ1_CCI_30G28G	1540000
#define	CPU_DVFS_FREQ2_CCI_30G28G	1400000
#define	CPU_DVFS_FREQ3_CCI_30G28G	1322000
#define	CPU_DVFS_FREQ4_CCI_30G28G	1288000
#define	CPU_DVFS_FREQ5_CCI_30G28G	1255000
#define	CPU_DVFS_FREQ6_CCI_30G28G	1182000
#define	CPU_DVFS_FREQ7_CCI_30G28G	1092000
#define	CPU_DVFS_FREQ8_CCI_30G28G	1021000
#define	CPU_DVFS_FREQ9_CCI_30G28G	949000
#define	CPU_DVFS_FREQ10_CCI_30G28G	895000
#define	CPU_DVFS_FREQ11_CCI_30G28G	824000
#define	CPU_DVFS_FREQ12_CCI_30G28G	770000
#define	CPU_DVFS_FREQ13_CCI_30G28G	716000
#define	CPU_DVFS_FREQ14_CCI_30G28G	627000
#define	CPU_DVFS_FREQ15_CCI_30G28G	520000

#define	CPU_DVFS_VOLT0_VPROC1_30G28G	100000
#define	CPU_DVFS_VOLT1_VPROC1_30G28G	95000
#define	CPU_DVFS_VOLT2_VPROC1_30G28G	93125
#define	CPU_DVFS_VOLT3_VPROC1_30G28G	90625
#define	CPU_DVFS_VOLT4_VPROC1_30G28G	88125
#define	CPU_DVFS_VOLT5_VPROC1_30G28G	86250
#define	CPU_DVFS_VOLT6_VPROC1_30G28G	83750
#define	CPU_DVFS_VOLT7_VPROC1_30G28G	81250
#define	CPU_DVFS_VOLT8_VPROC1_30G28G	76875
#define	CPU_DVFS_VOLT9_VPROC1_30G28G	75000
#define	CPU_DVFS_VOLT10_VPROC1_30G28G	73125
#define	CPU_DVFS_VOLT11_VPROC1_30G28G	71250
#define	CPU_DVFS_VOLT12_VPROC1_30G28G	68750
#define	CPU_DVFS_VOLT13_VPROC1_30G28G	66875
#define	CPU_DVFS_VOLT14_VPROC1_30G28G	65000
#define	CPU_DVFS_VOLT15_VPROC1_30G28G	65000

#define	CPU_DVFS_VOLT0_VPROC2_30G28G	105000
#define	CPU_DVFS_VOLT1_VPROC2_30G28G	103125
#define	CPU_DVFS_VOLT2_VPROC2_30G28G	101250
#define	CPU_DVFS_VOLT3_VPROC2_30G28G	96875
#define	CPU_DVFS_VOLT4_VPROC2_30G28G	92500
#define	CPU_DVFS_VOLT5_VPROC2_30G28G	90000
#define	CPU_DVFS_VOLT6_VPROC2_30G28G	87500
#define	CPU_DVFS_VOLT7_VPROC2_30G28G	85000
#define	CPU_DVFS_VOLT8_VPROC2_30G28G	83125
#define	CPU_DVFS_VOLT9_VPROC2_30G28G	81250
#define	CPU_DVFS_VOLT10_VPROC2_30G28G	78750
#define	CPU_DVFS_VOLT11_VPROC2_30G28G	74375
#define	CPU_DVFS_VOLT12_VPROC2_30G28G	72500
#define	CPU_DVFS_VOLT13_VPROC2_30G28G	69375
#define	CPU_DVFS_VOLT14_VPROC2_30G28G	65000
#define	CPU_DVFS_VOLT15_VPROC2_30G28G	65000

#define	CPU_DVFS_VOLT0_VPROC3_30G28G	105000
#define	CPU_DVFS_VOLT1_VPROC3_30G28G	103125
#define	CPU_DVFS_VOLT2_VPROC3_30G28G	100000
#define	CPU_DVFS_VOLT3_VPROC3_30G28G	98125
#define	CPU_DVFS_VOLT4_VPROC3_30G28G	95625
#define	CPU_DVFS_VOLT5_VPROC3_30G28G	92500
#define	CPU_DVFS_VOLT6_VPROC3_30G28G	90000
#define	CPU_DVFS_VOLT7_VPROC3_30G28G	87500
#define	CPU_DVFS_VOLT8_VPROC3_30G28G	84375
#define	CPU_DVFS_VOLT9_VPROC3_30G28G	81250
#define	CPU_DVFS_VOLT10_VPROC3_30G28G	78750
#define	CPU_DVFS_VOLT11_VPROC3_30G28G	76875
#define	CPU_DVFS_VOLT12_VPROC3_30G28G	75000
#define	CPU_DVFS_VOLT13_VPROC3_30G28G	72500
#define	CPU_DVFS_VOLT14_VPROC3_30G28G	69375
#define	CPU_DVFS_VOLT15_VPROC3_30G28G	65000

#define	CPU_DVFS_VOLT0_VPROC4_30G28G	100000
#define	CPU_DVFS_VOLT1_VPROC4_30G28G	100000
#define	CPU_DVFS_VOLT2_VPROC4_30G28G	100000
#define	CPU_DVFS_VOLT3_VPROC4_30G28G	96875
#define	CPU_DVFS_VOLT4_VPROC4_30G28G	95000
#define	CPU_DVFS_VOLT5_VPROC4_30G28G	93750
#define	CPU_DVFS_VOLT6_VPROC4_30G28G	90625
#define	CPU_DVFS_VOLT7_VPROC4_30G28G	86875
#define	CPU_DVFS_VOLT8_VPROC4_30G28G	83750
#define	CPU_DVFS_VOLT9_VPROC4_30G28G	81250
#define	CPU_DVFS_VOLT10_VPROC4_30G28G	78750
#define	CPU_DVFS_VOLT11_VPROC4_30G28G	75625
#define	CPU_DVFS_VOLT12_VPROC4_30G28G	73750
#define	CPU_DVFS_VOLT13_VPROC4_30G28G	71875
#define	CPU_DVFS_VOLT14_VPROC4_30G28G	68750
#define	CPU_DVFS_VOLT15_VPROC4_30G28G	65000

/* DVFS OPP table */
#define OPP_TBL(cluster, seg, lv, vol)	\
static struct mt_cpu_freq_info opp_tbl_##cluster##_e##lv##_0[] = {        \
	OP                                                                \
(CPU_DVFS_FREQ0_##cluster##_##seg, CPU_DVFS_VOLT0_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ1_##cluster##_##seg, CPU_DVFS_VOLT1_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ2_##cluster##_##seg, CPU_DVFS_VOLT2_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ3_##cluster##_##seg, CPU_DVFS_VOLT3_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ4_##cluster##_##seg, CPU_DVFS_VOLT4_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ5_##cluster##_##seg, CPU_DVFS_VOLT5_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ6_##cluster##_##seg, CPU_DVFS_VOLT6_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ7_##cluster##_##seg, CPU_DVFS_VOLT7_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ8_##cluster##_##seg, CPU_DVFS_VOLT8_VPROC##vol##_##seg),   \
	OP                                                               \
(CPU_DVFS_FREQ9_##cluster##_##seg, CPU_DVFS_VOLT9_VPROC##vol##_##seg),   \
	OP                                                                \
(CPU_DVFS_FREQ10_##cluster##_##seg, CPU_DVFS_VOLT10_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ11_##cluster##_##seg, CPU_DVFS_VOLT11_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ12_##cluster##_##seg, CPU_DVFS_VOLT12_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ13_##cluster##_##seg, CPU_DVFS_VOLT13_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ14_##cluster##_##seg, CPU_DVFS_VOLT14_VPROC##vol##_##seg), \
	OP                                                               \
(CPU_DVFS_FREQ15_##cluster##_##seg, CPU_DVFS_VOLT15_VPROC##vol##_##seg), \
}

OPP_TBL(LL, 26G26G, 0, 1);
OPP_TBL(L, 26G26G, 0, 2);
OPP_TBL(B, 26G26G, 0, 3);
OPP_TBL(CCI, 26G26G, 0, 4);

OPP_TBL(LL, 30G26G, 1, 1);
OPP_TBL(L, 30G26G, 1, 2);
OPP_TBL(B, 30G26G, 1, 3);
OPP_TBL(CCI, 30G26G, 1, 4);

OPP_TBL(LL, 30G28G, 2, 1);
OPP_TBL(L, 30G28G, 2, 2);
OPP_TBL(B, 30G28G, 2, 3);
OPP_TBL(CCI, 30G28G, 2, 4);

static struct opp_tbl_info opp_tbls[NR_MT_CPU_DVFS][NUM_CPU_LEVEL] = {
	/* LL */
	{
		[CPU_LEVEL_0] = { opp_tbl_LL_e0_0,
			ARRAY_SIZE(opp_tbl_LL_e0_0) },
		[CPU_LEVEL_1] = { opp_tbl_LL_e1_0,
			ARRAY_SIZE(opp_tbl_LL_e0_0) },
		[CPU_LEVEL_2] = { opp_tbl_LL_e2_0,
			ARRAY_SIZE(opp_tbl_LL_e0_0) },
	},
	/* L */
	{
		[CPU_LEVEL_0] = { opp_tbl_L_e0_0,
			ARRAY_SIZE(opp_tbl_L_e0_0) },
		[CPU_LEVEL_1] = { opp_tbl_L_e1_0,
			ARRAY_SIZE(opp_tbl_L_e1_0) },
		[CPU_LEVEL_2] = { opp_tbl_L_e2_0,
			ARRAY_SIZE(opp_tbl_L_e2_0) },
	},
	/* B */
	{
		[CPU_LEVEL_0] = { opp_tbl_B_e0_0,
			ARRAY_SIZE(opp_tbl_B_e0_0) },
		[CPU_LEVEL_1] = { opp_tbl_B_e1_0,
			ARRAY_SIZE(opp_tbl_B_e1_0) },
		[CPU_LEVEL_2] = { opp_tbl_B_e2_0,
			ARRAY_SIZE(opp_tbl_B_e2_0) },
	},
	/* CCI */
	{
		[CPU_LEVEL_0] = { opp_tbl_CCI_e0_0,
			ARRAY_SIZE(opp_tbl_CCI_e0_0) },
		[CPU_LEVEL_1] = { opp_tbl_CCI_e1_0,
			ARRAY_SIZE(opp_tbl_CCI_e1_0) },
		[CPU_LEVEL_2] = { opp_tbl_CCI_e2_0,
			ARRAY_SIZE(opp_tbl_CCI_e2_0) },
	},
};

/* 16 steps OPP table */

static struct mt_cpu_freq_method opp_tbl_method_LL_26G26G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_L_26G26G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_B_26G26G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_CCI_26G26G[] = {
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_LL_30G26G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_L_30G26G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_B_30G26G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_CCI_30G26G[] = {
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_LL_30G28G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_L_30G28G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_B_30G28G[] = {
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
};

static struct mt_cpu_freq_method opp_tbl_method_CCI_30G28G[] = {
	FP(1,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(2,  1),
	FP(4,  1),
	FP(4,  1),
	FP(4,  1),
};

struct opp_tbl_m_info opp_tbls_m[NR_MT_CPU_DVFS][NUM_CPU_LEVEL] = {
	/* LL */
	{
		[CPU_LEVEL_0] = { opp_tbl_method_LL_26G26G },
		[CPU_LEVEL_1] = { opp_tbl_method_LL_30G26G },
		[CPU_LEVEL_2] = { opp_tbl_method_LL_30G28G },
	},
	/* L */
	{
		[CPU_LEVEL_0] = { opp_tbl_method_L_26G26G },
		[CPU_LEVEL_1] = { opp_tbl_method_L_30G26G },
		[CPU_LEVEL_2] = { opp_tbl_method_L_30G28G },
	},
	/* B */
	{
		[CPU_LEVEL_0] = { opp_tbl_method_B_26G26G },
		[CPU_LEVEL_1] = { opp_tbl_method_B_30G26G },
		[CPU_LEVEL_2] = { opp_tbl_method_B_30G28G },
	},
	/* CCI */
	{
		[CPU_LEVEL_0] = { opp_tbl_method_CCI_26G26G },
		[CPU_LEVEL_1] = { opp_tbl_method_CCI_30G26G },
		[CPU_LEVEL_2] = { opp_tbl_method_CCI_30G28G },
	},
};
