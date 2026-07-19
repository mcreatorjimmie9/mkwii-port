/* Function at 0x80701298, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80701298(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x807012A0
    *(0x14 + r1) = r29; // stw @ 0x807012B0
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x807012B8
    r28 = r4;
    r6 = *(0 + r3); // lwz @ 0x807012C0
    r0 = *(0x36 + r6); // lha @ 0x807012C4
    if (<) goto 0x0x807012ec;
    /* lis r3, 1 */ // 0x807012D0
    /* clrlwi r4, r0, 0x18 */ // 0x807012D4
    r0 = r3 + -0x6c10; // 0x807012D8
    r0 = r0 * r4; // 0x807012DC
    r3 = r6 + r0; // 0x807012E0
    r31 = r3 + 0x38; // 0x807012E4
    /* b 0x807012f0 */ // 0x807012E8
    /* li r31, 0 */ // 0x807012EC
    /* li r30, 0 */ // 0x807012F0
    /* clrlwi r0, r30, 0x10 */ // 0x807012F4
    r3 = r29;
    /* mulli r0, r0, 0x1c0 */ // 0x807012FC
    r4 = r31 + r0; // 0x80701300
    r4 = r4 + 0x59d0; // 0x80701304
    FUN_805A92DC(r3, r4); // bl 0x805A92DC
    if (==) goto 0x0x80701344;
    r4 = r29 + 8; // 0x80701318
    /* li r5, 8 */ // 0x8070131C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = r28;
    /* li r5, 8 */ // 0x8070132C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    if (!=) goto 0x0x80701344;
    /* li r3, 1 */ // 0x8070133C
    /* b 0x80701354 */ // 0x80701340
    r30 = r30 + 1; // 0x80701344
    if (<) goto 0x0x807012f4;
    /* li r3, 0 */ // 0x80701350
}