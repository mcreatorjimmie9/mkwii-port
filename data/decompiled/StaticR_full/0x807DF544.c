/* Function at 0x807DF544, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807DF544(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807DF554
    r4 = r31 + 0; // 0x807DF558
    *(0x18 + r1) = r30; // stw @ 0x807DF55C
    /* lis r30, 0 */ // 0x807DF560
    r30 = r30 + 0; // 0x807DF564
    *(0x14 + r1) = r29; // stw @ 0x807DF568
    /* lis r29, 0 */ // 0x807DF56C
    r29 = r29 + 0; // 0x807DF570
    /* lfs f1, 0x270(r30) */ // 0x807DF574
    r3 = r29 + 0xc; // 0x807DF578
    /* lfs f0, 0x2b4(r30) */ // 0x807DF57C
    /* stfs f1, 0xc(r29) */ // 0x807DF580
    r5 = r29 + 0; // 0x807DF584
    /* stfs f1, 4(r3) */ // 0x807DF588
    /* stfs f0, 8(r3) */ // 0x807DF58C
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f1, 0x270(r30) */ // 0x807DF594
    r3 = r29 + 0x24; // 0x807DF598
    /* lfs f0, 0x2c8(r30) */ // 0x807DF59C
    r4 = r31 + 0; // 0x807DF5A0
    /* stfs f1, 0x24(r29) */ // 0x807DF5A4
    r5 = r29 + 0x18; // 0x807DF5A8
    /* stfs f1, 4(r3) */ // 0x807DF5AC
    /* stfs f0, 8(r3) */ // 0x807DF5B0
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lfs f1, 0x270(r30) */ // 0x807DF5B8
    r3 = r29 + 0x3c; // 0x807DF5BC
    /* lfs f0, 0x274(r30) */ // 0x807DF5C0
    r4 = r31 + 0; // 0x807DF5C4
    /* stfs f1, 0x3c(r29) */ // 0x807DF5C8
    r5 = r29 + 0x30; // 0x807DF5CC
    /* stfs f0, 4(r3) */ // 0x807DF5D0
    /* stfs f1, 8(r3) */ // 0x807DF5D4
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lis r3, 0 */ // 0x807DF5DC
    /* li r4, 0x5a */ // 0x807DF5E0
    r0 = *(0 + r3); // lwz @ 0x807DF5E4
    r0 = r4 / r0; // 0x807DF5E8
    *(0x48 + r29) = r0; // stw @ 0x807DF5EC
    r31 = *(0x1c + r1); // lwz @ 0x807DF5F0
    r30 = *(0x18 + r1); // lwz @ 0x807DF5F4
    r29 = *(0x14 + r1); // lwz @ 0x807DF5F8
    r0 = *(0x24 + r1); // lwz @ 0x807DF5FC
    return;
}