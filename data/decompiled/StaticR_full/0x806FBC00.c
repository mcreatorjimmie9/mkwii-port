/* Function at 0x806FBC00, size=92 bytes */
/* Stack frame: 0 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806FBC00(int r3, int r4, int r5, int r6)
{
    /* clrlwi r11, r1, 0x1b */ // 0x806FBC00
    r12 = r1;
    /* subfic r11, r11, -0x260 */ // 0x806FBC08
    /* stwux r1, r1, r11 */ // 0x806FBC0C
    /* lis r5, 0 */ // 0x806FBC14
    *(4 + r12) = r0; // stw @ 0x806FBC18
    r5 = r5 + 0; // 0x806FBC1C
    /* stmw r26, -0x18(r12) */ // 0x806FBC20
    /* lis r27, 1 */ // 0x806FBC24
    r0 = r27 + -0x6c10; // 0x806FBC28
    /* lis r29, 0 */ // 0x806FBC2C
    r28 = r3;
    r26 = r4;
    r0 = r4 * r0; // 0x806FBC38
    r6 = *(0 + r29); // lwz @ 0x806FBC40
    *(0x60 + r1) = r5; // stw @ 0x806FBC44
    /* li r5, 0x1c0 */ // 0x806FBC48
    r4 = r6 + r0; // 0x806FBC4C
    r31 = r4 + 0x38; // 0x806FBC50
    /* li r4, 0 */ // 0x806FBC54
    FUN_805E3430(r5, r4); // bl 0x805E3430
}