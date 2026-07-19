/* Function at 0x806A465C, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_806A465C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806A4678
    r28 = r3;
    r5 = *(0x64 + r3); // lwz @ 0x806A4680
    r3 = *(0xc + r5); // lwz @ 0x806A4684
    r30 = *(0x38 + r3); // lwz @ 0x806A4688
    if (!=) goto 0x0x806a469c;
    /* li r30, 0 */ // 0x806A4694
    /* b 0x806a46f0 */ // 0x806A4698
    /* lis r31, 0 */ // 0x806A469C
    r31 = r31 + 0; // 0x806A46A0
    if (==) goto 0x0x806a46ec;
    r12 = *(0 + r30); // lwz @ 0x806A46A8
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x806A46B0
    /* mtctr r12 */ // 0x806A46B4
    /* bctrl  */ // 0x806A46B8
    /* b 0x806a46d4 */ // 0x806A46BC
    if (!=) goto 0x0x806a46d0;
    /* li r0, 1 */ // 0x806A46C8
    /* b 0x806a46e0 */ // 0x806A46CC
    r3 = *(0 + r3); // lwz @ 0x806A46D0
    if (!=) goto 0x0x806a46c0;
    /* li r0, 0 */ // 0x806A46DC
    if (==) goto 0x0x806a46ec;
    /* b 0x806a46f0 */ // 0x806A46E8
    /* li r30, 0 */ // 0x806A46EC
    r3 = r30;
    r4 = r29;
    r5 = r28 + 0x174; // 0x806A46F8
    /* li r6, -1 */ // 0x806A46FC
    FUN_8066A36C(r3, r4, r5, r6); // bl 0x8066A36C
    r3 = r28 + 0x98; // 0x806A4704
    /* li r4, 0 */ // 0x806A4708
    FUN_8069F4A0(r5, r6, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A4710
    /* li r4, 2 */ // 0x806A4714
    /* lfs f1, 0(r5) */ // 0x806A4718
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x806A4720
    r31 = *(0x1c + r1); // lwz @ 0x806A4724
    r30 = *(0x18 + r1); // lwz @ 0x806A4728
    r29 = *(0x14 + r1); // lwz @ 0x806A472C
    r28 = *(0x10 + r1); // lwz @ 0x806A4730
    return;
}