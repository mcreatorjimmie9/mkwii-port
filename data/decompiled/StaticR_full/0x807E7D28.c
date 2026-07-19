/* Function at 0x807E7D28, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E7D28(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807E7D34
    r31 = r3;
    FUN_807E5FFC(); // bl 0x807E5FFC
    r0 = *(0x54 + r31); // lbz @ 0x807E7D40
    /* li r3, 0 */ // 0x807E7D44
    *(0x124 + r31) = r3; // stw @ 0x807E7D48
    if (==) goto 0x0x807e7d5c;
    r3 = r31 + 0x48; // 0x807E7D54
    /* b 0x807e7d8c */ // 0x807E7D58
    /* li r0, 1 */ // 0x807E7D5C
    *(0x54 + r31) = r0; // stb @ 0x807E7D60
    r4 = r31 + 0x58; // 0x807E7D68
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x807E7D70
    r3 = r31 + 0x48; // 0x807E7D74
    /* stfs f0, 0x48(r31) */ // 0x807E7D78
    /* lfs f0, 0xc(r1) */ // 0x807E7D7C
    /* stfs f0, 0x4c(r31) */ // 0x807E7D80
    /* lfs f0, 0x10(r1) */ // 0x807E7D84
    /* stfs f0, 0x50(r31) */ // 0x807E7D88
    /* lfs f0, 4(r3) */ // 0x807E7D8C
    /* li r0, 1 */ // 0x807E7D90
    /* stfs f0, 0x128(r31) */ // 0x807E7D94
    *(0x12c + r31) = r0; // stb @ 0x807E7D98
    r31 = *(0x1c + r1); // lwz @ 0x807E7D9C
    r0 = *(0x24 + r1); // lwz @ 0x807E7DA0
    return;
}