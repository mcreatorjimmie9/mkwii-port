/* Function at 0x807619C8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807619C8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807619D4
    r31 = r3;
    r0 = *(0x136 + r3); // lbz @ 0x807619DC
    if (==) goto 0x0x807619ec;
    FUN_80760FD0(); // bl 0x80760FD0
    r0 = *(0x13c + r31); // lbz @ 0x807619EC
    if (==) goto 0x0x80761a00;
    r3 = r31;
    FUN_80761180(r3); // bl 0x80761180
    r0 = *(0x144 + r31); // lbz @ 0x80761A00
    if (==) goto 0x0x80761a14;
    r3 = r31;
    FUN_807613C8(r3); // bl 0x807613C8
    r0 = *(0x14 + r1); // lwz @ 0x80761A14
    r31 = *(0xc + r1); // lwz @ 0x80761A18
    return;
}