/* Function at 0x8073BBC0, size=104 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073BBC0(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x8073BBD0
    r30 = r3;
    r4 = *(0x64 + r3); // lwz @ 0x8073BBD8
    r0 = *(0x60 + r3); // lwz @ 0x8073BBDC
    if (<) goto 0x0x8073bcc0;
    /* lis r4, 0 */ // 0x8073BBE8
    /* lis r3, 0 */ // 0x8073BBEC
    /* lfs f0, 0(r3) */ // 0x8073BBF0
    /* lfs f1, 0(r4) */ // 0x8073BBF8
    /* stfs f1, 8(r1) */ // 0x8073BC00
    /* stfs f0, 0xc(r1) */ // 0x8073BC04
    /* stfs f0, 0x10(r1) */ // 0x8073BC08
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f0, 0x6d0(r30) */ // 0x8073BC10
    /* stfs f0, 0x24(r1) */ // 0x8073BC14
    /* lfs f0, 0x6d4(r30) */ // 0x8073BC18
    /* stfs f0, 0x34(r1) */ // 0x8073BC1C
    /* lfs f0, 0x6d8(r30) */ // 0x8073BC20
    /* stfs f0, 0x44(r1) */ // 0x8073BC24
}