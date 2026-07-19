/* Function at 0x805C8ACC, size=508 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805C8ACC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805C8AD8
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x805C8AE0
    r12 = *(0x14 + r12); // lwz @ 0x805C8AE4
    /* mtctr r12 */ // 0x805C8AE8
    /* bctrl  */ // 0x805C8AEC
    r3 = r31;
    FUN_805C895C(r3); // bl 0x805C895C
    if (!=) goto 0x0x805c8b1c;
    /* lis r3, 0 */ // 0x805C8B00
    r3 = *(0 + r3); // lwz @ 0x805C8B04
    r0 = *(0x20 + r3); // lwz @ 0x805C8B08
    if (<=) goto 0x0x805c8b1c;
    /* li r0, 1 */ // 0x805C8B14
    *(0x34 + r31) = r0; // stb @ 0x805C8B18
    r5 = *(4 + r31); // lwz @ 0x805C8B1C
    r3 = *(0x14 + r5); // lwz @ 0x805C8B20
    r0 = *(0x40 + r3); // lbz @ 0x805C8B24
    if (!=) goto 0x0x805c8b84;
    /* lis r4, 0 */ // 0x805C8B30
    r3 = *(0x1d + r5); // lbz @ 0x805C8B34
    r4 = *(0 + r4); // lwz @ 0x805C8B38
    r0 = *(0x24 + r4); // lbz @ 0x805C8B3C
    /* subf r0, r3, r0 */ // 0x805C8B40
    if (<=) goto 0x0x805c8b84;
    r0 = *(0xb70 + r4); // lwz @ 0x805C8B4C
    /* li r3, 0 */ // 0x805C8B50
    if (<) goto 0x0x805c8b68;
    if (>) goto 0x0x805c8b68;
    /* li r3, 1 */ // 0x805C8B64
    if (==) goto 0x0x805c8b98;
    /* lis r3, 0 */ // 0x805C8B70
    r3 = *(0 + r3); // lwz @ 0x805C8B74
    FUN_806E6B18(r3, r3); // bl 0x806E6B18
    if (!=) goto 0x0x805c8b98;
    r12 = *(0 + r31); // lwz @ 0x805C8B84
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805C8B8C
    /* mtctr r12 */ // 0x805C8B90
    /* bctrl  */ // 0x805C8B94
    r4 = *(4 + r31); // lwz @ 0x805C8B98
    /* lis r3, 0 */ // 0x805C8B9C
    /* lfs f0, 0(r3) */ // 0x805C8BA0
    /* lfs f1, 0x44(r4) */ // 0x805C8BA4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805C8BA8
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805C8BAC
    if (!=) goto 0x0x805c8cb4;
    r4 = *(0x10 + r31); // lbz @ 0x805C8BB4
    r0 = *(0xe + r31); // lhz @ 0x805C8BB8
    if (>) goto 0x0x805c8c8c;
    r3 = *(0x18 + r31); // lwz @ 0x805C8BC4
    r0 = r4 rlwinm 2; // rlwinm
    /* lfsx f0, r3, r0 */ // 0x805C8BCC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805C8BD0
    if (>=) goto 0x0x805c8c2c;
    if (>=) goto 0x0x805c8c00;
    /* li r0, 1 */ // 0x805C8BE0
    r3 = *(8 + r31); // lwz @ 0x805C8BE4
    r0 = r0 << r4; // slw
    r3 = r3 & r0; // 0x805C8BEC
    /* neg r0, r3 */ // 0x805C8BF0
    r0 = r0 | r3; // 0x805C8BF4
    /* srwi r0, r0, 0x1f */ // 0x805C8BF8
    /* b 0x805c8c04 */ // 0x805C8BFC
    /* li r0, 0 */ // 0x805C8C00
    if (!=) goto 0x0x805c8c8c;
    if (>=) goto 0x0x805c8c8c;
    /* li r0, 1 */ // 0x805C8C14
    r3 = *(8 + r31); // lwz @ 0x805C8C18
    r0 = r0 << r4; // slw
    r0 = r3 | r0; // 0x805C8C20
    *(8 + r31) = r0; // stw @ 0x805C8C24
    /* b 0x805c8c8c */ // 0x805C8C28
    r3 = *(0x14 + r31); // lwz @ 0x805C8C2C
    /* lfsx f0, r3, r0 */ // 0x805C8C30
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805C8C34
    if (<=) goto 0x0x805c8c8c;
    if (>=) goto 0x0x805c8c64;
    /* li r0, 1 */ // 0x805C8C44
    r3 = *(8 + r31); // lwz @ 0x805C8C48
    r0 = r0 << r4; // slw
    r3 = r3 & r0; // 0x805C8C50
    /* neg r0, r3 */ // 0x805C8C54
    r0 = r0 | r3; // 0x805C8C58
    /* srwi r0, r0, 0x1f */ // 0x805C8C5C
    /* b 0x805c8c68 */ // 0x805C8C60
    /* li r0, 0 */ // 0x805C8C64
    if (==) goto 0x0x805c8c8c;
    if (>=) goto 0x0x805c8c8c;
    /* li r0, 1 */ // 0x805C8C78
    r3 = *(8 + r31); // lwz @ 0x805C8C7C
    r0 = r0 << r4; // slw
    /* andc r0, r3, r0 */ // 0x805C8C84
    *(8 + r31) = r0; // stw @ 0x805C8C88
    r4 = *(0x10 + r31); // lbz @ 0x805C8C8C
    r3 = *(0xe + r31); // lhz @ 0x805C8C90
    r0 = r4 + 1; // 0x805C8C94
    *(0x10 + r31) = r0; // stb @ 0x805C8C98
    /* clrlwi r4, r0, 0x18 */ // 0x805C8C9C
    r0 = r3 + 0xf; // 0x805C8CA0
    if (<=) goto 0x0x805c8cb4;
    /* li r0, 0 */ // 0x805C8CAC
    *(0x10 + r31) = r0; // stb @ 0x805C8CB0
    r0 = *(0x14 + r1); // lwz @ 0x805C8CB4
    r31 = *(0xc + r1); // lwz @ 0x805C8CB8
    return;
}