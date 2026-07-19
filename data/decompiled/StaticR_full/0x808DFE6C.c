/* Function at 0x808DFE6C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808DFE6C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808DFE74
    *(0xc + r1) = r31; // stw @ 0x808DFE7C
    *(8 + r1) = r30; // stw @ 0x808DFE80
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x808DFE8C
    /* lis r3, 0 */ // 0x808DFE90
    r4 = r4 + 0; // 0x808DFE94
    *(0 + r30) = r4; // stw @ 0x808DFE98
    r0 = *(0 + r3); // lwz @ 0x808DFE9C
    if (!=) goto 0x0x808dff08;
    /* lis r3, 0 */ // 0x808DFEA8
    /* li r31, 6 */ // 0x808DFEAC
    r3 = *(0 + r3); // lwz @ 0x808DFEB0
    r0 = *(0xb68 + r3); // lwz @ 0x808DFEB4
    if (!=) goto 0x0x808dfec4;
    /* li r31, 5 */ // 0x808DFEC0
    /* li r3, 0x28 */ // 0x808DFEC4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808dff00;
    /* lis r4, 0 */ // 0x808DFED4
    r6 = r31;
    r4 = *(0 + r4); // lwz @ 0x808DFEDC
    /* li r7, 0 */ // 0x808DFEE0
    r4 = *(0x44 + r4); // lwz @ 0x808DFEE4
    r5 = *(0 + r4); // lwz @ 0x808DFEE8
    r4 = *(4 + r5); // lhz @ 0x808DFEEC
    r0 = *(6 + r5); // lhz @ 0x808DFEF0
    r4 = r4 rlwinm 0x1f; // rlwinm
}