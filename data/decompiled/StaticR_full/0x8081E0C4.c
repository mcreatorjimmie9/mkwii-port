/* Function at 0x8081E0C4, size=308 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8081E0C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x8081E0CC
    *(0x28 + r1) = r30; // stw @ 0x8081E0D8
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8081E0E0
    r29 = r3;
    r6 = *(0x50 + r3); // lwz @ 0x8081E0E8
    r0 = r6 + -1; // 0x8081E0EC
    *(0x50 + r3) = r0; // stw @ 0x8081E0F0
    /* slwi r0, r0, 2 */ // 0x8081E0F4
    r4 = r3 + r0; // 0x8081E0F8
    r3 = *(0 + r5); // lwz @ 0x8081E0FC
    r31 = *(0x20 + r4); // lwz @ 0x8081E100
    r0 = *(4 + r31); // lwz @ 0x8081E104
    r4 = r31;
    /* mulli r0, r0, 0x24 */ // 0x8081E10C
    r3 = r3 + r0; // 0x8081E110
    r3 = r3 + 0x48; // 0x8081E114
    FUN_80821284(r4, r3); // bl 0x80821284
    r3 = *(0xc + r29); // lwz @ 0x8081E11C
    r4 = r31;
    FUN_80823984(r3, r4); // bl 0x80823984
    r0 = *(0x78 + r31); // lwz @ 0x8081E128
    r3 = r31;
    r4 = r29;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r31) = r0; // stw @ 0x8081E138
    r12 = *(0 + r31); // lwz @ 0x8081E13C
    r12 = *(0x20 + r12); // lwz @ 0x8081E140
    /* mtctr r12 */ // 0x8081E144
    /* bctrl  */ // 0x8081E148
    if (!=) goto 0x0x8081e160;
    r0 = *(0x78 + r31); // lwz @ 0x8081E154
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r31) = r0; // stw @ 0x8081E15C
    if (!=) goto 0x0x8081e184;
    r3 = *(0xc + r29); // lwz @ 0x8081E168
    r0 = *(0x239 + r3); // lbz @ 0x8081E16C
    if (==) goto 0x0x8081e184;
    r0 = *(0x78 + r31); // lwz @ 0x8081E178
    r0 = r0 | 0x10; // 0x8081E17C
    *(0x78 + r31) = r0; // stw @ 0x8081E180
    r3 = *(0x14 + r29); // lwz @ 0x8081E184
    /* lis r4, 0 */ // 0x8081E188
    r0 = *(0x78 + r31); // lwz @ 0x8081E18C
    r4 = r4 + 0; // 0x8081E190
    /* mulli r3, r3, 0x74 */ // 0x8081E194
    /* rlwinm. r0, r0, 0, 0x18, 0x19 */ // 0x8081E198
    r5 = r4 + r3; // 0x8081E19C
    r4 = *(0x18 + r5); // lwz @ 0x8081E1A0
    r3 = *(0x1c + r5); // lwz @ 0x8081E1A4
    r0 = *(0x20 + r5); // lwz @ 0x8081E1A8
    *(8 + r1) = r4; // stw @ 0x8081E1AC
    *(0xc + r1) = r3; // stw @ 0x8081E1B0
    *(0x10 + r1) = r0; // stw @ 0x8081E1B4
    if (!=) goto 0x0x8081e1c8;
    *(0x168 + r31) = r4; // stw @ 0x8081E1BC
    *(0x16c + r31) = r3; // stw @ 0x8081E1C0
    *(0x170 + r31) = r0; // stw @ 0x8081E1C4
    if (==) goto 0x0x8081e1dc;
    r3 = *(0xc + r29); // lwz @ 0x8081E1D0
    r4 = r31;
    FUN_808239BC(r4); // bl 0x808239BC
    r0 = *(0x34 + r1); // lwz @ 0x8081E1DC
    r31 = *(0x2c + r1); // lwz @ 0x8081E1E0
    r30 = *(0x28 + r1); // lwz @ 0x8081E1E4
    r29 = *(0x24 + r1); // lwz @ 0x8081E1E8
    return;
}