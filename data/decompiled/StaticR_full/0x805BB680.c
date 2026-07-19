/* Function at 0x805BB680, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_805BB680(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r4, 0x1062 */ // 0x805BB688
    *(0x34 + r1) = r0; // stw @ 0x805BB68C
    /* stmw r24, 0x10(r1) */ // 0x805BB690
    /* li r25, 0 */ // 0x805BB694
    /* li r30, 0x64 */ // 0x805BB698
    r24 = r3;
    r31 = r25 * r30; // 0x805BB6A0
    r28 = r4 + 0x4dd3; // 0x805BB6A4
    /* li r27, 1 */ // 0x805BB6A8
    /* li r26, 8 */ // 0x805BB6AC
    /* lis r29, -0x8000 */ // 0x805BB6B0
    r3 = r24;
    FUN_805E3430(r3); // bl 0x805E3430
}