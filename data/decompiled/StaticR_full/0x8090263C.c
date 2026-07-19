/* Function at 0x8090263C, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8090263C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8090264C
    r4 = r31 + 0; // 0x80902650
    *(0x18 + r1) = r30; // stw @ 0x80902654
    /* lis r30, 0 */ // 0x80902658
    r30 = r30 + 0; // 0x8090265C
    *(0x14 + r1) = r29; // stw @ 0x80902660
    /* lis r29, 0 */ // 0x80902664
    r29 = r29 + 0; // 0x80902668
    /* lfs f0, 0x1d0(r30) */ // 0x8090266C
    r3 = r29 + 0xa0; // 0x80902670
    /* stfs f0, 0xa0(r29) */ // 0x80902674
    r5 = r29 + 0x94; // 0x80902678
    /* stfs f0, 4(r3) */ // 0x8090267C
    /* stfs f0, 8(r3) */ // 0x80902680
    FUN_8091EFA4(r3, r5); // bl 0x8091EFA4
    /* lfs f0, 0x1d4(r30) */ // 0x80902688
    r3 = r29 + 0xb8; // 0x8090268C
    /* stfs f0, 0xb8(r29) */ // 0x80902690
    r4 = r31 + 0; // 0x80902694
    r5 = r29 + 0xac; // 0x80902698
    /* stfs f0, 4(r3) */ // 0x8090269C
    /* stfs f0, 8(r3) */ // 0x809026A0
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f0, 0x1d8(r30) */ // 0x809026A8
    r3 = r29 + 0xd0; // 0x809026AC
    /* stfs f0, 0xd0(r29) */ // 0x809026B0
    r4 = r31 + 0; // 0x809026B4
    r5 = r29 + 0xc4; // 0x809026B8
    /* stfs f0, 4(r3) */ // 0x809026BC
    /* stfs f0, 8(r3) */ // 0x809026C0
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x809026C8
    r3 = r29 + 0xe8; // 0x809026CC
    /* lfs f0, 0x1dc(r30) */ // 0x809026D0
    r4 = r31 + 0; // 0x809026D4
    /* stfs f1, 0xe8(r29) */ // 0x809026D8
    r5 = r29 + 0xdc; // 0x809026DC
    /* stfs f0, 4(r3) */ // 0x809026E0
    /* stfs f1, 8(r3) */ // 0x809026E4
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lis r4, 0 */ // 0x809026EC
    /* lis r3, 0 */ // 0x809026F0
    /* lfs f1, 0(r4) */ // 0x809026F4
    /* lfs f0, 0(r3) */ // 0x809026F8
    /* fdivs f1, f1, f0 */ // 0x809026FC
    FUN_805E3430(r4, r3); // bl 0x805E3430
}