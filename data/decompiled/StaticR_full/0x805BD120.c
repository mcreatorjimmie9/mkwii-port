/* Function at 0x805BD120, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805BD120(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x805BD128
    /* lis r5, 0 */ // 0x805BD12C
    *(0x24 + r1) = r0; // stw @ 0x805BD130
    r6 = r6 + 0; // 0x805BD134
    r5 = r5 + 0; // 0x805BD138
    /* li r7, 0xc */ // 0x805BD13C
    *(0x1c + r1) = r31; // stw @ 0x805BD140
    /* li r31, 0 */ // 0x805BD144
    *(0x18 + r1) = r30; // stw @ 0x805BD148
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805BD150
    r29 = r3;
    *(0 + r3) = r6; // stw @ 0x805BD158
    /* lis r6, 0 */ // 0x805BD15C
    r4 = r6 + 0; // 0x805BD160
    *(4 + r3) = r31; // stb @ 0x805BD164
    /* li r6, 0xf0 */ // 0x805BD168
    *(5 + r3) = r31; // stb @ 0x805BD16C
    r3 = r3 + 8; // 0x805BD170
    FUN_805E3430(r4, r6, r3); // bl 0x805E3430
}