/* Function at 0x807A7B28, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807A7B28(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807A7B30
    *(0x14 + r1) = r0; // stw @ 0x807A7B34
    *(0xc + r1) = r31; // stw @ 0x807A7B38
    r31 = r3;
    *(0 + r3) = r4; // stb @ 0x807A7B40
    r3 = *(0 + r5); // lwz @ 0x807A7B44
    FUN_805C14C8(); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x807A7B4C
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x807A7B54
    /* extsb r4, r0 */ // 0x807A7B58
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061E010(r4); // bl 0x8061E010
    *(4 + r31) = r3; // stw @ 0x807A7B64
    r31 = *(0xc + r1); // lwz @ 0x807A7B68
    r0 = *(0x14 + r1); // lwz @ 0x807A7B6C
    return;
}