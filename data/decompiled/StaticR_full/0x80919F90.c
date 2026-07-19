/* Function at 0x80919F90, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80919F90(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80919FA0
    r4 = r31 + 0; // 0x80919FA4
    *(0x18 + r1) = r30; // stw @ 0x80919FA8
    /* lis r30, 0 */ // 0x80919FAC
    r30 = r30 + 0; // 0x80919FB0
    *(0x14 + r1) = r29; // stw @ 0x80919FB4
    /* lis r29, 0 */ // 0x80919FB8
    r29 = r29 + 0; // 0x80919FBC
    /* lfs f1, 0(r30) */ // 0x80919FC0
    r3 = r29 + 0x10; // 0x80919FC4
    /* lfs f0, 0x30(r30) */ // 0x80919FC8
    /* stfs f1, 0x10(r29) */ // 0x80919FCC
    r5 = r29 + 4; // 0x80919FD0
    /* stfs f0, 4(r3) */ // 0x80919FD4
    /* stfs f1, 8(r3) */ // 0x80919FD8
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x80919FE0
    r3 = r29 + 0x28; // 0x80919FE4
    /* lfs f0, 0x34(r30) */ // 0x80919FE8
    r4 = r31 + 0; // 0x80919FEC
    /* stfs f1, 0x28(r29) */ // 0x80919FF0
    r5 = r29 + 0x1c; // 0x80919FF4
    /* stfs f0, 4(r3) */ // 0x80919FF8
    /* stfs f1, 8(r3) */ // 0x80919FFC
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x8091A004
    r31 = *(0x1c + r1); // lwz @ 0x8091A008
    r30 = *(0x18 + r1); // lwz @ 0x8091A00C
    r29 = *(0x14 + r1); // lwz @ 0x8091A010
    return;
}