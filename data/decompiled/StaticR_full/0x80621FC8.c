/* Function at 0x80621FC8, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80621FC8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80621FD4
    r31 = r3;
    r0 = *(0x90 + r3); // lwz @ 0x80621FDC
    if (==) goto 0x0x80622080;
    r6 = *(0x94 + r3); // lha @ 0x80621FE8
    /* lis r5, 0x4330 */ // 0x80621FEC
    /* lis r4, 0 */ // 0x80621FF0
    /* lis r7, 0 */ // 0x80621FF4
    r6 = r6 + 1; // 0x80621FF8
    *(0x94 + r3) = r6; // sth @ 0x80621FFC
    /* slwi r0, r0, 1 */ // 0x80622000
    r4 = r4 + 0; // 0x80622004
    /* lhax r0, r4, r0 */ // 0x80622008
    /* extsh r4, r6 */ // 0x8062200C
    /* xoris r6, r4, 0x8000 */ // 0x80622010
    *(0xc + r1) = r6; // stw @ 0x80622014
    /* xoris r0, r0, 0x8000 */ // 0x80622018
    /* lis r4, 0 */ // 0x8062201C
    *(8 + r1) = r5; // stw @ 0x80622020
    /* lfd f3, 0(r7) */ // 0x80622024
    /* lfd f1, 8(r1) */ // 0x80622028
    *(0x14 + r1) = r0; // stw @ 0x8062202C
    /* fsubs f2, f1, f3 */ // 0x80622030
    /* lfs f0, 0(r4) */ // 0x80622034
    *(0x10 + r1) = r5; // stw @ 0x80622038
    /* lfd f1, 0x10(r1) */ // 0x8062203C
    /* fsubs f1, f1, f3 */ // 0x80622040
    /* fdivs f1, f2, f1 */ // 0x80622044
    /* stfs f1, 0x98(r3) */ // 0x80622048
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8062204C
    if (>=) goto 0x0x80622058;
    /* stfs f0, 0x98(r3) */ // 0x80622054
    r0 = *(0x90 + r3); // lwz @ 0x80622058
    /* lis r4, 0 */ // 0x8062205C
    r4 = r4 + 0; // 0x80622060
    r5 = *(0x94 + r3); // lha @ 0x80622064
    /* slwi r0, r0, 1 */ // 0x80622068
    /* lhax r0, r4, r0 */ // 0x8062206C
    if (<=) goto 0x0x80622080;
    /* li r0, -1 */ // 0x80622078
    *(0x90 + r3) = r0; // stw @ 0x8062207C
    r0 = *(8 + r3); // lwz @ 0x80622080
    /* lis r4, 0 */ // 0x80622084
    /* lfs f0, 0(r4) */ // 0x80622088
    /* lis r7, -0x180 */ // 0x8062208C
    r6 = r0 rlwinm 0; // rlwinm
    /* lis r5, 0x3fc0 */ // 0x80622094
    r8 = *(4 + r3); // lwz @ 0x80622098
    r7 = r7 + -0x6388; // 0x8062209C
    r0 = r5 + -0x1001; // 0x806220A0
    r4 = *(0xc + r3); // lwz @ 0x806220A4
    r5 = r8 & r7; // 0x806220A8
    *(4 + r3) = r5; // stw @ 0x806220AC
    r0 = r4 & r0; // 0x806220B0
    *(8 + r3) = r6; // stw @ 0x806220B4
    *(0xc + r3) = r0; // stw @ 0x806220B8
    /* stfs f0, 0x8c(r3) */ // 0x806220BC
    /* stfs f0, 0x88(r3) */ // 0x806220C0
    r3 = *(0x18 + r3); // lwz @ 0x806220C4
    FUN_8061E0C8(); // bl 0x8061E0C8
    FUN_80603124(); // bl 0x80603124
    r3 = r31;
    FUN_80622450(r3); // bl 0x80622450
    r3 = *(0x18 + r31); // lwz @ 0x806220D8
    FUN_8061E0C8(r3); // bl 0x8061E0C8
    FUN_805FD95C(r3); // bl 0x805FD95C
    r0 = *(0x24 + r1); // lwz @ 0x806220E4
    r31 = *(0x1c + r1); // lwz @ 0x806220E8
    return;
}