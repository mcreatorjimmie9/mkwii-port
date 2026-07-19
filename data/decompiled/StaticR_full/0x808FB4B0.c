/* Function at 0x808FB4B0, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808FB4B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x808FB4BC
    *(0x14 + r1) = r0; // stw @ 0x808FB4C0
    *(0xc + r1) = r31; // stw @ 0x808FB4C4
    r31 = r3;
    if (==) goto 0x0x808fb4e0;
    r0 = *(0x31c + r3); // lbz @ 0x808FB4D0
    if (!=) goto 0x0x808fb4e0;
    /* li r4, 1 */ // 0x808FB4DC
    FUN_808A1C4C(r4); // bl 0x808A1C4C
    r0 = *(0xb0 + r31); // lbz @ 0x808FB4E4
    if (!=) goto 0x0x808fb508;
    r3 = *(8 + r31); // lwz @ 0x808FB4F0
    /* li r4, 0 */ // 0x808FB4F4
    r12 = *(0 + r3); // lwz @ 0x808FB4F8
    r12 = *(0xc + r12); // lwz @ 0x808FB4FC
    /* mtctr r12 */ // 0x808FB500
    /* bctrl  */ // 0x808FB504
    r0 = *(0x14 + r1); // lwz @ 0x808FB508
    r31 = *(0xc + r1); // lwz @ 0x808FB50C
    return;
}