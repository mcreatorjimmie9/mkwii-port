/* Function at 0x8088C828, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8088C828(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x8088C830
    *(0xc + r1) = r31; // stw @ 0x8088C838
    /* lis r31, 0 */ // 0x8088C83C
    r31 = r31 + 0; // 0x8088C840
    *(8 + r1) = r30; // stw @ 0x8088C844
    r30 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lfs f3, 4(r31) */ // 0x8088C850
    /* lis r4, 0 */ // 0x8088C854
    /* lfs f2, 8(r31) */ // 0x8088C858
    r4 = r4 + 0; // 0x8088C85C
    /* lfs f1, 0xc(r31) */ // 0x8088C860
    r3 = r30;
    /* lfs f0, 0x10(r31) */ // 0x8088C868
    *(0 + r30) = r4; // stw @ 0x8088C86C
    /* stfs f3, 0xac(r30) */ // 0x8088C870
    /* stfs f2, 0xb0(r30) */ // 0x8088C874
    /* stfs f1, 0xb4(r30) */ // 0x8088C878
    /* stfs f0, 0xb8(r30) */ // 0x8088C87C
    r31 = *(0xc + r1); // lwz @ 0x8088C880
    r30 = *(8 + r1); // lwz @ 0x8088C884
    r0 = *(0x14 + r1); // lwz @ 0x8088C888
    return;
}