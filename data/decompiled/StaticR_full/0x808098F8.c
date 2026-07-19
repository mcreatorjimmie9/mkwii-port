/* Function at 0x808098F8, size=180 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808098F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80809900
    *(0x4c + r1) = r31; // stw @ 0x80809908
    *(0x48 + r1) = r30; // stw @ 0x8080990C
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x80809914
    r0 = *(0x25 + r4); // lbz @ 0x80809918
    if (!=) goto 0x0x80809930;
    r0 = *(0xb8 + r3); // lbz @ 0x80809924
    if (==) goto 0x0x8080997c;
    r3 = *(8 + r3); // lwz @ 0x80809930
    /* lis r31, 0 */ // 0x80809934
    /* lis r5, 0 */ // 0x80809938
    /* lfs f1, 0(r31) */ // 0x8080993C
    r3 = *(0x28 + r3); // lwz @ 0x80809940
    /* li r4, 0 */ // 0x80809944
    /* lfs f2, 0(r5) */ // 0x80809948
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* lfs f1, 0(r31) */ // 0x80809950
    r3 = r30;
    /* li r4, 0x216 */ // 0x80809958
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r3 = *(0xb0 + r30); // lwz @ 0x80809960
    r12 = *(0 + r3); // lwz @ 0x80809964
    r12 = *(0xc + r12); // lwz @ 0x80809968
    /* mtctr r12 */ // 0x8080996C
    /* bctrl  */ // 0x80809970
    /* li r0, 0 */ // 0x80809974
    *(0xb8 + r30) = r0; // stb @ 0x80809978
    r3 = *(8 + r30); // lwz @ 0x8080997C
    r3 = *(0x10 + r3); // lwz @ 0x80809980
    r0 = *(4 + r3); // lwz @ 0x80809984
    if (!=) goto 0x0x80809998;
    r3 = *(0 + r3); // lwz @ 0x80809990
    /* b 0x8080999c */ // 0x80809994
    /* li r3, 0 */ // 0x80809998
    r6 = *(0xb4 + r30); // lwz @ 0x8080999C
    /* li r5, 1 */ // 0x808099A4
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}