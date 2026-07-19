/* Function at 0x808E4F74, size=536 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808E4F74(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808E4F88
    *(0x14 + r1) = r29; // stw @ 0x808E4F8C
    r0 = *(8 + r3); // lwz @ 0x808E4F90
    if (!=) goto 0x0x808e5170;
    /* lis r4, 0 */ // 0x808E4F9C
    r4 = *(0 + r4); // lwz @ 0x808E4FA0
    r4 = *(0 + r4); // lwz @ 0x808E4FA4
    r0 = *(0 + r4); // lwz @ 0x808E4FA8
    if (!=) goto 0x0x808e5040;
    r29 = *(0x1754 + r3); // lwz @ 0x808E4FB4
    if (!=) goto 0x0x808e4fc8;
    /* li r29, 0 */ // 0x808E4FC0
    /* b 0x808e501c */ // 0x808E4FC4
    /* lis r30, 0 */ // 0x808E4FC8
    r30 = r30 + 0; // 0x808E4FCC
    if (==) goto 0x0x808e5018;
    r12 = *(0 + r29); // lwz @ 0x808E4FD4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E4FDC
    /* mtctr r12 */ // 0x808E4FE0
    /* bctrl  */ // 0x808E4FE4
    /* b 0x808e5000 */ // 0x808E4FE8
    if (!=) goto 0x0x808e4ffc;
    /* li r0, 1 */ // 0x808E4FF4
    /* b 0x808e500c */ // 0x808E4FF8
    r3 = *(0 + r3); // lwz @ 0x808E4FFC
    if (!=) goto 0x0x808e4fec;
    /* li r0, 0 */ // 0x808E5008
    if (==) goto 0x0x808e5018;
    /* b 0x808e501c */ // 0x808E5014
    /* li r29, 0 */ // 0x808E5018
    r0 = *(0x270 + r29); // lwz @ 0x808E501C
    if (!=) goto 0x0x808e5170;
    /* lis r4, 0 */ // 0x808E5028
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808E5030
    /* li r4, 0x41 */ // 0x808E5034
    FUN_808B40AC(r4, r3, r4); // bl 0x808B40AC
    /* b 0x808e5170 */ // 0x808E503C
    r3 = r0;
    FUN_808CF8D8(r4, r3); // bl 0x808CF8D8
    if (==) goto 0x0x808e5170;
    r4 = *(0x1758 + r31); // lwz @ 0x808E5050
    if (==) goto 0x0x808e5088;
    /* lis r3, 0 */ // 0x808E505C
    /* lfs f1, 0(r4) */ // 0x808E5060
    /* lfs f0, 0(r3) */ // 0x808E5064
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808E5068
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808E506C
    /* mfcr r0 */ // 0x808E5070
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808E5074
    if (==) goto 0x0x808e5088;
    /* li r0, 0 */ // 0x808E507C
    *(0x1754 + r31) = r0; // stw @ 0x808E5080
    /* b 0x808e5170 */ // 0x808E5084
    r30 = *(0x1754 + r31); // lwz @ 0x808E5088
    if (!=) goto 0x0x808e509c;
    /* li r30, 0 */ // 0x808E5094
    /* b 0x808e50f0 */ // 0x808E5098
    /* lis r29, 0 */ // 0x808E509C
    r29 = r29 + 0; // 0x808E50A0
    if (==) goto 0x0x808e50ec;
    r12 = *(0 + r30); // lwz @ 0x808E50A8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E50B0
    /* mtctr r12 */ // 0x808E50B4
    /* bctrl  */ // 0x808E50B8
    /* b 0x808e50d4 */ // 0x808E50BC
    if (!=) goto 0x0x808e50d0;
    /* li r0, 1 */ // 0x808E50C8
    /* b 0x808e50e0 */ // 0x808E50CC
    r3 = *(0 + r3); // lwz @ 0x808E50D0
    if (!=) goto 0x0x808e50c0;
    /* li r0, 0 */ // 0x808E50DC
    if (==) goto 0x0x808e50ec;
    /* b 0x808e50f0 */ // 0x808E50E8
    /* li r30, 0 */ // 0x808E50EC
    r0 = *(0x270 + r30); // lwz @ 0x808E50F0
    if (==) goto 0x0x808e5108;
    if (==) goto 0x0x808e514c;
    /* b 0x808e5168 */ // 0x808E5104
    r3 = *(0x424 + r31); // lwz @ 0x808E5108
    if (!=) goto 0x0x808e511c;
    /* li r0, -1 */ // 0x808E5114
    /* b 0x808e5124 */ // 0x808E5118
    r0 = *(0x20 + r31); // lwz @ 0x808E511C
    /* subf r0, r3, r0 */ // 0x808E5120
    if (!=) goto 0x0x808e5168;
    /* lis r5, 0 */ // 0x808E512C
    r3 = r31;
    r0 = *(0 + r5); // lwz @ 0x808E5134
    *(8 + r1) = r0; // stw @ 0x808E513C
    /* li r5, 1 */ // 0x808E5140
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* b 0x808e5168 */ // 0x808E5148
    /* lis r4, 0 */ // 0x808E514C
    /* li r0, -1 */ // 0x808E5150
    /* lfs f1, 0(r4) */ // 0x808E5154
    r3 = r31;
    *(0x3e8 + r31) = r0; // stw @ 0x808E515C
    /* li r4, 0 */ // 0x808E5160
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 0 */ // 0x808E5168
    *(0x1754 + r31) = r0; // stw @ 0x808E516C
    r0 = *(0x24 + r1); // lwz @ 0x808E5170
    r31 = *(0x1c + r1); // lwz @ 0x808E5174
    r30 = *(0x18 + r1); // lwz @ 0x808E5178
    r29 = *(0x14 + r1); // lwz @ 0x808E517C
    return;
}