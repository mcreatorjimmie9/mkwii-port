/* Function at 0x8079D1A8, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8079D1A8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8079D1B0
    *(0x18 + r1) = r30; // stw @ 0x8079D1BC
    *(0x14 + r1) = r29; // stw @ 0x8079D1C0
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x8079D1C8
    FUN_8078ADFC(); // bl 0x8078ADFC
    /* lis r3, 0 */ // 0x8079D1D0
    r3 = *(0 + r3); // lwz @ 0x8079D1D4
    FUN_807A5110(r3); // bl 0x807A5110
    /* lis r3, 0 */ // 0x8079D1DC
    r3 = *(0 + r3); // lwz @ 0x8079D1E0
    FUN_807AB40C(r3, r3); // bl 0x807AB40C
    /* lis r3, 0 */ // 0x8079D1E8
    r3 = *(0 + r3); // lwz @ 0x8079D1EC
    FUN_807A8504(r3, r3); // bl 0x807A8504
    FUN_807A03C8(r3); // bl 0x807A03C8
    if (!=) goto 0x0x8079d280;
    r3 = r29 + 0x78; // 0x8079D200
    /* li r4, 0 */ // 0x8079D204
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r31 = r3;
    r3 = r29 + 0x78; // 0x8079D210
    r4 = r31;
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r30 = r3;
    /* b 0x8079d24c */ // 0x8079D220
    r12 = *(0 + r31); // lwz @ 0x8079D224
}