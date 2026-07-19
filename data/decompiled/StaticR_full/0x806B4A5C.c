/* Function at 0x806B4A5C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B4A5C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4A64
    *(0x24 + r1) = r0; // stw @ 0x806B4A68
    *(0x1c + r1) = r31; // stw @ 0x806B4A6C
    r3 = *(0 + r3); // lwz @ 0x806B4A70
    r31 = *(0x98 + r3); // lwz @ 0x806B4A74
    if (!=) goto 0x0x806b4a88;
    /* li r0, 0 */ // 0x806B4A80
    /* b 0x806b4b14 */ // 0x806B4A84
    /* lis r7, 0 */ // 0x806B4A88
    /* li r0, 0x63 */ // 0x806B4A8C
    r7 = r7 + 0; // 0x806B4A90
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B4A98
    *(9 + r1) = r5; // stb @ 0x806B4AA0
    r6 = *(0 + r7); // lbz @ 0x806B4AA4
    r5 = *(2 + r7); // lbz @ 0x806B4AA8
    *(8 + r1) = r6; // stb @ 0x806B4AAC
    *(0xa + r1) = r5; // stb @ 0x806B4AB0
    *(9 + r1) = r0; // stb @ 0x806B4AB4
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b4acc;
    /* li r0, 0 */ // 0x806B4AC4
    /* b 0x806b4b14 */ // 0x806B4AC8
    if (==) goto 0x0x806b4ae0;
    r0 = *(-1 + r3); // lbz @ 0x806B4AD4
    if (!=) goto 0x0x806b4b10;
    /* lis r4, 0 */ // 0x806B4AE0
    r4 = r4 + 0; // 0x806B4AE8
    r4 = r4 + 0x27; // 0x806B4AEC
    /* crclr cr1eq */ // 0x806B4AF0
}