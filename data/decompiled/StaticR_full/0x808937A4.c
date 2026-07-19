/* Function at 0x808937A4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808937A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808937B4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808937BC
    r30 = r3;
    if (==) goto 0x0x808937e4;
    if (==) goto 0x0x808937d4;
    /* li r4, 0 */ // 0x808937CC
    FUN_807E5FBC(r4); // bl 0x807E5FBC
    if (<=) goto 0x0x808937e4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808937E8
    r30 = *(8 + r1); // lwz @ 0x808937EC
    r0 = *(0x14 + r1); // lwz @ 0x808937F0
    return;
}