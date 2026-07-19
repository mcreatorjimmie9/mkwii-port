/* Function at 0x8065B7B8, size=140 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_8065B7B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r0, -1 */ // 0x8065B7C4
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x8065B7D0
    /* lis r30, 0 */ // 0x8065B7D4
    *(0xd4 + r1) = r29; // stw @ 0x8065B7D8
    *(0xd0 + r1) = r28; // stw @ 0x8065B7DC
    *(0x19fc + r3) = r0; // stw @ 0x8065B7E0
    r3 = *(0 + r30); // lwz @ 0x8065B7E4
    r3 = *(0 + r3); // lwz @ 0x8065B7E8
    r3 = *(0x404 + r3); // lwz @ 0x8065B7EC
    FUN_806599D4(); // bl 0x806599D4
    r3 = r31;
    FUN_8065C37C(r3); // bl 0x8065C37C
    /* li r0, 0x12c */ // 0x8065B7FC
    *(0x19f8 + r31) = r0; // stw @ 0x8065B800
    r3 = *(0 + r30); // lwz @ 0x8065B804
    r3 = *(0 + r3); // lwz @ 0x8065B808
    r3 = *(0x404 + r3); // lwz @ 0x8065B80C
    FUN_806598D0(); // bl 0x806598D0
    if (!=) goto 0x0x8065b82c;
    r3 = *(0 + r30); // lwz @ 0x8065B81C
    r3 = *(0 + r3); // lwz @ 0x8065B820
    r3 = *(0x404 + r3); // lwz @ 0x8065B824
    FUN_80659960(); // bl 0x80659960
    /* lis r6, 0 */ // 0x8065B82C
    r3 = r31 + 0x1978; // 0x8065B830
    r6 = r6 + 0; // 0x8065B834
    /* li r4, 0x1e */ // 0x8065B838
    /* li r5, 4 */ // 0x8065B83C
    FUN_805E3430(r6, r3, r6, r4, r5); // bl 0x805E3430
}