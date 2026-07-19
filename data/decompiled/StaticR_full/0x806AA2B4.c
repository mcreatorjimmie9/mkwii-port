/* Function at 0x806AA2B4, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806AA2B4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806AA2BC
    *(0x18 + r1) = r30; // stw @ 0x806AA2C8
    *(0x14 + r1) = r29; // stw @ 0x806AA2CC
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806AA2D4
    r3 = *(0 + r3); // lwz @ 0x806AA2D8
    r30 = *(0x140 + r3); // lwz @ 0x806AA2DC
    if (!=) goto 0x0x806aa2f0;
    /* li r30, 0 */ // 0x806AA2E8
    /* b 0x806aa344 */ // 0x806AA2EC
    /* lis r31, 0 */ // 0x806AA2F0
    r31 = r31 + 0; // 0x806AA2F4
    if (==) goto 0x0x806aa340;
    r12 = *(0 + r30); // lwz @ 0x806AA2FC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AA304
    /* mtctr r12 */ // 0x806AA308
    /* bctrl  */ // 0x806AA30C
    /* b 0x806aa328 */ // 0x806AA310
    if (!=) goto 0x0x806aa324;
    /* li r0, 1 */ // 0x806AA31C
    /* b 0x806aa334 */ // 0x806AA320
    r3 = *(0 + r3); // lwz @ 0x806AA324
    if (!=) goto 0x0x806aa314;
    /* li r0, 0 */ // 0x806AA330
    if (==) goto 0x0x806aa340;
    /* b 0x806aa344 */ // 0x806AA33C
    /* li r30, 0 */ // 0x806AA340
    r0 = *(0x270 + r30); // lwz @ 0x806AA344
    if (!=) goto 0x0x806aa368;
    /* lis r4, 0 */ // 0x806AA350
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x806AA358
    /* li r4, 0 */ // 0x806AA35C
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806aa370 */ // 0x806AA364
    /* li r0, 2 */ // 0x806AA368
    *(0xc98 + r29) = r0; // stw @ 0x806AA36C
    r0 = *(0x24 + r1); // lwz @ 0x806AA370
    r31 = *(0x1c + r1); // lwz @ 0x806AA374
    r30 = *(0x18 + r1); // lwz @ 0x806AA378
    r29 = *(0x14 + r1); // lwz @ 0x806AA37C
    return;
}