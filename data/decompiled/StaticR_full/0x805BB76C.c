/* Function at 0x805BB76C, size=68 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_805BB76C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r5, 0x1062 */ // 0x805BB774
    *(0x34 + r1) = r0; // stw @ 0x805BB778
    /* stmw r23, 0xc(r1) */ // 0x805BB77C
    /* li r25, 0 */ // 0x805BB780
    /* li r30, 0x64 */ // 0x805BB784
    r23 = r3;
    r31 = r25 * r30; // 0x805BB78C
    r24 = r4;
    r28 = r5 + 0x4dd3; // 0x805BB794
    /* li r27, 1 */ // 0x805BB798
    /* li r26, 8 */ // 0x805BB79C
    /* lis r29, -0x8000 */ // 0x805BB7A0
    r3 = r23;
    r4 = r24;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}