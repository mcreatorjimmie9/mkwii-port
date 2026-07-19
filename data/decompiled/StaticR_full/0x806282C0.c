/* Function at 0x806282C0, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806282C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x806282D4
    r30 = r5;
    /* li r5, 2 */ // 0x806282DC
    *(0x14 + r1) = r29; // stw @ 0x806282E0
    r29 = r3;
    FUN_806200C4(r5); // bl 0x806200C4
    /* lis r3, 0 */ // 0x806282EC
    /* lis r4, 0 */ // 0x806282F0
    /* lfs f0, 0(r3) */ // 0x806282F4
    r4 = r4 + 0; // 0x806282F8
    *(0xc + r29) = r4; // stw @ 0x806282FC
    r3 = r29;
    *(0x90 + r29) = r30; // stw @ 0x80628304
    *(0x94 + r29) = r31; // stw @ 0x80628308
    /* stfs f0, 0x9c(r29) */ // 0x8062830C
    r31 = *(0x1c + r1); // lwz @ 0x80628310
    r30 = *(0x18 + r1); // lwz @ 0x80628314
    r29 = *(0x14 + r1); // lwz @ 0x80628318
    r0 = *(0x24 + r1); // lwz @ 0x8062831C
    return;
}