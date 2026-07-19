/* Function at 0x806BC400, size=336 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_806BC400(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806BC414
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x806BC41C
    if (!=) goto 0x0x806bc534;
    /* lis r30, 0 */ // 0x806BC428
    /* li r4, 0 */ // 0x806BC42C
    r3 = *(0 + r30); // lwz @ 0x806BC430
    r3 = r3 + 0x34; // 0x806BC434
    FUN_8067F3BC(r4, r3); // bl 0x8067F3BC
    if (==) goto 0x0x806bc534;
    /* clrlwi r0, r3, 0x1c */ // 0x806BC444
    if (!=) goto 0x0x806bc504;
    r3 = r29 + 0x260; // 0x806BC450
    /* li r4, 3 */ // 0x806BC454
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806BC45C
    /* li r4, 0 */ // 0x806BC460
    /* lfs f1, 0(r31) */ // 0x806BC464
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x260; // 0x806BC46C
    /* li r4, 4 */ // 0x806BC470
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BC478
    /* li r4, 0 */ // 0x806BC47C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = *(0 + r30); // lwz @ 0x806BC484
    r3 = *(0 + r3); // lwz @ 0x806BC488
    r0 = *(0 + r3); // lwz @ 0x806BC48C
    if (==) goto 0x0x806bc4a4;
    if (==) goto 0x0x806bc4cc;
    /* b 0x806bc4f0 */ // 0x806BC4A0
    r12 = *(0 + r29); // lwz @ 0x806BC4A4
    /* lis r5, 0 */ // 0x806BC4A8
    /* lfs f1, 0(r5) */ // 0x806BC4AC
    r3 = r29;
    r12 = *(0x1c + r12); // lwz @ 0x806BC4B4
    /* li r4, 0x2d */ // 0x806BC4B8
    /* li r5, 0 */ // 0x806BC4BC
    /* mtctr r12 */ // 0x806BC4C0
    /* bctrl  */ // 0x806BC4C4
    /* b 0x806bc4f0 */ // 0x806BC4C8
    r12 = *(0 + r29); // lwz @ 0x806BC4CC
    /* lis r5, 0 */ // 0x806BC4D0
    /* lfs f1, 0(r5) */ // 0x806BC4D4
    r3 = r29;
    r12 = *(0x1c + r12); // lwz @ 0x806BC4DC
    /* li r4, 0x1d */ // 0x806BC4E0
    /* li r5, 0 */ // 0x806BC4E4
    /* mtctr r12 */ // 0x806BC4E8
    /* bctrl  */ // 0x806BC4EC
    r3 = r29;
    /* li r4, 0x20 */ // 0x806BC4F4
    /* li r5, 0 */ // 0x806BC4F8
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x806bc534 */ // 0x806BC500
    r3 = r29;
    /* li r4, 0xf3 */ // 0x806BC508
    /* li r5, -1 */ // 0x806BC50C
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    r3 = *(0 + r30); // lwz @ 0x806BC514
    /* li r4, 0 */ // 0x806BC518
    r3 = r3 + 0x34; // 0x806BC51C
    FUN_8067F828(r5, r4, r3); // bl 0x8067F828
    r3 = *(0 + r30); // lwz @ 0x806BC524
    /* li r4, 0 */ // 0x806BC528
    r3 = r3 + 0x34; // 0x806BC52C
    FUN_8067F750(r3, r4, r3); // bl 0x8067F750
    r0 = *(0x24 + r1); // lwz @ 0x806BC534
    r31 = *(0x1c + r1); // lwz @ 0x806BC538
    r30 = *(0x18 + r1); // lwz @ 0x806BC53C
    r29 = *(0x14 + r1); // lwz @ 0x806BC540
    return;
}