/* Function at 0x806219B0, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806219B0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806219C0
    r30 = r3;
    FUN_80621A38(); // bl 0x80621A38
    if (==) goto 0x0x80621a20;
    r3 = *(0x14 + r30); // lwz @ 0x806219D4
    r3 = *(0 + r3); // lwz @ 0x806219D8
    r0 = *(0 + r3); // lhz @ 0x806219DC
    if (<=) goto 0x0x80621a20;
    /* li r31, 0 */ // 0x806219E8
    /* b 0x80621a10 */ // 0x806219EC
    r3 = *(0x34 + r30); // lwz @ 0x806219F0
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x806219F8
    r12 = *(0xc + r3); // lwz @ 0x806219FC
    r12 = *(0xc + r12); // lwz @ 0x80621A00
    /* mtctr r12 */ // 0x80621A04
    /* bctrl  */ // 0x80621A08
    r31 = r31 + 1; // 0x80621A0C
    r0 = *(0x30 + r30); // lbz @ 0x80621A10
    /* clrlwi r3, r31, 0x18 */ // 0x80621A14
    if (<) goto 0x0x806219f0;
    r0 = *(0x14 + r1); // lwz @ 0x80621A20
    r31 = *(0xc + r1); // lwz @ 0x80621A24
    r30 = *(8 + r1); // lwz @ 0x80621A28
    return;
}