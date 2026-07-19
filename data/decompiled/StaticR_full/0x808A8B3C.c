/* Function at 0x808A8B3C, size=444 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808A8B3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x808A8B44
    *(0x48 + r1) = r30; // stw @ 0x808A8B50
    r30 = r4;
    *(0x44 + r1) = r29; // stw @ 0x808A8B58
    r29 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x808A8B64
    /* li r31, 1 */ // 0x808A8B68
    r3 = r3 + 0; // 0x808A8B6C
    *(0 + r29) = r3; // stw @ 0x808A8B70
    r0 = *(0x2c + r29); // lhz @ 0x808A8B74
    /* lis r3, 0 */ // 0x808A8B78
    *(0xb0 + r29) = r31; // stw @ 0x808A8B7C
    /* lis r5, 0 */ // 0x808A8B80
    /* lfs f0, 0(r3) */ // 0x808A8B84
    r0 = r0 | 8; // 0x808A8B88
    r6 = *(0 + r30); // lwz @ 0x808A8B8C
    r4 = r29 + 0x30; // 0x808A8B94
    r5 = r5 + 0; // 0x808A8B98
    r6 = *(0x30 + r6); // lha @ 0x808A8B9C
    *(0xbe + r29) = r6; // sth @ 0x808A8BA0
    *(0x2c + r29) = r0; // sth @ 0x808A8BA4
    /* stfs f0, 0x3c(r29) */ // 0x808A8BA8
    /* stfs f0, 0x40(r29) */ // 0x808A8BAC
    /* stfs f0, 0x44(r29) */ // 0x808A8BB0
    FUN_805A4464(); // bl 0x805A4464
    r3 = *(0 + r30); // lwz @ 0x808A8BB8
    /* lis r0, 0x4330 */ // 0x808A8BBC
    /* lis r5, 0 */ // 0x808A8BC0
    /* lis r4, 0 */ // 0x808A8BC4
    r6 = *(0x36 + r3); // lha @ 0x808A8BC8
    *(0x30 + r1) = r0; // stw @ 0x808A8BD0
    r4 = r4 + 0; // 0x808A8BD4
    /* xoris r0, r6, 0x8000 */ // 0x808A8BD8
    /* lfd f1, 0(r5) */ // 0x808A8BDC
    *(0x34 + r1) = r0; // stw @ 0x808A8BE0
    /* lfd f0, 0x30(r1) */ // 0x808A8BE4
    /* fsubs f1, f0, f1 */ // 0x808A8BE8
    FUN_805A443C(); // bl 0x805A443C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r29); // lhz @ 0x808A8C00
    /* lis r3, 0 */ // 0x808A8C04
    /* lfs f0, 0x10(r1) */ // 0x808A8C08
    /* li r4, 0xb4 */ // 0x808A8C0C
    /* lfs f1, 0xc(r1) */ // 0x808A8C10
    r0 = r0 | 1; // 0x808A8C14
    /* lfs f2, 8(r1) */ // 0x808A8C18
    /* stfs f2, 0x30(r29) */ // 0x808A8C1C
    *(0x2c + r29) = r0; // sth @ 0x808A8C20
    /* stfs f1, 0x34(r29) */ // 0x808A8C24
    /* stfs f0, 0x38(r29) */ // 0x808A8C28
    *(4 + r29) = r31; // stw @ 0x808A8C2C
    r3 = *(0 + r3); // lwz @ 0x808A8C30
    r3 = *(8 + r3); // lwz @ 0x808A8C34
    FUN_805E364C(); // bl 0x805E364C
    *(0xbc + r29) = r3; // sth @ 0x808A8C3C
    /* lis r3, 0 */ // 0x808A8C40
    /* li r4, 0 */ // 0x808A8C44
    r5 = *(0 + r3); // lwz @ 0x808A8C48
    r3 = *(0xb70 + r5); // lwz @ 0x808A8C4C
    r0 = r3 + -3; // 0x808A8C50
    if (>) goto 0x0x808a8c6c;
    r0 = r31 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x808A8C60
    if (==) goto 0x0x808a8c6c;
    /* li r4, 1 */ // 0x808A8C68
    if (==) goto 0x0x808a8c88;
    r0 = *(0x25 + r5); // lbz @ 0x808A8C74
    if (==) goto 0x0x808a8c88;
    /* li r0, 1 */ // 0x808A8C80
    *(0xbe + r29) = r0; // sth @ 0x808A8C84
    /* li r0, 0 */ // 0x808A8C88
    *(0xb4 + r29) = r0; // stw @ 0x808A8C8C
    r3 = *(0 + r30); // lwz @ 0x808A8C90
    r3 = *(0x34 + r3); // lha @ 0x808A8C94
    r0 = r3 + -4; // 0x808A8C98
    /* clrlwi r0, r0, 0x10 */ // 0x808A8C9C
    if (>) goto 0x0x808a8cb8;
    /* lis r3, 0 */ // 0x808A8CA8
    r0 = *(0 + r3); // lha @ 0x808A8CAC
    *(0xb8 + r29) = r0; // stw @ 0x808A8CB0
    /* b 0x808a8cd8 */ // 0x808A8CB4
    if (!=) goto 0x0x808a8cd0;
    /* lis r3, 0 */ // 0x808A8CC0
    r0 = *(0 + r3); // lha @ 0x808A8CC4
    *(0xb8 + r29) = r0; // stw @ 0x808A8CC8
    /* b 0x808a8cd8 */ // 0x808A8CCC
    /* li r0, 0x96 */ // 0x808A8CD0
    *(0xb8 + r29) = r0; // stw @ 0x808A8CD4
    r31 = *(0x4c + r1); // lwz @ 0x808A8CD8
    r3 = r29;
    r30 = *(0x48 + r1); // lwz @ 0x808A8CE0
    r29 = *(0x44 + r1); // lwz @ 0x808A8CE4
    r0 = *(0x54 + r1); // lwz @ 0x808A8CE8
    return;
}