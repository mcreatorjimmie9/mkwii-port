/* Function at 0x8079A4A4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8079A4A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x8079A4B0
    *(0xc + r1) = r31; // stw @ 0x8079A4B4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8079A4BC
    r30 = r3;
    *(0xb4 + r3) = r0; // stw @ 0x8079A4C4
    r3 = r31;
    FUN_8061DECC(r3); // bl 0x8061DECC
    if (==) goto 0x0x8079a4e4;
    r3 = r31;
    FUN_807A01C0(r3, r3); // bl 0x807A01C0
    *(0xb4 + r30) = r3; // stw @ 0x8079A4E0
    r0 = *(0x14 + r1); // lwz @ 0x8079A4E4
    r31 = *(0xc + r1); // lwz @ 0x8079A4E8
    r30 = *(8 + r1); // lwz @ 0x8079A4EC
    return;
}