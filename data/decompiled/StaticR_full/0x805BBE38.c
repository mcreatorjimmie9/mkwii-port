/* Function at 0x805BBE38, size=196 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805BBE38(int r3, int r4, int r5)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x805BBE40
    /* li r0, 1 */ // 0x805BBE48
    *(0xac + r1) = r31; // stw @ 0x805BBE4C
    *(0xa8 + r1) = r30; // stw @ 0x805BBE50
    r30 = r4;
    *(0xa4 + r1) = r29; // stw @ 0x805BBE5C
    r29 = r3;
    *(0x14 + r3) = r0; // stb @ 0x805BBE64
    /* li r0, 0 */ // 0x805BBE68
    r3 = *(0 + r5); // lwz @ 0x805BBE6C
    /* li r5, 1 */ // 0x805BBE70
    *(8 + r1) = r0; // stw @ 0x805BBE74
    FUN_805BAB90(r5); // bl 0x805BAB90
    r31 = r3;
    if (!=) goto 0x0x805bbed4;
    FUN_805BB024(r3, r4); // bl 0x805BB024
    r31 = r3;
    if (!=) goto 0x0x805bbeb0;
    r0 = *(8 + r1); // lwz @ 0x805BBEA0
    if (==) goto 0x0x805bbeb0;
    /* li r31, 3 */ // 0x805BBEAC
    FUN_805BAD70(r3); // bl 0x805BAD70
    if (==) goto 0x0x805bbec8;
    /* li r31, 8 */ // 0x805BBEC0
    /* b 0x805bbed4 */ // 0x805BBEC4
    if (!=) goto 0x0x805bbed4;
    r31 = r3;
    /* li r0, 0 */ // 0x805BBED4
    *(0x14 + r29) = r0; // stb @ 0x805BBED8
    r3 = r31;
    r31 = *(0xac + r1); // lwz @ 0x805BBEE0
    r30 = *(0xa8 + r1); // lwz @ 0x805BBEE4
    r29 = *(0xa4 + r1); // lwz @ 0x805BBEE8
    r0 = *(0xb4 + r1); // lwz @ 0x805BBEEC
    return;
}