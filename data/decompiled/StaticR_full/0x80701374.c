/* Function at 0x80701374, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80701374(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x80701384
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x80701390
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x80701398
    r28 = r4;
    /* clrlwi r0, r31, 0x10 */ // 0x807013A0
    r3 = r30;
    /* mulli r0, r0, 0x1c0 */ // 0x807013A8
    r4 = r28 + r0; // 0x807013AC
    r4 = r4 + 0x59d0; // 0x807013B0
    FUN_805A92DC(r3, r4); // bl 0x805A92DC
    if (==) goto 0x0x807013f0;
    r4 = r30 + 8; // 0x807013C4
    /* li r5, 8 */ // 0x807013C8
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = r29;
    /* li r5, 8 */ // 0x807013D8
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    if (!=) goto 0x0x807013f0;
    /* li r3, 1 */ // 0x807013E8
    /* b 0x80701400 */ // 0x807013EC
    r31 = r31 + 1; // 0x807013F0
    if (<) goto 0x0x807013a0;
    /* li r3, 0 */ // 0x807013FC
}