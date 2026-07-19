/* Function at 0x806A345C, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 15 function(s) */

int FUN_806A345C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x806A3474
    r28 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r3 = r28 + 0x98; // 0x806A3480
    /* li r4, 0 */ // 0x806A3484
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A348C
    /* li r4, 0 */ // 0x806A3490
    /* lfs f1, 0(r31) */ // 0x806A3494
    FUN_8069F7A0(r4, r4); // bl 0x8069F7A0
    r3 = r28 + 0x98; // 0x806A349C
    /* li r4, 1 */ // 0x806A34A0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A34A8
    /* li r4, 0 */ // 0x806A34AC
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r30 = r28 + 0x17c; // 0x806A34B4
    r0 = r28 + 0x2f0; // 0x806A34B8
    *(0x464 + r28) = r30; // stw @ 0x806A34BC
    /* li r29, 0 */ // 0x806A34C0
    *(0x468 + r28) = r0; // stw @ 0x806A34C4
    r3 = r30 + 0x98; // 0x806A34C8
    /* li r4, 0 */ // 0x806A34CC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A34D4
    /* li r4, 0 */ // 0x806A34D8
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x806A34E0
    /* li r4, 1 */ // 0x806A34E4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A34EC
    /* li r4, 1 */ // 0x806A34F0
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x806A34F8
    /* li r4, 2 */ // 0x806A34FC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A3504
    /* li r4, 1 */ // 0x806A3508
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r29 = r29 + 1; // 0x806A3510
    r30 = r30 + 0x174; // 0x806A3514
    if (<) goto 0x0x806a34c8;
    r3 = *(0x464 + r28); // lwz @ 0x806A3520
    /* li r4, 3 */ // 0x806A3524
    r3 = r3 + 0x98; // 0x806A3528
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A3530
    /* li r4, 3 */ // 0x806A3534
    /* lfs f1, 0(r31) */ // 0x806A3538
    FUN_8069F7A0(r3, r4); // bl 0x8069F7A0
    r3 = *(0x468 + r28); // lwz @ 0x806A3540
    /* li r4, 3 */ // 0x806A3544
    r3 = r3 + 0x98; // 0x806A3548
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A3550
    /* li r4, 0 */ // 0x806A3554
    FUN_8069F7A0(r4, r3, r4); // bl 0x8069F7A0
    r0 = *(0x24 + r1); // lwz @ 0x806A355C
    r31 = *(0x1c + r1); // lwz @ 0x806A3560
    r30 = *(0x18 + r1); // lwz @ 0x806A3564
    r29 = *(0x14 + r1); // lwz @ 0x806A3568
    r28 = *(0x10 + r1); // lwz @ 0x806A356C
    return;
}