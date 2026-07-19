/* Function at 0x805FBB40, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FBB40(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FBB4C
    r31 = r3;
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lfs f2, 0x220(r3) */ // 0x805FBB58
    /* stfs f2, 0x22c(r31) */ // 0x805FBB5C
    r3 = *(0x234 + r31); // lwz @ 0x805FBB60
    r4 = *(0x230 + r31); // lwz @ 0x805FBB64
    /* lfs f0, 0(r3) */ // 0x805FBB68
    /* lfs f1, 0(r4) */ // 0x805FBB6C
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x805FBB70
    if (<=) goto 0x0x805fbb80;
    /* stfs f0, 0x22c(r31) */ // 0x805FBB78
    /* b 0x805fbb8c */ // 0x805FBB7C
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x805FBB80
    if (>=) goto 0x0x805fbb8c;
    /* stfs f1, 0x22c(r31) */ // 0x805FBB88
    r0 = *(0x14 + r1); // lwz @ 0x805FBB8C
    r31 = *(0xc + r1); // lwz @ 0x805FBB90
    return;
}