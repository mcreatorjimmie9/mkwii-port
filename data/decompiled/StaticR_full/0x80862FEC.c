/* Function at 0x80862FEC, size=80 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80862FEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x80862FFC
    r31 = r3;
    /* lfs f0, 0(r3) */ // 0x80863004
    /* stfs f0, 0x2c(r1) */ // 0x80863008
    /* lfs f0, 0x10(r3) */ // 0x8086300C
    /* stfs f0, 0x30(r1) */ // 0x80863010
    r6 = *(0x2c + r1); // lwz @ 0x80863014
    /* lfs f0, 0x20(r3) */ // 0x80863018
    /* stfs f0, 0x34(r1) */ // 0x80863020
    r5 = *(0x30 + r1); // lwz @ 0x80863024
    r0 = *(0x34 + r1); // lwz @ 0x80863028
    *(0x20 + r1) = r6; // stw @ 0x8086302C
    *(0x24 + r1) = r5; // stw @ 0x80863030
    *(0x28 + r1) = r0; // stw @ 0x80863034
    FUN_80816F30(); // bl 0x80816F30
}