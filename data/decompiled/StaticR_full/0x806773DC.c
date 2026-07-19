/* Function at 0x806773DC, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806773DC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r7, 2 */ // 0x806773E4
    *(0xc + r1) = r31; // stw @ 0x806773EC
    /* lis r31, 0 */ // 0x806773F0
    r31 = r31 + 0; // 0x806773F4
    *(8 + r1) = r30; // stw @ 0x806773F8
    r30 = r3;
    r4 = r31 + 0xb7; // 0x80677400
    r5 = *(0x1a8 + r3); // lwz @ 0x80677404
    r6 = *(0x1ac + r3); // lwz @ 0x80677408
    FUN_806A105C(r4); // bl 0x806A105C
    r5 = *(0x1a8 + r30); // lwz @ 0x80677410
    r3 = r30;
    r6 = *(0x1ac + r30); // lwz @ 0x80677418
    r4 = r31 + 0xbd; // 0x8067741C
    /* li r7, 2 */ // 0x80677420
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x1a8 + r30); // lwz @ 0x80677428
    r3 = r30;
    r6 = *(0x1ac + r30); // lwz @ 0x80677430
    r4 = r31 + 0xcc; // 0x80677434
    /* li r7, 2 */ // 0x80677438
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r3 = r30;
    /* li r4, 0x3b */ // 0x80677444
    /* li r5, -1 */ // 0x80677448
    FUN_806A03CC(r7, r3, r4, r5); // bl 0x806A03CC
    r3 = r30 + 0x98; // 0x80677450
    /* li r4, 2 */ // 0x80677454
    FUN_8069F4A0(r4, r5, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8067745C
    /* li r4, 0 */ // 0x80677460
    /* lfs f1, 0(r31) */ // 0x80677464
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x8067746C
    /* li r4, 3 */ // 0x80677470
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80677478
    /* li r4, 0 */ // 0x8067747C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80677484
    r31 = *(0xc + r1); // lwz @ 0x80677488
    r30 = *(8 + r1); // lwz @ 0x8067748C
    return;
}