/* Function at 0x806D7010, size=464 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806D7010(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x806D7018
    *(0x18 + r1) = r30; // stw @ 0x806D7024
    *(0x14 + r1) = r29; // stw @ 0x806D7028
    r3 = *(0 + r3); // lwz @ 0x806D702C
    r3 = *(0 + r3); // lwz @ 0x806D7030
    r30 = *(0x2a4 + r3); // lwz @ 0x806D7034
    if (!=) goto 0x0x806d7048;
    /* li r30, 0 */ // 0x806D7040
    /* b 0x806d709c */ // 0x806D7044
    /* lis r29, 0 */ // 0x806D7048
    r29 = r29 + 0; // 0x806D704C
    if (==) goto 0x0x806d7098;
    r12 = *(0 + r30); // lwz @ 0x806D7054
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D705C
    /* mtctr r12 */ // 0x806D7060
    /* bctrl  */ // 0x806D7064
    /* b 0x806d7080 */ // 0x806D7068
    if (!=) goto 0x0x806d707c;
    /* li r0, 1 */ // 0x806D7074
    /* b 0x806d708c */ // 0x806D7078
    r3 = *(0 + r3); // lwz @ 0x806D707C
    if (!=) goto 0x0x806d706c;
    /* li r0, 0 */ // 0x806D7088
    if (==) goto 0x0x806d7098;
    /* b 0x806d709c */ // 0x806D7094
    /* li r30, 0 */ // 0x806D7098
    r3 = r30;
    FUN_8065FA90(r3); // bl 0x8065FA90
    /* li r29, 1 */ // 0x806D70A4
    /* lis r3, 0 */ // 0x806D70A8
    /* mulli r29, r29, 0xf0 */ // 0x806D70AC
    r5 = *(0 + r3); // lwz @ 0x806D70B0
    /* li r31, 2 */ // 0x806D70B4
    /* li r11, 3 */ // 0x806D70B8
    r5 = r5 + r29; // 0x806D70BC
    /* li r30, 5 */ // 0x806D70C0
    *(0xc28 + r5) = r30; // stw @ 0x806D70C4
    /* mulli r12, r31, 0xf0 */ // 0x806D70C8
    /* li r9, 4 */ // 0x806D70CC
    r7 = *(0 + r3); // lwz @ 0x806D70D0
    /* li r29, 6 */ // 0x806D70D4
    /* mulli r10, r11, 0xf0 */ // 0x806D70D8
    /* li r4, 0xb */ // 0x806D70DC
    r7 = r7 + r12; // 0x806D70E0
    *(0xc28 + r7) = r30; // stw @ 0x806D70E4
    /* li r31, 7 */ // 0x806D70E8
    /* mulli r8, r9, 0xf0 */ // 0x806D70EC
    r12 = *(0 + r3); // lwz @ 0x806D70F0
    /* li r7, 0xa */ // 0x806D70F4
    /* li r11, 8 */ // 0x806D70F8
    r10 = r12 + r10; // 0x806D70FC
    /* li r9, 9 */ // 0x806D7100
    *(0xc28 + r10) = r30; // stw @ 0x806D7104
    /* mulli r5, r30, 0xf0 */ // 0x806D7108
    /* li r6, 2 */ // 0x806D710C
    r10 = *(0 + r3); // lwz @ 0x806D7110
    /* li r0, 0 */ // 0x806D7114
    /* mulli r29, r29, 0xf0 */ // 0x806D7118
    r8 = r10 + r8; // 0x806D711C
    *(0xc28 + r8) = r30; // stw @ 0x806D7120
    /* mulli r12, r31, 0xf0 */ // 0x806D7124
    r8 = *(0 + r3); // lwz @ 0x806D7128
    r5 = r8 + r5; // 0x806D712C
    *(0xc28 + r5) = r30; // stw @ 0x806D7130
    /* mulli r10, r11, 0xf0 */ // 0x806D7134
    r5 = *(0 + r3); // lwz @ 0x806D7138
    /* mulli r8, r9, 0xf0 */ // 0x806D713C
    r5 = r5 + r29; // 0x806D7140
    *(0xc28 + r5) = r30; // stw @ 0x806D7144
    /* mulli r5, r7, 0xf0 */ // 0x806D7148
    r7 = *(0 + r3); // lwz @ 0x806D714C
    r7 = r7 + r12; // 0x806D7150
    *(0xc28 + r7) = r30; // stw @ 0x806D7154
    /* mulli r4, r4, 0xf0 */ // 0x806D7158
    r12 = *(0 + r3); // lwz @ 0x806D715C
    r10 = r12 + r10; // 0x806D7160
    *(0xc28 + r10) = r30; // stw @ 0x806D7164
    r10 = *(0 + r3); // lwz @ 0x806D7168
    r8 = r10 + r8; // 0x806D716C
    *(0xc28 + r8) = r30; // stw @ 0x806D7170
    r8 = *(0 + r3); // lwz @ 0x806D7174
    r5 = r8 + r5; // 0x806D7178
    *(0xc28 + r5) = r30; // stw @ 0x806D717C
    r5 = *(0 + r3); // lwz @ 0x806D7180
    r4 = r5 + r4; // 0x806D7184
    *(0xc28 + r4) = r30; // stw @ 0x806D7188
    r4 = *(0 + r3); // lwz @ 0x806D718C
    *(0x175c + r4) = r6; // stw @ 0x806D7190
    r5 = *(0 + r3); // lwz @ 0x806D7194
    r4 = *(0x1780 + r5); // lwz @ 0x806D7198
    r4 = r4 rlwinm 0; // rlwinm
    *(0x1780 + r5) = r4; // stw @ 0x806D71A0
    r4 = *(0 + r3); // lwz @ 0x806D71A4
    *(0x1764 + r4) = r0; // stw @ 0x806D71A8
    r4 = *(0 + r3); // lwz @ 0x806D71AC
    *(0x1760 + r4) = r6; // stw @ 0x806D71B0
    r3 = *(0 + r3); // lwz @ 0x806D71B4
    r0 = *(0x1780 + r3); // lwz @ 0x806D71B8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806D71C0
    r31 = *(0x1c + r1); // lwz @ 0x806D71C4
    r30 = *(0x18 + r1); // lwz @ 0x806D71C8
    r29 = *(0x14 + r1); // lwz @ 0x806D71CC
    r0 = *(0x24 + r1); // lwz @ 0x806D71D0
    return;
}