/* Function at 0x80677318, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80677318(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r7, 2 */ // 0x80677320
    *(0xc + r1) = r31; // stw @ 0x80677328
    /* lis r31, 0 */ // 0x8067732C
    r31 = r31 + 0; // 0x80677330
    *(8 + r1) = r30; // stw @ 0x80677334
    r30 = r3;
    r4 = r31 + 0x93; // 0x8067733C
    r5 = *(0x1a8 + r3); // lwz @ 0x80677340
    r6 = *(0x1ac + r3); // lwz @ 0x80677344
    FUN_806A105C(r4); // bl 0x806A105C
    r5 = *(0x1a8 + r30); // lwz @ 0x8067734C
    r3 = r30;
    r6 = *(0x1ac + r30); // lwz @ 0x80677354
    r4 = r31 + 0x99; // 0x80677358
    /* li r7, 2 */ // 0x8067735C
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x1a8 + r30); // lwz @ 0x80677364
    r3 = r30;
    r6 = *(0x1ac + r30); // lwz @ 0x8067736C
    r4 = r31 + 0xa8; // 0x80677370
    /* li r7, 2 */ // 0x80677374
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r3 = r30;
    /* li r4, 0x3b */ // 0x80677380
    /* li r5, -1 */ // 0x80677384
    FUN_806A03CC(r7, r3, r4, r5); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x8067738C
    r31 = *(0xc + r1); // lwz @ 0x80677390
    r30 = *(8 + r1); // lwz @ 0x80677394
    return;
}