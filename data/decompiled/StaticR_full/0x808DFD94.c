/* Function at 0x808DFD94, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_808DFD94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x808DFDA0
    /* lis r31, 0 */ // 0x808DFDA4
    r31 = r31 + 0; // 0x808DFDA8
    r27 = r3;
    r29 = r31 + 0x7a; // 0x808DFDB0
    r28 = r4;
    r4 = r27 + 4; // 0x808DFDB8
    /* li r30, 0 */ // 0x808DFDBC
    r3 = r29;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x808dfe44;
    r3 = r28;
    r4 = r29;
    r5 = r27 + 4; // 0x808DFDD8
    /* li r6, 0 */ // 0x808DFDDC
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r29 = r31 + 0x80; // 0x808DFDE4
    r3 = r27 + 4; // 0x808DFDE8
    r4 = r29;
    FUN_805E3430(r6, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x808dfe34;
    r3 = *(4 + r27); // lwz @ 0x808DFDFC
    /* li r0, 0 */ // 0x808DFE00
    *(0x10 + r1) = r3; // stw @ 0x808DFE04
    r3 = r28;
}