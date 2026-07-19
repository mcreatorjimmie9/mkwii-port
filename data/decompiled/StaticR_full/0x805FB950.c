/* Function at 0x805FB950, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_805FB950(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FB95C
    r31 = r3;
    r12 = *(0xc + r3); // lwz @ 0x805FB964
    r12 = *(0x58 + r12); // lwz @ 0x805FB968
    /* mtctr r12 */ // 0x805FB96C
    /* bctrl  */ // 0x805FB970
    r3 = r31;
    FUN_8061E160(r3); // bl 0x8061E160
    r6 = r3;
    r3 = r31;
    r4 = r31 + 0x168; // 0x805FB984
    r5 = r31 + 0x198; // 0x805FB988
    r6 = r6 + 0x20; // 0x805FB98C
    FUN_80620474(r6, r3, r4, r5, r6); // bl 0x80620474
    r3 = r31;
    FUN_8061E2E8(r4, r5, r6, r3); // bl 0x8061E2E8
    if (!=) goto 0x0x805fb9b4;
    r3 = r31;
    FUN_8061E188(r3, r3); // bl 0x8061E188
    r0 = r3 + 4; // 0x805FB9AC
    /* b 0x805fb9c0 */ // 0x805FB9B0
    r3 = r31;
    FUN_8061E198(r3, r3); // bl 0x8061E198
    r0 = r3 + 4; // 0x805FB9BC
    *(0x230 + r31) = r0; // stw @ 0x805FB9C0
    r3 = r31;
    FUN_8061E2E8(r3, r3); // bl 0x8061E2E8
    if (!=) goto 0x0x805fb9e4;
    r3 = r31;
    FUN_8061E188(r3, r3); // bl 0x8061E188
    r0 = r3 + 8; // 0x805FB9DC
    /* b 0x805fb9f0 */ // 0x805FB9E0
    r3 = r31;
    FUN_8061E198(r3, r3); // bl 0x8061E198
    r0 = r3 + 8; // 0x805FB9EC
    *(0x234 + r31) = r0; // stw @ 0x805FB9F0
    r31 = *(0xc + r1); // lwz @ 0x805FB9F4
    r0 = *(0x14 + r1); // lwz @ 0x805FB9F8
    return;
}