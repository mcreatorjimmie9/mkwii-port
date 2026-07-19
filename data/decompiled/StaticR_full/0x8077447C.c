/* Function at 0x8077447C, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8077447C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8077448C
    *(0x18 + r1) = r30; // stw @ 0x80774490
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80774498
    r29 = r3;
    /* b 0x807744cc */ // 0x807744A0
    r3 = r29;
    /* clrlwi r4, r31, 0x10 */ // 0x807744A8
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 0(r30) */ // 0x807744B0
    r31 = r31 + 1; // 0x807744B4
    /* stfs f0, 0x68(r3) */ // 0x807744B8
    /* lfs f0, 4(r30) */ // 0x807744BC
    /* stfs f0, 0x6c(r3) */ // 0x807744C0
    /* lfs f0, 8(r30) */ // 0x807744C4
    /* stfs f0, 0x70(r3) */ // 0x807744C8
    r0 = *(0x10 + r29); // lbz @ 0x807744CC
    if (<) goto 0x0x807744a4;
}