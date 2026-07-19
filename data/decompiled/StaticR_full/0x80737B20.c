/* Function at 0x80737B20, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80737B20(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80737B2C
    r31 = r3;
    r0 = *(0x7ba + r3); // lbz @ 0x80737B34
    if (==) goto 0x0x80737b68;
    r4 = *(0x614 + r3); // lwz @ 0x80737B40
    r7 = r3 + 0x6f4; // 0x80737B44
    r8 = r3 + 0x7c8; // 0x80737B48
    /* li r5, 0x16 */ // 0x80737B4C
    /* li r6, 0x19 */ // 0x80737B50
    /* li r9, 1 */ // 0x80737B54
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x80737B5C
    *(0xba + r31) = r0; // stb @ 0x80737B60
    /* b 0x80737b84 */ // 0x80737B64
    r4 = *(0x614 + r3); // lwz @ 0x80737B68
    r7 = r3 + 0x6f4; // 0x80737B6C
    r8 = r3 + 0x7c8; // 0x80737B70
    /* li r5, 0x16 */ // 0x80737B74
    /* li r6, 0x19 */ // 0x80737B78
    /* li r9, 1 */ // 0x80737B7C
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80737B84
    r31 = *(0xc + r1); // lwz @ 0x80737B88
    return;
}