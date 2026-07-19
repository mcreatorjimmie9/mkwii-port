/* Function at 0x8085619C, size=96 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_8085619C(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r22 */
    /* stmw r22, 0x98(r1) */ // 0x808561A8
    r22 = r4;
    r31 = r3;
    r5 = *(0x4c + r4); // lwz @ 0x808561B4
    /* lis r4, 0 */ // 0x808561B8
    r3 = *(0 + r4); // lwz @ 0x808561BC
    r4 = *(0x64 + r5); // lwz @ 0x808561C0
    FUN_80817FCC(r4); // bl 0x80817FCC
    r0 = *(0xc + r31); // lwz @ 0x808561C8
    /* lis r4, 0 */ // 0x808561CC
    /* srwi r5, r3, 0x18 */ // 0x808561D0
    *(0x24 + r1) = r5; // stb @ 0x808561D4
    r5 = r3 rlwinm 0x10; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x808561DC
    *(0x25 + r1) = r5; // stb @ 0x808561E0
    r5 = r3 rlwinm 0x18; // rlwinm
    *(0x27 + r1) = r3; // stb @ 0x808561E8
    *(0x26 + r1) = r5; // stb @ 0x808561F0
    *(0x1c + r1) = r0; // stw @ 0x808561F4
    FUN_805E3430(r3); // bl 0x805E3430
}