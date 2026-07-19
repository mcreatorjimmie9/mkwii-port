/* Function at 0x80771844, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80771844(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80771850
    r31 = r3;
    r0 = *(0 + r3); // lwz @ 0x80771858
    if (!=) goto 0x0x8077186c;
    FUN_80771C04(); // bl 0x80771C04
    /* b 0x8077188c */ // 0x80771868
    r0 = *(4 + r3); // lwz @ 0x8077186C
    if (!=) goto 0x0x80771880;
    FUN_80771D60(); // bl 0x80771D60
    /* b 0x8077188c */ // 0x8077187C
    FUN_80771D60(); // bl 0x80771D60
    r3 = r31;
    FUN_80771C04(r3); // bl 0x80771C04
    r0 = *(0x14 + r1); // lwz @ 0x8077188C
    r31 = *(0xc + r1); // lwz @ 0x80771890
    return;
}