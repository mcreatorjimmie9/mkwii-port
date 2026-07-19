/* Function at 0x8079A084, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8079A084(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8079A090
    *(0xc + r1) = r31; // stw @ 0x8079A094
    r31 = r3;
    if (!=) goto 0x0x8079a0bc;
    r12 = *(0 + r3); // lwz @ 0x8079A0A0
    /* lis r5, 0 */ // 0x8079A0A4
    /* lfs f1, 0(r5) */ // 0x8079A0A8
    r12 = *(0xe0 + r12); // lwz @ 0x8079A0AC
    /* mtctr r12 */ // 0x8079A0B0
    /* bctrl  */ // 0x8079A0B4
    /* b 0x8079a0d4 */ // 0x8079A0B8
    r12 = *(0 + r3); // lwz @ 0x8079A0BC
    /* lis r5, 0 */ // 0x8079A0C0
    /* lfs f1, 0(r5) */ // 0x8079A0C4
    r12 = *(0xe4 + r12); // lwz @ 0x8079A0C8
    /* mtctr r12 */ // 0x8079A0CC
    /* bctrl  */ // 0x8079A0D0
    if (==) goto 0x0x8079a0f0;
    r0 = *(0xf4 + r31); // lwz @ 0x8079A0DC
    if (==) goto 0x0x8079a0f0;
    r4 = r0 | 1; // 0x8079A0E8
    FUN_807A027C(); // bl 0x807A027C
    r0 = *(0x14 + r1); // lwz @ 0x8079A0F0
    r31 = *(0xc + r1); // lwz @ 0x8079A0F4
    return;
}