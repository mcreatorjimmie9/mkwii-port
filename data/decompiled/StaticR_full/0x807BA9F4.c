/* Function at 0x807BA9F4, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807BA9F4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x807BAA08
    r30 = r3;
    r0 = *(0x48 + r3); // lwz @ 0x807BAA10
    if (<) goto 0x0x807baac0;
    r12 = *(0 + r3); // lwz @ 0x807BAA1C
    /* slwi r0, r0, 2 */ // 0x807BAA20
    r4 = r3 + r0; // 0x807BAA24
    r12 = *(0x14 + r12); // lwz @ 0x807BAA28
    r4 = *(0x34 + r4); // lwz @ 0x807BAA2C
    /* mtctr r12 */ // 0x807BAA30
    /* bctrl  */ // 0x807BAA34
    if (!=) goto 0x0x807baa48;
    /* li r3, 1 */ // 0x807BAA40
    /* b 0x807baac4 */ // 0x807BAA44
    r4 = r31;
    r5 = r30 + 0x1c; // 0x807BAA50
    FUN_805A4498(r3, r4, r3, r5); // bl 0x805A4498
    /* lfs f1, 8(r1) */ // 0x807BAA58
    /* lfs f0, 0xc(r1) */ // 0x807BAA5C
    /* fmuls f1, f1, f1 */ // 0x807BAA60
    /* lfs f2, 0x10(r1) */ // 0x807BAA64
    /* fmuls f0, f0, f0 */ // 0x807BAA68
    /* fmuls f2, f2, f2 */ // 0x807BAA6C
    /* fadds f0, f1, f0 */ // 0x807BAA70
    /* fadds f1, f2, f0 */ // 0x807BAA74
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f2, 0x28(r30) */ // 0x807BAA7C
    /* lis r3, 0 */ // 0x807BAA80
    /* lfs f0, 0(r3) */ // 0x807BAA84
    /* fsubs f1, f2, f1 */ // 0x807BAA88
    /* stfs f1, 0x28(r30) */ // 0x807BAA8C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807BAA90
    /* lfs f0, 0(r31) */ // 0x807BAA94
}