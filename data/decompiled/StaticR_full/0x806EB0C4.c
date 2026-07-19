/* Function at 0x806EB0C4, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_806EB0C4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* stmw r23, 0xc(r1) */ // 0x806EB0D0
    r23 = r3;
    r24 = r3 + 4; // 0x806EB0D8
    /* li r29, 0 */ // 0x806EB0DC
    /* li r31, 0 */ // 0x806EB0E0
    /* li r30, 0x10 */ // 0x806EB0E4
    *(0 + r24) = r31; // stw @ 0x806EB0E8
    r3 = r24 + 4; // 0x806EB0EC
    /* li r4, 0 */ // 0x806EB0F0
    /* li r5, 0x15 */ // 0x806EB0F4
    *(0x19 + r24) = r31; // stb @ 0x806EB0F8
    *(0x1a + r24) = r30; // stb @ 0x806EB0FC
    *(0x1b + r24) = r31; // stb @ 0x806EB100
    *(0x1c + r24) = r31; // stb @ 0x806EB104
    FUN_805E3430(r5); // bl 0x805E3430
}