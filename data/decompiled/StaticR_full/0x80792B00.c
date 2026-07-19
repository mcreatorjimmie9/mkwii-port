/* Function at 0x80792B00, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80792B00(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80792B14
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80792B1C
    r29 = r3;
    r12 = *(0x88 + r3); // lwz @ 0x80792B24
    r12 = *(0x2c + r12); // lwz @ 0x80792B28
    /* mtctr r12 */ // 0x80792B2C
    r3 = r3 + 0x88; // 0x80792B30
    /* bctrl  */ // 0x80792B34
    r3 = r29;
    r4 = r30;
    r5 = r31;
    FUN_805E3430(r3, r3, r4, r5); // bl 0x805E3430
}