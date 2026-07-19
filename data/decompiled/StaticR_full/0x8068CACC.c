/* Function at 0x8068CACC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8068CACC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068CADC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068CAE4
    r30 = r3;
    if (==) goto 0x0x8068cb24;
    /* lis r4, 0 */ // 0x8068CAF0
    /* li r5, 0x174 */ // 0x8068CAF4
    r4 = r4 + 0; // 0x8068CAF8
    /* li r6, 5 */ // 0x8068CAFC
    r3 = r3 + 0x174; // 0x8068CB00
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8068CB0C
    FUN_806A0540(r6, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8068cb24;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}