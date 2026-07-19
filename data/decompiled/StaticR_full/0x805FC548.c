/* Function at 0x805FC548, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805FC548(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805FC558
    r30 = r3;
    FUN_806206D8(); // bl 0x806206D8
    r0 = *(0x228 + r30); // lbz @ 0x805FC564
    if (!=) goto 0x0x805fc5a8;
    /* li r31, 0 */ // 0x805FC570
    /* b 0x805fc598 */ // 0x805FC574
    r3 = *(0x238 + r30); // lwz @ 0x805FC578
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805FC580
    r12 = *(0xc + r3); // lwz @ 0x805FC584
    r12 = *(0x2c + r12); // lwz @ 0x805FC588
    /* mtctr r12 */ // 0x805FC58C
    /* bctrl  */ // 0x805FC590
    r31 = r31 + 1; // 0x805FC594
    r0 = *(0x23c + r30); // lhz @ 0x805FC598
    /* clrlwi r3, r31, 0x18 */ // 0x805FC59C
    if (<) goto 0x0x805fc578;
    r0 = *(0x14 + r1); // lwz @ 0x805FC5A8
    r31 = *(0xc + r1); // lwz @ 0x805FC5AC
    r30 = *(8 + r1); // lwz @ 0x805FC5B0
    return;
}