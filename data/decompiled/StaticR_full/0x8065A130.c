/* Function at 0x8065A130, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8065A130(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8065A13C
    r31 = r3;
    r0 = *(8 + r3); // lbz @ 0x8065A144
    if (==) goto 0x0x8065a168;
    r12 = *(0 + r3); // lwz @ 0x8065A150
    r12 = *(0x14 + r12); // lwz @ 0x8065A154
    /* mtctr r12 */ // 0x8065A158
    /* bctrl  */ // 0x8065A15C
    /* li r0, 0 */ // 0x8065A160
    *(8 + r31) = r0; // stb @ 0x8065A164
    r0 = *(0x14 + r1); // lwz @ 0x8065A168
    r31 = *(0xc + r1); // lwz @ 0x8065A16C
    return;
}