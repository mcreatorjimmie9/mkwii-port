/* Function at 0x80875A44, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80875A44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80875A58
    r12 = *(0 + r3); // lwz @ 0x80875A5C
    r12 = *(0x3c + r12); // lwz @ 0x80875A60
    /* mtctr r12 */ // 0x80875A64
    /* bctrl  */ // 0x80875A68
    /* lis r3, 0 */ // 0x80875A6C
    r4 = *(0x1b4 + r31); // lbz @ 0x80875A70
    r3 = *(0 + r3); // lwz @ 0x80875A74
    /* slwi r0, r4, 2 */ // 0x80875A78
    r3 = *(0xc + r3); // lwz @ 0x80875A7C
    /* lwzx r3, r3, r0 */ // 0x80875A80
    r5 = *(0x38 + r3); // lwz @ 0x80875A84
    /* rlwinm. r0, r5, 0, 0x1b, 0x1b */ // 0x80875A88
    if (!=) goto 0x0x80875ab4;
    /* lis r3, 0 */ // 0x80875A90
    /* mulli r0, r4, 0xf0 */ // 0x80875A94
    r3 = *(0 + r3); // lwz @ 0x80875A98
    r3 = r3 + r0; // 0x80875A9C
    r0 = *(0x38 + r3); // lwz @ 0x80875AA0
    if (!=) goto 0x0x80875ac0;
    /* rlwinm. r0, r5, 0, 0x1e, 0x1e */ // 0x80875AAC
    if (==) goto 0x0x80875ac0;
    /* li r0, 1 */ // 0x80875AB4
    *(0x80 + r31) = r0; // stb @ 0x80875AB8
    /* b 0x80875ba8 */ // 0x80875ABC
    /* li r30, 0 */ // 0x80875AC0
    *(0x80 + r31) = r30; // stb @ 0x80875AC4
    /* lis r3, 0 */ // 0x80875AC8
    r4 = *(0x1b4 + r31); // lbz @ 0x80875ACC
    r3 = *(0 + r3); // lwz @ 0x80875AD0
    FUN_8061D97C(r3); // bl 0x8061D97C
    FUN_8061DA88(r3); // bl 0x8061DA88
    r12 = *(0 + r31); // lwz @ 0x80875ADC
    /* lis r6, 0 */ // 0x80875AE0
    r4 = r3;
    r3 = r31;
    r12 = *(0x50 + r12); // lwz @ 0x80875AEC
}