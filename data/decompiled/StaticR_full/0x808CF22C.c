/* Function at 0x808CF22C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808CF22C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808CF23C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808CF244
    r30 = r3;
    if (==) goto 0x0x808cf29c;
    if (==) goto 0x0x808cf28c;
    /* lis r4, 0 */ // 0x808CF254
    /* li r5, 0xb90 */ // 0x808CF258
    r4 = r4 + 0; // 0x808CF25C
    /* li r6, 2 */ // 0x808CF260
    r3 = r3 + 0x1a0; // 0x808CF264
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (==) goto 0x0x808cf28c;
    r3 = r30 + 0x5c; // 0x808CF274
    /* li r4, -1 */ // 0x808CF278
    FUN_806688C8(r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x808CF284
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808cf29c;
    r3 = r30;
}