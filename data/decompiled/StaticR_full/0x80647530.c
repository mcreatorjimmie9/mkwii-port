/* Function at 0x80647530, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80647530(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8064753C
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x80647544
    if (==) goto 0x0x80647560;
    r3 = *(0x14 + r3); // lwz @ 0x80647550
    FUN_808E1528(); // bl 0x808E1528
    r3 = *(0x18 + r31); // lwz @ 0x80647558
    FUN_808E3D84(); // bl 0x808E3D84
    r3 = *(0x1c + r31); // lwz @ 0x80647560
    if (==) goto 0x0x80647570;
    FUN_808E0370(); // bl 0x808E0370
    r0 = *(0x14 + r1); // lwz @ 0x80647570
    r31 = *(0xc + r1); // lwz @ 0x80647574
    return;
}