/* Function at 0x806F6070, size=236 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806F6070(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    *(0xec + r1) = r31; // stw @ 0x806F607C
    r31 = r3;
    FUN_805ABFC4(r3); // bl 0x805ABFC4
    r4 = *(0xc0 + r1); // lwz @ 0x806F608C
    if (<) goto 0x0x806f6168;
    if (>=) goto 0x0x806f6168;
    r0 = *(0xcc + r1); // lwz @ 0x806F60A0
    if (==) goto 0x0x806f60b8;
    if (==) goto 0x0x806f60f8;
    /* b 0x806f6168 */ // 0x806F60B4
    r3 = *(0xb0 + r1); // lhz @ 0x806F60B8
    /* mulli r0, r4, 0xa8 */ // 0x806F60BC
    r6 = *(0xb2 + r1); // lbz @ 0x806F60C0
    /* addis r4, r31, 1 */ // 0x806F60C4
    r7 = *(0xb4 + r1); // lhz @ 0x806F60C8
    /* mulli r5, r3, 0x3c */ // 0x806F60CC
    r3 = r4 + r0; // 0x806F60D0
    r0 = r6 + r5; // 0x806F60D4
    /* mulli r0, r0, 0x3e8 */ // 0x806F60D8
    r0 = r7 + r0; // 0x806F60DC
    *(-0x74fc + r3) = r0; // stw @ 0x806F60E0
    r0 = *(0xc0 + r1); // lwz @ 0x806F60E4
    /* mulli r0, r0, 0xa8 */ // 0x806F60E8
    r3 = r4 + r0; // 0x806F60EC
    r31 = r3 + -0x74f8; // 0x806F60F0
    /* b 0x806f6134 */ // 0x806F60F4
    r3 = *(0xb0 + r1); // lhz @ 0x806F60F8
    /* mulli r0, r4, 0xa8 */ // 0x806F60FC
    r6 = *(0xb2 + r1); // lbz @ 0x806F6100
    /* addis r4, r31, 1 */ // 0x806F6104
    r7 = *(0xb4 + r1); // lhz @ 0x806F6108
    /* mulli r5, r3, 0x3c */ // 0x806F610C
    r3 = r4 + r0; // 0x806F6110
    r0 = r6 + r5; // 0x806F6114
    /* mulli r0, r0, 0x3e8 */ // 0x806F6118
    r0 = r7 + r0; // 0x806F611C
    *(-0x74a8 + r3) = r0; // stw @ 0x806F6120
    r0 = *(0xc0 + r1); // lwz @ 0x806F6124
    /* mulli r0, r0, 0xa8 */ // 0x806F6128
    r3 = r4 + r0; // 0x806F612C
    r31 = r3 + -0x74a4; // 0x806F6130
    r3 = r31;
    /* li r5, 0x4c */ // 0x806F613C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r0 = *(0xc4 + r1); // lwz @ 0x806F6144
    *(0x4c + r31) = r0; // stb @ 0x806F6148
    r0 = *(0xb8 + r1); // lwz @ 0x806F614C
    *(0x4d + r31) = r0; // stb @ 0x806F6150
    r0 = *(0xbc + r1); // lwz @ 0x806F6154
    *(0x4e + r31) = r0; // stb @ 0x806F6158
}