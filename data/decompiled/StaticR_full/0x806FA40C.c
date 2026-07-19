/* Function at 0x806FA40C, size=136 bytes */
/* Stack frame: 0 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806FA40C(int r3, int r4, int r5, int r6, int r7)
{
    /* clrlwi r11, r1, 0x1b */ // 0x806FA40C
    r12 = r1;
    /* subfic r11, r11, -0x460 */ // 0x806FA414
    /* stwux r1, r1, r11 */ // 0x806FA418
    *(4 + r12) = r0; // stw @ 0x806FA420
    *(-4 + r12) = r31; // stw @ 0x806FA424
    r31 = r4;
    *(-8 + r12) = r30; // stw @ 0x806FA42C
    r30 = r3;
    FUN_8070A504(r3); // bl 0x8070A504
    /* lis r3, 0 */ // 0x806FA43C
    /* lis r4, 0 */ // 0x806FA440
    r4 = r4 + 0; // 0x806FA444
    r3 = *(0 + r3); // lwz @ 0x806FA448
    r5 = r4 + 0x33; // 0x806FA44C
    /* li r4, 2 */ // 0x806FA454
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    if (==) goto 0x0x806fa4d8;
    r5 = *(0x20 + r1); // lwz @ 0x806FA464
    r4 = r3;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r5 = r31;
    FUN_806FA4F8(r3, r3, r5, r4); // bl 0x806FA4F8
    r6 = *(0x20 + r1); // lwz @ 0x806FA484
    /* li r0, 0x200 */ // 0x806FA490
}