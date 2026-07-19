/* Function at 0x808BE50C, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 13 function(s) */

int FUN_808BE50C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808BE520
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808BE528
    r29 = r3;
    *(0x240 + r4) = r5; // stw @ 0x808BE530
    if (!=) goto 0x0x808be59c;
    r3 = r30;
    FUN_806A0C48(r3); // bl 0x806A0C48
    /* lis r31, 0 */ // 0x808BE540
    r3 = r30;
    r31 = r31 + 0; // 0x808BE548
    /* li r5, 0 */ // 0x808BE54C
    r4 = r31 + 0xce; // 0x808BE550
    FUN_806A11CC(r3, r5, r4); // bl 0x806A11CC
    r3 = r30;
    r4 = r31 + 0xd4; // 0x808BE55C
    /* li r5, 0 */ // 0x808BE560
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    r3 = r30;
    r4 = r31 + 0xe1; // 0x808BE56C
    /* li r5, 0 */ // 0x808BE570
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    r3 = r30;
    r4 = r31 + 0xee; // 0x808BE57C
    /* li r5, 0 */ // 0x808BE580
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    r3 = r30;
    r4 = r31 + 0xfd; // 0x808BE58C
    /* li r5, 0 */ // 0x808BE590
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    /* b 0x808be608 */ // 0x808BE598
    r3 = r30;
    FUN_806A0C48(r4, r5, r3); // bl 0x806A0C48
    /* lis r31, 0 */ // 0x808BE5A4
    r3 = r30;
    r31 = r31 + 0; // 0x808BE5AC
    /* li r5, 1 */ // 0x808BE5B0
    r4 = r31 + 0x10c; // 0x808BE5B4
    FUN_806A11CC(r3, r5, r4); // bl 0x806A11CC
    r3 = r30;
    r4 = r31 + 0x112; // 0x808BE5C0
    /* li r5, 1 */ // 0x808BE5C4
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    r3 = r30;
    r4 = r31 + 0x11f; // 0x808BE5D0
    /* li r5, 1 */ // 0x808BE5D4
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    r3 = r30;
    r4 = r31 + 0x12c; // 0x808BE5E0
    /* li r5, 1 */ // 0x808BE5E4
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    r3 = r30;
    r4 = r31 + 0x13b; // 0x808BE5F0
    /* li r5, 1 */ // 0x808BE5F4
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    r4 = *(0x6bc + r29); // lwz @ 0x808BE5FC
    r3 = r30;
    FUN_80649FD0(r4, r5, r3); // bl 0x80649FD0
    r0 = *(0x24 + r1); // lwz @ 0x808BE608
    r31 = *(0x1c + r1); // lwz @ 0x808BE60C
    r30 = *(0x18 + r1); // lwz @ 0x808BE610
    r29 = *(0x14 + r1); // lwz @ 0x808BE614
    return;
}