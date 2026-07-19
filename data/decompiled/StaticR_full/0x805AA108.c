/* Function at 0x805AA108, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805AA108(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805AA110
    /* li r5, 0 */ // 0x805AA114
    *(0x14 + r1) = r0; // stw @ 0x805AA118
    /* li r0, 0 */ // 0x805AA11C
    *(0xc + r1) = r31; // stw @ 0x805AA120
    r31 = r3;
    *(0x253c + r3) = r0; // stw @ 0x805AA128
    *(0x2541 + r3) = r0; // stb @ 0x805AA12C
    r3 = *(0 + r4); // lwz @ 0x805AA130
    r3 = *(0x54 + r3); // lwz @ 0x805AA134
    r3 = *(0xc + r3); // lwz @ 0x805AA138
    r0 = *(0x28 + r3); // lwz @ 0x805AA13C
    if (==) goto 0x0x805aa154;
    if (==) goto 0x0x805aa154;
    r5 = r3;
    r3 = r5 + 0xc94; // 0x805AA154
    /* li r4, 0xe */ // 0x805AA158
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}