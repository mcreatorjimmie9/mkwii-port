/* Function at 0x805BB478, size=76 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_805BB478(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* lis r5, 0x1062 */ // 0x805BB480
    *(0x44 + r1) = r0; // stw @ 0x805BB484
    /* stmw r21, 0x14(r1) */ // 0x805BB488
    /* li r29, 0 */ // 0x805BB48C
    /* li r25, 0x64 */ // 0x805BB490
    r27 = r3;
    r26 = r29 * r25; // 0x805BB498
    r28 = r4;
    r23 = r5 + 0x4dd3; // 0x805BB4A0
    /* li r31, 1 */ // 0x805BB4A4
    /* li r30, 8 */ // 0x805BB4A8
    /* li r22, 2 */ // 0x805BB4AC
    /* li r21, 1 */ // 0x805BB4B0
    /* lis r24, -0x8000 */ // 0x805BB4B4
    r3 = r27;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}