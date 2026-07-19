/* Function at 0x808E9878, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808E9878(int r3, int r4, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808E9890
    *(0x10 + r1) = r28; // stw @ 0x808E9894
    r28 = r4;
    FUN_808CFA50(); // bl 0x808CFA50
    r0 = r3 rlwinm 1; // rlwinm
    /* clrlwi r29, r3, 0x18 */ // 0x808E98A4
    if (>=) goto 0x0x808e99b0;
    /* li r3, 0x254 */ // 0x808E98B0
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808e98cc;
    FUN_806497A4(r3); // bl 0x806497A4
    r31 = r3;
    /* srwi r6, r28, 0x1f */ // 0x808E98CC
    /* clrlwi r4, r28, 0x1f */ // 0x808E98D0
    r0 = r6 + r28; // 0x808E98D4
    r3 = *(0x6c8 + r30); // lwz @ 0x808E98D8
}