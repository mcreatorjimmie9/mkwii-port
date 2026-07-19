/* Function at 0x80833814, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80833814(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8083382C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80833834
    r28 = r3;
    if (==) goto 0x0x80833884;
    /* addic. r30, r3, 0x1ec */ // 0x80833840
    if (==) goto 0x0x80833874;
    /* lis r31, 0 */ // 0x80833848
    r3 = r30 + 0x30; // 0x8083384C
    r4 = r31 + 0; // 0x80833850
    /* li r5, 0xc */ // 0x80833854
    /* li r6, 4 */ // 0x80833858
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    r4 = r31 + 0; // 0x80833864
    /* li r5, 0xc */ // 0x80833868
    /* li r6, 4 */ // 0x8083386C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x80833884;
    r3 = r28;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80833884
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x8083388C
    r29 = *(0x14 + r1); // lwz @ 0x80833890
}