/* Function at 0x80760DE8, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80760DE8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80760DF4
    r31 = r3;
    FUN_807617CC(); // bl 0x807617CC
    r0 = *(0x136 + r31); // lbz @ 0x80760E00
    if (==) goto 0x0x80760e14;
    r3 = r31;
    FUN_80760FD0(r3); // bl 0x80760FD0
    r0 = *(0x13c + r31); // lbz @ 0x80760E14
    if (==) goto 0x0x80760e28;
    r3 = r31;
    FUN_80761180(r3); // bl 0x80761180
    r0 = *(0x144 + r31); // lbz @ 0x80760E28
    if (==) goto 0x0x80760e3c;
    r3 = r31;
    FUN_807613C8(r3); // bl 0x807613C8
    r0 = *(0x14 + r1); // lwz @ 0x80760E3C
    r31 = *(0xc + r1); // lwz @ 0x80760E40
    return;
}