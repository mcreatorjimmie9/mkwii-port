/* Function at 0x808EA078, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808EA078(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808EA08C
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808EA094
    r12 = *(0x70 + r12); // lwz @ 0x808EA098
    /* mtctr r12 */ // 0x808EA09C
    /* bctrl  */ // 0x808EA0A0
    /* mulli r0, r31, 0x5c */ // 0x808EA0A4
    r3 = r3 + r0; // 0x808EA0A8
    r0 = *(0xa4 + r3); // lbz @ 0x808EA0AC
    if (!=) goto 0x0x808ea118;
    r12 = *(0 + r30); // lwz @ 0x808EA0B8
    r3 = r30;
    r12 = *(0x70 + r12); // lwz @ 0x808EA0C0
    /* mtctr r12 */ // 0x808EA0C4
    /* bctrl  */ // 0x808EA0C8
    r4 = r31;
    /* li r5, 1 */ // 0x808EA0D0
    FUN_8066B6CC(r4, r5); // bl 0x8066B6CC
    r3 = *(0x48 + r30); // lwz @ 0x808EA0D8
    /* slwi r0, r31, 3 */ // 0x808EA0DC
    /* li r7, 0 */ // 0x808EA0E0
    /* slwi r5, r31, 1 */ // 0x808EA0E4
    /* lwzx r4, r3, r0 */ // 0x808EA0E8
    r0 = r5 + 1; // 0x808EA0EC
    /* slwi r0, r0, 2 */ // 0x808EA0F0
    r3 = r30;
    *(0x80 + r4) = r7; // stb @ 0x808EA0F8
    /* li r4, 6 */ // 0x808EA0FC
    /* li r5, -1 */ // 0x808EA100
    r6 = *(0x48 + r30); // lwz @ 0x808EA104
    /* lwzx r6, r6, r0 */ // 0x808EA108
    *(0x80 + r6) = r7; // stb @ 0x808EA10C
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* b 0x808ea130 */ // 0x808EA114
    if (!=) goto 0x0x808ea130;
    /* lis r4, 0 */ // 0x808EA120
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x808EA128
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x14 + r1); // lwz @ 0x808EA130
    r31 = *(0xc + r1); // lwz @ 0x808EA134
    r30 = *(8 + r1); // lwz @ 0x808EA138
    return;
}