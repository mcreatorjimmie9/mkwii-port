/* Function at 0x8082C8F8, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8082C8F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r6 = *(0 + r4); // lwz @ 0x8082C900
    r5 = *(4 + r4); // lwz @ 0x8082C908
    *(0x1c + r1) = r31; // stw @ 0x8082C90C
    r31 = r4;
    r0 = *(8 + r4); // lwz @ 0x8082C914
    *(0x18 + r1) = r30; // stw @ 0x8082C918
    r30 = r3;
    *(8 + r1) = r6; // stw @ 0x8082C924
    *(0xc + r1) = r5; // stw @ 0x8082C928
    *(0x10 + r1) = r0; // stw @ 0x8082C92C
    FUN_8082C980(r3); // bl 0x8082C980
    /* lis r3, 0 */ // 0x8082C934
    /* lfs f0, 0(r3) */ // 0x8082C938
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082C93C
    if (<=) goto 0x0x8082c968;
    /* lis r3, 0 */ // 0x8082C944
    /* lfs f2, 0(r31) */ // 0x8082C948
    /* lfs f3, 0(r3) */ // 0x8082C94C
    /* lfs f0, 8(r31) */ // 0x8082C950
    /* fdivs f3, f3, f1 */ // 0x8082C954
    /* fmuls f2, f2, f3 */ // 0x8082C958
    /* fmuls f0, f0, f3 */ // 0x8082C95C
    /* stfs f2, 0(r30) */ // 0x8082C960
    /* stfs f0, 8(r30) */ // 0x8082C964
    r0 = *(0x24 + r1); // lwz @ 0x8082C968
    r31 = *(0x1c + r1); // lwz @ 0x8082C96C
    r30 = *(0x18 + r1); // lwz @ 0x8082C970
    return;
}