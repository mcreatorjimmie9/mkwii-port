/* Function at 0x806BA50C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806BA50C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806BA51C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806BA524
    r30 = r3;
    if (==) goto 0x0x806ba570;
    /* lis r4, 0 */ // 0x806BA530
    /* li r5, 0x174 */ // 0x806BA534
    r4 = r4 + 0; // 0x806BA538
    /* li r6, 2 */ // 0x806BA53C
    r3 = r3 + 0x68; // 0x806BA540
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x58; // 0x806BA548
    /* li r4, -1 */ // 0x806BA54C
    FUN_80668158(r6, r3, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806BA558
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
}