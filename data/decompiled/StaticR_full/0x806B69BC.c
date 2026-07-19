/* Function at 0x806B69BC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806B69BC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806B69C4
    *(0x14 + r1) = r0; // stw @ 0x806B69C8
    *(0xc + r1) = r31; // stw @ 0x806B69CC
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x806B69D4
    r4 = *(0 + r4); // lwz @ 0x806B69D8
    r0 = *(0 + r4); // lwz @ 0x806B69DC
    if (!=) goto 0x0x806b6a24;
    /* lis r3, 0 */ // 0x806B69E8
    r3 = *(0 + r3); // lwz @ 0x806B69EC
    r3 = r3 + 0x1808; // 0x806B69F0
    FUN_805BD048(r3, r3); // bl 0x805BD048
    FUN_808AF9D8(r3, r3); // bl 0x808AF9D8
    /* lis r4, 0 */ // 0x806B69FC
    r5 = r3;
    r4 = r4 + 0; // 0x806B6A04
    r3 = r31 + 0x314; // 0x806B6A08
    r4 = r4 + 0x254; // 0x806B6A0C
    /* li r6, 0 */ // 0x806B6A10
    FUN_806A093C(r5, r4, r3, r4, r6); // bl 0x806A093C
    /* li r0, 0 */ // 0x806B6A18
    *(0x394 + r31) = r0; // stb @ 0x806B6A1C
    /* b 0x806b6a2c */ // 0x806B6A20
    /* li r0, 1 */ // 0x806B6A24
    *(0x394 + r3) = r0; // stb @ 0x806B6A28
    r0 = *(0x14 + r1); // lwz @ 0x806B6A2C
    r31 = *(0xc + r1); // lwz @ 0x806B6A30
    return;
}