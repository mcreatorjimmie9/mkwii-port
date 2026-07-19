/* Function at 0x80909EA0, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80909EA0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x80909EB4
    *(0x14 + r1) = r29; // stw @ 0x80909EB8
    r29 = r3;
    /* b 0x80909f00 */ // 0x80909EC0
    r0 = r30 rlwinm 2; // rlwinm
    r31 = r29 + r0; // 0x80909EC8
    r3 = *(0x1fa8 + r31); // lwz @ 0x80909ECC
    if (==) goto 0x0x80909efc;
    r12 = *(0 + r3); // lwz @ 0x80909ED8
    r12 = *(0x14 + r12); // lwz @ 0x80909EDC
    /* mtctr r12 */ // 0x80909EE0
    /* bctrl  */ // 0x80909EE4
    r3 = *(0x1fa8 + r31); // lwz @ 0x80909EE8
    r12 = *(0 + r3); // lwz @ 0x80909EEC
    r12 = *(0x1c + r12); // lwz @ 0x80909EF0
    /* mtctr r12 */ // 0x80909EF4
    /* bctrl  */ // 0x80909EF8
    r30 = r30 + 1; // 0x80909EFC
    r0 = *(0x1fa4 + r29); // lbz @ 0x80909F00
    /* clrlwi r3, r30, 0x18 */ // 0x80909F04
    /* extsb r0, r0 */ // 0x80909F08
    if (<) goto 0x0x80909ec4;
    r0 = *(0x24 + r1); // lwz @ 0x80909F14
    r31 = *(0x1c + r1); // lwz @ 0x80909F18
    r30 = *(0x18 + r1); // lwz @ 0x80909F1C
    r29 = *(0x14 + r1); // lwz @ 0x80909F20
    return;
}