/* Function at 0x807FCCC4, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FCCC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FCCD0
    r31 = r3;
    FUN_8080F2E8(); // bl 0x8080F2E8
    /* li r0, 3 */ // 0x807FCCDC
    *(0xb0 + r31) = r0; // stw @ 0x807FCCE0
    /* lis r4, 0 */ // 0x807FCCE4
    r0 = *(0x2c + r31); // lhz @ 0x807FCCE8
    /* lfs f2, 0xc0(r31) */ // 0x807FCCEC
    /* lis r3, 0 */ // 0x807FCCF0
    /* lfs f1, 0(r4) */ // 0x807FCCF4
    r0 = r0 | 1; // 0x807FCCF8
    /* lfs f0, 0(r3) */ // 0x807FCCFC
    /* fadds f1, f2, f1 */ // 0x807FCD00
    *(0x2c + r31) = r0; // sth @ 0x807FCD04
    /* stfs f1, 0x34(r31) */ // 0x807FCD08
    /* stfs f0, 0xc4(r31) */ // 0x807FCD0C
    r31 = *(0xc + r1); // lwz @ 0x807FCD10
    r0 = *(0x14 + r1); // lwz @ 0x807FCD14
    return;
}