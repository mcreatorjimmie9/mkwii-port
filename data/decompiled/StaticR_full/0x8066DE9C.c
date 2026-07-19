/* Function at 0x8066DE9C, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8066DE9C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8066DEB0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8066DEB8
    r29 = r3;
    FUN_8066E240(); // bl 0x8066E240
    /* lis r3, 0 */ // 0x8066DEC4
    r5 = *(0x2c + r29); // lwz @ 0x8066DEC8
    r3 = *(0 + r3); // lwz @ 0x8066DECC
    r4 = r31;
    FUN_805B7738(r3, r4); // bl 0x805B7738
    r5 = r3;
    r3 = r29;
    r4 = r30;
    FUN_8066DBB8(r4, r5, r3, r4); // bl 0x8066DBB8
    r0 = *(0x24 + r1); // lwz @ 0x8066DEE8
    r31 = *(0x1c + r1); // lwz @ 0x8066DEEC
    r30 = *(0x18 + r1); // lwz @ 0x8066DEF0
    r29 = *(0x14 + r1); // lwz @ 0x8066DEF4
    return;
}