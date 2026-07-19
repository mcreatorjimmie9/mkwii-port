/* Function at 0x8091302C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8091302C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8091303C
    r4 = r31 + 0; // 0x80913040
    *(0x18 + r1) = r30; // stw @ 0x80913044
    /* lis r30, 0 */ // 0x80913048
    r30 = r30 + 0; // 0x8091304C
    *(0x14 + r1) = r29; // stw @ 0x80913050
    /* lis r29, 0 */ // 0x80913054
    r29 = r29 + 0; // 0x80913058
    /* lfs f1, 0(r30) */ // 0x8091305C
    r3 = r29 + 0xc; // 0x80913060
    /* lfs f0, 0x1c(r30) */ // 0x80913064
    /* stfs f1, 0xc(r29) */ // 0x80913068
    r5 = r29 + 0; // 0x8091306C
    /* stfs f0, 4(r3) */ // 0x80913070
    /* stfs f1, 8(r3) */ // 0x80913074
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x8091307C
    r3 = r29 + 0x24; // 0x80913080
    /* lfs f0, 0x3c(r30) */ // 0x80913084
    r4 = r31 + 0; // 0x80913088
    /* stfs f1, 0x24(r29) */ // 0x8091308C
    r5 = r29 + 0x18; // 0x80913090
    /* stfs f0, 4(r3) */ // 0x80913094
    /* stfs f1, 8(r3) */ // 0x80913098
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x809130A0
    r31 = *(0x1c + r1); // lwz @ 0x809130A4
    r30 = *(0x18 + r1); // lwz @ 0x809130A8
    r29 = *(0x14 + r1); // lwz @ 0x809130AC
    return;
}