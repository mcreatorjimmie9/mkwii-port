/* Function at 0x8065A640, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_8065A640(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8065A64C
    r31 = r3;
    r0 = *(0x78 + r3); // lbz @ 0x8065A654
    if (==) goto 0x0x8065a6d4;
    /* lis r4, 1 */ // 0x8065A660
    r27 = *(4 + r3); // lwz @ 0x8065A664
    r30 = r4 + -0x6c10; // 0x8065A668
    /* li r28, 0 */ // 0x8065A66C
    /* lis r29, 0 */ // 0x8065A670
    r4 = *(0 + r29); // lwz @ 0x8065A674
    r3 = r27 + 8; // 0x8065A678
    r0 = *(0x36 + r4); // lha @ 0x8065A67C
    if (<) goto 0x0x8065a69c;
    /* clrlwi r0, r0, 0x18 */ // 0x8065A688
    r0 = r30 * r0; // 0x8065A68C
    r4 = r4 + r0; // 0x8065A690
    r4 = r4 + 0x38; // 0x8065A694
    /* b 0x8065a6a0 */ // 0x8065A698
    /* li r4, 0 */ // 0x8065A69C
    /* clrlwi r0, r28, 0x10 */ // 0x8065A6A0
    /* mulli r0, r0, 0x1c0 */ // 0x8065A6A4
    r4 = r4 + r0; // 0x8065A6A8
    r4 = r4 + 0x59d0; // 0x8065A6AC
    FUN_805A931C(r4, r4); // bl 0x805A931C
    r28 = r28 + 1; // 0x8065A6B4
    r27 = r27 + 0x1d8; // 0x8065A6B8
    if (<) goto 0x0x8065a674;
    /* lis r3, 0 */ // 0x8065A6C4
    r3 = *(0 + r3); // lwz @ 0x8065A6C8
    r3 = *(0x90 + r3); // lwz @ 0x8065A6CC
    FUN_806845FC(r3); // bl 0x806845FC
    r3 = *(4 + r31); // lwz @ 0x8065A6D4
    FUN_806599D4(r3); // bl 0x806599D4
    r0 = *(0x24 + r1); // lwz @ 0x8065A6E0
    return;
}