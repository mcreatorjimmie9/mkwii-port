/* Function at 0x805A0188, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805A0188(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x805A0190
    *(0x14 + r1) = r0; // stw @ 0x805A0194
    *(0xc + r1) = r31; // stw @ 0x805A0198
    r0 = *(0 + r3); // lwz @ 0x805A019C
    if (!=) goto 0x0x805a01e0;
    /* li r3, 0x7c */ // 0x805A01A8
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x805a01d8;
    /* lis r4, 0 */ // 0x805A01BC
    r4 = r4 + 0; // 0x805A01C0
    *(0x10 + r3) = r4; // stw @ 0x805A01C4
    FUN_805E3430(r4, r4); // bl 0x805E3430
}