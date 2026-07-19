/* Function at 0x805BB868, size=68 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_805BB868(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r5, 0x1062 */ // 0x805BB870
    *(0x34 + r1) = r0; // stw @ 0x805BB874
    /* stmw r23, 0xc(r1) */ // 0x805BB878
    /* li r25, 0 */ // 0x805BB87C
    /* li r30, 0x64 */ // 0x805BB880
    r23 = r3;
    r31 = r25 * r30; // 0x805BB888
    r24 = r4;
    r28 = r5 + 0x4dd3; // 0x805BB890
    /* li r27, 1 */ // 0x805BB894
    /* li r26, 8 */ // 0x805BB898
    /* lis r29, -0x8000 */ // 0x805BB89C
    r3 = r23;
    r4 = r24;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}