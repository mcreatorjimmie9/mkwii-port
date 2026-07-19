/* Function at 0x806F5650, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806F5650(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806F5660
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806F5668
    r30 = r3;
    if (==) goto 0x0x806f569c;
    /* lis r4, 0 */ // 0x806F5674
    /* li r5, 0x70 */ // 0x806F5678
    r4 = r4 + 0; // 0x806F567C
    /* li r6, 0xa */ // 0x806F5680
    r3 = r3 + 4; // 0x806F5684
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (<=) goto 0x0x806f569c;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806F56A0
    r30 = *(8 + r1); // lwz @ 0x806F56A4
}