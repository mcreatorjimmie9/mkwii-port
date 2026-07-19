/* Function at 0x80654FD0, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80654FD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80654FE0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80654FE8
    r30 = r3;
    if (==) goto 0x0x80655024;
    /* lis r4, 0 */ // 0x80654FF4
    r3 = *(4 + r3); // lwz @ 0x80654FF8
    r4 = r4 + 0; // 0x80654FFC
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80655004
    r3 = *(0xc + r30); // lwz @ 0x80655008
    r4 = r4 + 0; // 0x8065500C
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80655024;
    r3 = r30;
}