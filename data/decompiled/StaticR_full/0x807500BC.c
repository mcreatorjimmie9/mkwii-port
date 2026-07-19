/* Function at 0x807500BC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807500BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807500C4
    *(0x14 + r1) = r0; // stw @ 0x807500C8
    *(0xc + r1) = r31; // stw @ 0x807500CC
    r31 = r3;
    r0 = *(0xc4 + r3); // lwz @ 0x807500D4
    *(0xd1 + r3) = r4; // stb @ 0x807500D8
    *(0xda + r3) = r4; // stb @ 0x807500E0
    *(0xde + r3) = r4; // stb @ 0x807500E4
    if (==) goto 0x0x807500f0;
    FUN_80750764(); // bl 0x80750764
    r3 = *(0xb4 + r31); // lwz @ 0x807500F0
    if (>) goto 0x0x80750104;
    r0 = r3 + 1; // 0x807500FC
    *(0xb4 + r31) = r0; // stw @ 0x80750100
    r0 = *(0xd8 + r31); // lha @ 0x80750104
    if (==) goto 0x0x80750118;
    r3 = r31;
    FUN_80750C64(r3); // bl 0x80750C64
    r0 = *(0xdc + r31); // lha @ 0x80750118
    if (==) goto 0x0x8075012c;
    r3 = r31;
    FUN_80750DA0(r3); // bl 0x80750DA0
    r0 = *(0x14 + r1); // lwz @ 0x8075012C
    r31 = *(0xc + r1); // lwz @ 0x80750130
    return;
}