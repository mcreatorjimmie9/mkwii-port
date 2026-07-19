/* Function at 0x806D71E0, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806D71E0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806D71EC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806D71F8
    /* lis r4, 0 */ // 0x806D71FC
    r3 = r3 + 0; // 0x806D7200
    *(0 + r31) = r3; // stw @ 0x806D7204
    /* lis r7, 0 */ // 0x806D7208
    r4 = r4 + 0; // 0x806D720C
    r6 = *(0 + r7); // lwzu @ 0x806D7210
    r3 = r31 + 0x58; // 0x806D7214
    *(8 + r1) = r6; // stw @ 0x806D7218
    r5 = *(4 + r7); // lwz @ 0x806D721C
    r0 = *(8 + r7); // lwz @ 0x806D7220
    *(0xc + r1) = r5; // stw @ 0x806D7224
    *(0x10 + r1) = r0; // stw @ 0x806D7228
    *(0x44 + r31) = r4; // stw @ 0x806D722C
    *(0x48 + r31) = r31; // stw @ 0x806D7230
    *(0x4c + r31) = r6; // stw @ 0x806D7234
    *(0x50 + r31) = r5; // stw @ 0x806D7238
    *(0x54 + r31) = r0; // stw @ 0x806D723C
    FUN_80668134(); // bl 0x80668134
    r3 = r31 + 0x68; // 0x806D7244
    FUN_805ABCB4(r3); // bl 0x805ABCB4
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806D7250
    r0 = *(0x24 + r1); // lwz @ 0x806D7254
    return;
}