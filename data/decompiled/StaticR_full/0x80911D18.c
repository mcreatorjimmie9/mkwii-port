/* Function at 0x80911D18, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80911D18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r6, 1 */ // 0x80911D20
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80911D30
    *(0x14 + r1) = r29; // stw @ 0x80911D34
    r0 = *(0x17c + r3); // lwz @ 0x80911D38
    r4 = *(0x178 + r3); // lwz @ 0x80911D3C
    /* slwi r0, r0, 4 */ // 0x80911D40
    r4 = r4 + r0; // 0x80911D44
    r29 = *(4 + r4); // lwz @ 0x80911D48
    r4 = *(0 + r29); // lbz @ 0x80911D4C
    r5 = *(1 + r29); // lbz @ 0x80911D50
    FUN_8090FD04(); // bl 0x8090FD04
    r12 = *(0 + r31); // lwz @ 0x80911D58
    r3 = r31;
    /* li r4, 1 */ // 0x80911D60
    r12 = *(0x68 + r12); // lwz @ 0x80911D64
    /* mtctr r12 */ // 0x80911D68
    /* bctrl  */ // 0x80911D6C
    /* lfs f1, 0xe0(r31) */ // 0x80911D70
    /* li r30, 1 */ // 0x80911D74
    /* lfs f0, 0xe4(r31) */ // 0x80911D78
    /* fmuls f1, f1, f1 */ // 0x80911D7C
    /* lfs f2, 0xe8(r31) */ // 0x80911D80
    /* fmuls f0, f0, f0 */ // 0x80911D84
    *(0x185 + r31) = r30; // stb @ 0x80911D88
    /* fmuls f2, f2, f2 */ // 0x80911D8C
    /* fadds f0, f1, f0 */ // 0x80911D90
    /* fadds f1, f2, f0 */ // 0x80911D94
    FUN_805E3430(); // bl 0x805E3430
}