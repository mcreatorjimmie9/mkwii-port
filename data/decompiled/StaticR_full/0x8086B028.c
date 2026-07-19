/* Function at 0x8086B028, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8086B028(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8086B030
    /* lis r7, 0 */ // 0x8086B034
    *(0x14 + r1) = r0; // stw @ 0x8086B038
    r4 = r4 + 0; // 0x8086B03C
    r5 = r4 + 5; // 0x8086B040
    r7 = r7 + 0; // 0x8086B044
    *(0xc + r1) = r31; // stw @ 0x8086B048
    r31 = r3;
    /* li r6, 1 */ // 0x8086B050
    /* li r8, 0 */ // 0x8086B054
    /* li r9, 0 */ // 0x8086B058
    FUN_8082B070(r6, r8, r9); // bl 0x8082B070
    r4 = *(0x9c + r31); // lwz @ 0x8086B060
    /* lis r3, 0 */ // 0x8086B064
    /* lis r5, 0 */ // 0x8086B068
    /* lfs f1, 0(r3) */ // 0x8086B06C
    r3 = *(0x28 + r4); // lwz @ 0x8086B070
    /* li r4, 0 */ // 0x8086B074
    /* lfs f2, 0(r5) */ // 0x8086B078
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0x14 + r1); // lwz @ 0x8086B080
    r31 = *(0xc + r1); // lwz @ 0x8086B084
    return;
}