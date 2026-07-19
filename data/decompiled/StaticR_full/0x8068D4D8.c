/* Function at 0x8068D4D8, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8068D4D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068D4E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068D4F0
    r30 = r3;
    if (==) goto 0x0x8068d544;
    /* addic. r3, r3, 0x1440 */ // 0x8068D4FC
    if (==) goto 0x0x8068d510;
    r3 = r3 + 0x18; // 0x8068D504
    /* li r4, 0 */ // 0x8068D508
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x8068D510
    r3 = r30 + 0x174; // 0x8068D514
    r4 = r4 + 0; // 0x8068D518
    /* li r5, 0x254 */ // 0x8068D51C
    /* li r6, 8 */ // 0x8068D520
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8068D52C
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8068d544;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}