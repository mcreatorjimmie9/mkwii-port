/* Function at 0x80739DE0, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80739DE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80739DE8
    /* li r0, 1 */ // 0x80739DF0
    *(0xc + r1) = r31; // stw @ 0x80739DF4
    *(8 + r1) = r30; // stw @ 0x80739DF8
    r30 = r3;
    *(0x68 + r3) = r0; // stb @ 0x80739E00
    r4 = *(0 + r4); // lwz @ 0x80739E04
    r0 = *(0x10 + r4); // lbz @ 0x80739E08
    if (!=) goto 0x0x80739e74;
    r0 = *(4 + r3); // lbz @ 0x80739E14
    if (!=) goto 0x0x80739e74;
    r0 = *(0x96 + r3); // lbz @ 0x80739E20
    if (==) goto 0x0x80739e30;
    /* b 0x80739e74 */ // 0x80739E2C
    r31 = *(0x238 + r3); // lwz @ 0x80739E30
    if (==) goto 0x0x80739e74;
    r12 = *(0 + r31); // lwz @ 0x80739E3C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80739E44
    /* mtctr r12 */ // 0x80739E48
    /* bctrl  */ // 0x80739E4C
    r0 = *(0xb0 + r30); // lbz @ 0x80739E50
    if (==) goto 0x0x80739e74;
    r12 = *(0 + r31); // lwz @ 0x80739E5C
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80739E64
    r12 = *(0x70 + r12); // lwz @ 0x80739E68
    /* mtctr r12 */ // 0x80739E6C
    /* bctrl  */ // 0x80739E70
    r0 = *(0x14 + r1); // lwz @ 0x80739E74
    r31 = *(0xc + r1); // lwz @ 0x80739E78
    r30 = *(8 + r1); // lwz @ 0x80739E7C
    return;
}