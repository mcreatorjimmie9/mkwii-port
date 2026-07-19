/* Function at 0x8078184C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078184C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8078185C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80781864
    r30 = r3;
    if (==) goto 0x0x8078189c;
    /* addic. r0, r3, 0xb0 */ // 0x80781870
    if (==) goto 0x0x8078188c;
    /* lis r4, 0 */ // 0x80781878
    r4 = r4 + 0; // 0x8078187C
    *(0xb0 + r3) = r4; // stw @ 0x80781880
    r3 = *(0xc4 + r3); // lwz @ 0x80781884
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078189c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807818A0
    r30 = *(8 + r1); // lwz @ 0x807818A4
    r0 = *(0x14 + r1); // lwz @ 0x807818A8
    return;
}