/* Function at 0x805FD7BC, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805FD7BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805FD7C4
    *(0x14 + r1) = r0; // stw @ 0x805FD7C8
    r4 = r4 + 0; // 0x805FD7CC
    *(0xc + r1) = r31; // stw @ 0x805FD7D0
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x805FD7D8
    r3 = r3 + 4; // 0x805FD7DC
    FUN_8061DA08(r4, r3); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x805FD7E4
    /* lis r4, 0 */ // 0x805FD7E8
    /* lfs f0, 0(r3) */ // 0x805FD7EC
    r4 = r4 + 0; // 0x805FD7F0
    /* li r0, 0 */ // 0x805FD7F4
    *(0 + r31) = r4; // stw @ 0x805FD7F8
    /* li r3, 0x40 */ // 0x805FD7FC
    /* stfs f0, 0x14(r31) */ // 0x805FD800
    *(0x2c + r31) = r0; // stw @ 0x805FD804
    FUN_805E3430(r3); // bl 0x805E3430
}