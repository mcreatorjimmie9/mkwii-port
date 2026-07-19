/* Function at 0x807B5BEC, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B5BEC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B5BF8
    r31 = r3;
    /* lis r3, 0 */ // 0x807B5C00
    r3 = *(0 + r3); // lwz @ 0x807B5C04
    r4 = *(4 + r31); // lbz @ 0x807B5C08
    FUN_8061D97C(r3); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x807B5C10
    r3 = *(4 + r3); // lwz @ 0x807B5C14
    r0 = *(0xc + r3); // lwz @ 0x807B5C18
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x807B5C1C
    if (==) goto 0x0x807b5c30;
    /* li r0, 1 */ // 0x807B5C24
    *(5 + r31) = r0; // stb @ 0x807B5C28
    /* b 0x807b5c38 */ // 0x807B5C2C
    /* li r0, 0 */ // 0x807B5C30
    *(5 + r31) = r0; // stb @ 0x807B5C34
    r0 = *(0x14 + r1); // lwz @ 0x807B5C38
    r31 = *(0xc + r1); // lwz @ 0x807B5C3C
    return;
}