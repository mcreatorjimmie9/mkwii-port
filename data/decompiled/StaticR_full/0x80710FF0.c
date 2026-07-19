/* Function at 0x80710FF0, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80710FF0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r6 = r3;
    r4 = r4 + 8; // 0x80710FFC
    *(0x24 + r1) = r0; // stw @ 0x80711000
    *(0x1c + r1) = r31; // stw @ 0x80711008
    r31 = r5;
    r5 = r6 + 0x30; // 0x80711010
    FUN_805A4464(r3, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x80711018
    /* stfs f0, 0(r31) */ // 0x8071101C
    /* lfs f0, 0xc(r1) */ // 0x80711020
    /* stfs f0, 4(r31) */ // 0x80711024
    /* lfs f0, 0x10(r1) */ // 0x80711028
    /* stfs f0, 8(r31) */ // 0x8071102C
    r31 = *(0x1c + r1); // lwz @ 0x80711030
    r0 = *(0x24 + r1); // lwz @ 0x80711034
    return;
}