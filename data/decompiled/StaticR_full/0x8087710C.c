/* Function at 0x8087710C, size=148 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8087710C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    r0 = r3;
    *(0x4c + r1) = r31; // stw @ 0x8087711C
    r31 = r4;
    r4 = r0;
    *(0x190 + r3) = r5; // stb @ 0x80877128
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x80877134
    r11 = *(0 + r7); // lwzu @ 0x80877138
    /* lis r5, 0 */ // 0x8087713C
    *(8 + r1) = r11; // stw @ 0x80877140
    r10 = *(4 + r7); // lwz @ 0x80877144
    r5 = r5 + 0; // 0x80877148
    r9 = *(8 + r7); // lwz @ 0x8087714C
    r4 = r5 + 0x17; // 0x80877150
    r8 = *(0xc + r7); // lwz @ 0x80877154
    r6 = r31;
    r0 = *(0x10 + r7); // lwz @ 0x8087715C
    *(0xc + r1) = r10; // stw @ 0x80877164
    r5 = r5 + 0x22; // 0x80877168
    *(0x10 + r1) = r9; // stw @ 0x80877170
    *(0x14 + r1) = r8; // stw @ 0x80877174
    *(0x18 + r1) = r0; // stw @ 0x80877178
    FUN_8064E36C(r5, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80877184
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x54 + r1); // lwz @ 0x8087718C
    r31 = *(0x4c + r1); // lwz @ 0x80877190
    return;
}