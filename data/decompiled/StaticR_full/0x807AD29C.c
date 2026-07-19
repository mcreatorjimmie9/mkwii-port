/* Function at 0x807AD29C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807AD29C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807AD2AC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807AD2B4
    r30 = r3;
    if (==) goto 0x0x807ad2f4;
    /* lis r5, 0 */ // 0x807AD2C0
    /* lis r4, 0 */ // 0x807AD2C4
    r5 = r5 + 0; // 0x807AD2C8
    *(0 + r3) = r5; // stw @ 0x807AD2CC
    r3 = *(0x24 + r3); // lwz @ 0x807AD2D0
    r4 = r4 + 0; // 0x807AD2D4
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x807AD2E0
    *(0x24 + r30) = r0; // stw @ 0x807AD2E4
    if (<=) goto 0x0x807ad2f4;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
}