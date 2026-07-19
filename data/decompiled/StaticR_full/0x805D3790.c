/* Function at 0x805D3790, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805D3790(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* addis r4, r3, 2 */ // 0x805D3798
    *(0x18 + r1) = r30; // stw @ 0x805D37A4
    *(0x14 + r1) = r29; // stw @ 0x805D37A8
    r29 = r3;
    r0 = *(0x5002 + r4); // lbz @ 0x805D37B0
    if (!=) goto 0x0x805d37cc;
    /* li r0, 0 */ // 0x805D37BC
    *(0x5000 + r4) = r0; // stb @ 0x805D37C0
    *(0x5004 + r4) = r0; // stw @ 0x805D37C4
    /* b 0x805d3820 */ // 0x805D37C8
    /* lis r3, 1 */ // 0x805D37CC
    /* li r30, 0 */ // 0x805D37D0
    r31 = r3 + -0x6c10; // 0x805D37D4
    /* clrlwi r4, r30, 0x18 */ // 0x805D37D8
    r3 = r29;
    r0 = r4 * r31; // 0x805D37E0
    r5 = r29 + r0; // 0x805D37E4
    r5 = r5 + 0x38; // 0x805D37E8
    FUN_805D5334(r3, r5); // bl 0x805D5334
    r30 = r30 + 1; // 0x805D37F0
    if (<) goto 0x0x805d37d8;
    /* addis r3, r29, 2 */ // 0x805D37FC
    /* li r0, 1 */ // 0x805D3800
    /* lis r4, 0 */ // 0x805D3804
    *(0x5000 + r3) = r0; // stb @ 0x805D3808
    r3 = *(0x1c + r29); // lwz @ 0x805D380C
    r4 = r4 + 0; // 0x805D3810
    /* li r5, 0 */ // 0x805D3814
    /* li r6, 0 */ // 0x805D3818
    FUN_805E3430(r4, r5, r6); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x805D3820
    r31 = *(0x1c + r1); // lwz @ 0x805D3824
    r30 = *(0x18 + r1); // lwz @ 0x805D3828
    r29 = *(0x14 + r1); // lwz @ 0x805D382C
    return;
}