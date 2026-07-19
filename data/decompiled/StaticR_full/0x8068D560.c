/* Function at 0x8068D560, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8068D560(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068D570
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068D578
    r30 = r3;
    if (==) goto 0x0x8068d5b8;
    /* lis r4, 0 */ // 0x8068D584
    /* li r5, 0x174 */ // 0x8068D588
    r4 = r4 + 0; // 0x8068D58C
    /* li r6, 8 */ // 0x8068D590
    r3 = r3 + 0x174; // 0x8068D594
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8068D5A0
    FUN_806A0540(r6, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8068d5b8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}