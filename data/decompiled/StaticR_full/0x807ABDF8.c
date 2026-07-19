/* Function at 0x807ABDF8, size=104 bytes */
/* Stack frame: 0 bytes */

int FUN_807ABDF8(int r3, int r4, int r5)
{
    /* slwi r0, r4, 2 */ // 0x807ABDF8
    /* lis r4, 0 */ // 0x807ABDFC
    r3 = r3 + r0; // 0x807ABE00
    r3 = *(0xc + r3); // lwz @ 0x807ABE04
    r4 = r4 + 0; // 0x807ABE08
    /* lfs f0, 4(r4) */ // 0x807ABE0C
    r5 = *(4 + r3); // lwz @ 0x807ABE10
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807ABE14
    r3 = *(4 + r5); // lwz @ 0x807ABE18
    /* stfs f1, 8(r3) */ // 0x807ABE1C
    if (<=) goto 0x0x807abe2c;
    /* lfs f0, 0(r4) */ // 0x807ABE24
    /* b 0x807abe30 */ // 0x807ABE28
    /* lfs f0, 0x10(r4) */ // 0x807ABE2C
    /* stfs f0, 4(r3) */ // 0x807ABE30
    /* fneg f1, f1 */ // 0x807ABE34
    /* lfs f0, 4(r4) */ // 0x807ABE38
    r3 = *(8 + r5); // lwz @ 0x807ABE3C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807ABE40
    /* stfs f1, 8(r3) */ // 0x807ABE44
    if (<=) goto 0x0x807abe54;
    /* lfs f0, 0(r4) */ // 0x807ABE4C
    /* b 0x807abe58 */ // 0x807ABE50
    /* lfs f0, 0x10(r4) */ // 0x807ABE54
    /* stfs f0, 4(r3) */ // 0x807ABE58
    return;
}