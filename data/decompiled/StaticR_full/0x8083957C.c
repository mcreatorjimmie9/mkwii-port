/* Function at 0x8083957C, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8083957C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8083958C
    *(0x18 + r1) = r30; // stw @ 0x80839590
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80839598
    r29 = r3;
    r3 = r30;
    FUN_8061EBF4(r3); // bl 0x8061EBF4
    if (!=) goto 0x0x808395bc;
    r0 = *(0x240 + r30); // lwz @ 0x808395B0
    if (<=) goto 0x0x808395c0;
    /* li r31, 1 */ // 0x808395BC
    if (==) goto 0x0x808395d0;
    /* li r0, 0 */ // 0x808395C8
    *(0x2a8 + r29) = r0; // stb @ 0x808395CC
    r0 = *(0x2a8 + r29); // lbz @ 0x808395D0
    if (==) goto 0x0x808395fc;
    r3 = r30;
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* lfs f0, 0(r3) */ // 0x808395E4
    /* stfs f0, 0x29c(r29) */ // 0x808395E8
    /* lfs f0, 4(r3) */ // 0x808395EC
    /* stfs f0, 0x2a0(r29) */ // 0x808395F0
    /* lfs f0, 8(r3) */ // 0x808395F4
    /* stfs f0, 0x2a4(r29) */ // 0x808395F8
    r31 = *(0x1c + r1); // lwz @ 0x808395FC
    r3 = r29 + 0x29c; // 0x80839600
}