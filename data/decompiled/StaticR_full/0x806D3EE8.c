/* Function at 0x806D3EE8, size=160 bytes */
/* Stack frame: 432 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806D3EE8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -432(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    r5 = r31 + 0xc; // 0x806D3EFC
    *(0x1a8 + r1) = r30; // stw @ 0x806D3F00
    r30 = r3;
    *(0x1a4 + r1) = r29; // stw @ 0x806D3F08
    r3 = *(0x174 + r3); // lwz @ 0x806D3F0C
    r4 = *(0x178 + r30); // lwz @ 0x806D3F10
    FUN_8066DDCC(); // bl 0x8066DDCC
    FUN_80654ECC(r3); // bl 0x80654ECC
    r3 = *(0x174 + r30); // lwz @ 0x806D3F20
    r4 = *(0x178 + r30); // lwz @ 0x806D3F24
    FUN_8066E0EC(r3); // bl 0x8066E0EC
    /* lis r29, 0 */ // 0x806D3F2C
    *(0x11c + r1) = r3; // stw @ 0x806D3F30
    r29 = r29 + 0; // 0x806D3F34
    r3 = r30;
    r4 = r29 + 0x4d; // 0x806D3F3C
    /* li r5, 0x251d */ // 0x806D3F44
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r4 = r29 + 0x59; // 0x806D3F4C
    r3 = r30 + 0xa8; // 0x806D3F50
    FUN_80665D1C(r6, r5, r4, r3); // bl 0x80665D1C
    r6 = *(0x58 + r31); // lwz @ 0x806D3F58
    r5 = r29 + 0x64; // 0x806D3F5C
    r0 = *(0xbb + r3); // lbz @ 0x806D3F60
    /* li r4, 7 */ // 0x806D3F64
    /* cntlzw r6, r6 */ // 0x806D3F68
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r6 rlwimi 0x1b; // rlwimi
    *(0xbb + r3) = r0; // stb @ 0x806D3F74
    r6 = *(0x64 + r31); // lbz @ 0x806D3F7C
    /* crclr cr1eq */ // 0x806D3F80
    FUN_805E3430(r3); // bl 0x805E3430
}