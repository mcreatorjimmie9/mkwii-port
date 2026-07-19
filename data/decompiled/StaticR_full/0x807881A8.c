/* Function at 0x807881A8, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807881A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807881B4
    r31 = r3;
    r0 = *(0x10 + r3); // lbz @ 0x807881BC
    if (!=) goto 0x0x8078820c;
    r3 = *(0x1c + r3); // lwz @ 0x807881C8
    if (==) goto 0x0x80788200;
    r3 = *(0 + r3); // lwz @ 0x807881D4
    if (==) goto 0x0x807881e4;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807881E4
    /* li r0, 0 */ // 0x807881E8
    r4 = *(0 + r3); // lwz @ 0x807881EC
    /* lis r3, 0 */ // 0x807881F0
    *(0xb8 + r4) = r0; // stw @ 0x807881F4
    r3 = *(0 + r3); // lwz @ 0x807881F8
    *(0x1d0 + r3) = r0; // stw @ 0x807881FC
    /* li r0, 0 */ // 0x80788200
    *(0x1c + r31) = r0; // stw @ 0x80788204
    *(0x10 + r31) = r0; // stb @ 0x80788208
    r0 = *(0x14 + r1); // lwz @ 0x8078820C
    r31 = *(0xc + r1); // lwz @ 0x80788210
    return;
}