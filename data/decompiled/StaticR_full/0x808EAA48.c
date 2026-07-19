/* Function at 0x808EAA48, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808EAA48(int r3, int r4, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x808EAA64
    r28 = r4;
    FUN_808CFA50(); // bl 0x808CFA50
    r0 = r3 rlwinm 1; // rlwinm
    /* clrlwi r31, r3, 0x18 */ // 0x808EAA74
    if (>=) goto 0x0x808eab74;
    /* li r3, 0x254 */ // 0x808EAA80
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x808eaa9c;
    FUN_806497A4(r3); // bl 0x806497A4
    r30 = r3;
    /* srwi r6, r28, 0x1f */ // 0x808EAA9C
    /* clrlwi r4, r28, 0x1f */ // 0x808EAAA0
    r0 = r6 + r28; // 0x808EAAA4
    r3 = *(0x6c4 + r29); // lwz @ 0x808EAAA8
}