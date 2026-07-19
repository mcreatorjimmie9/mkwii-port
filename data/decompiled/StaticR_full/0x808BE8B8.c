/* Function at 0x808BE8B8, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808BE8B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808BE8C0
    *(0x18 + r1) = r30; // stw @ 0x808BE8CC
    *(0x14 + r1) = r29; // stw @ 0x808BE8D0
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808BE8D8
    r3 = *(0 + r3); // lwz @ 0x808BE8DC
    r30 = *(0x204 + r3); // lwz @ 0x808BE8E0
    if (!=) goto 0x0x808be8f4;
    /* li r30, 0 */ // 0x808BE8EC
    /* b 0x808be948 */ // 0x808BE8F0
    /* lis r31, 0 */ // 0x808BE8F4
    r31 = r31 + 0; // 0x808BE8F8
    if (==) goto 0x0x808be944;
    r12 = *(0 + r30); // lwz @ 0x808BE900
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BE908
    /* mtctr r12 */ // 0x808BE90C
    /* bctrl  */ // 0x808BE910
    /* b 0x808be92c */ // 0x808BE914
    if (!=) goto 0x0x808be928;
    /* li r0, 1 */ // 0x808BE920
    /* b 0x808be938 */ // 0x808BE924
    r3 = *(0 + r3); // lwz @ 0x808BE928
    if (!=) goto 0x0x808be918;
    /* li r0, 0 */ // 0x808BE934
    if (==) goto 0x0x808be944;
    /* b 0x808be948 */ // 0x808BE940
    /* li r30, 0 */ // 0x808BE944
    r0 = *(0x25c + r29); // lbz @ 0x808BE948
    if (==) goto 0x0x808be96c;
    r3 = r30;
    /* li r4, 0 */ // 0x808BE958
    /* li r5, 1 */ // 0x808BE95C
    /* li r6, 1 */ // 0x808BE960
    FUN_806CCB68(r3, r4, r5, r6); // bl 0x806CCB68
    /* b 0x808be9bc */ // 0x808BE968
    /* li r0, 0 */ // 0x808BE96C
    /* mulli r0, r0, 0xc */ // 0x808BE970
    r3 = r30 + r0; // 0x808BE974
    r0 = *(0x5c + r3); // lbz @ 0x808BE978
    if (==) goto 0x0x808be9a8;
    r3 = r29;
    FUN_808BEABC(r3); // bl 0x808BEABC
    *(0x25c + r29) = r3; // stb @ 0x808BE98C
    r3 = r30;
    /* li r4, 0 */ // 0x808BE994
    /* li r5, 1 */ // 0x808BE998
    /* li r6, 1 */ // 0x808BE99C
    FUN_806CCB68(r3, r4, r5, r6); // bl 0x806CCB68
    /* b 0x808be9bc */ // 0x808BE9A4
    r3 = r30;
    /* li r4, 0 */ // 0x808BE9AC
    /* li r5, 0 */ // 0x808BE9B0
    /* li r6, 0 */ // 0x808BE9B4
    FUN_806CCB68(r3, r4, r5, r6); // bl 0x806CCB68
    r0 = *(0x24 + r1); // lwz @ 0x808BE9BC
    r31 = *(0x1c + r1); // lwz @ 0x808BE9C0
    r30 = *(0x18 + r1); // lwz @ 0x808BE9C4
    r29 = *(0x14 + r1); // lwz @ 0x808BE9C8
    return;
}