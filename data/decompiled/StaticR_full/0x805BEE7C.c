/* Function at 0x805BEE7C, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805BEE7C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805BEE88
    r31 = r3;
    r4 = *(0xb50 + r3); // lwz @ 0x805BEE90
    if (<) goto 0x0x805beea4;
    if (<=) goto 0x0x805beeac;
    if (!=) goto 0x0x805beecc;
    /* lis r4, 0x74a2 */ // 0x805BEEAC
    r0 = r4 + -0x4f6b; // 0x805BEEB0
    *(0xb74 + r3) = r0; // stw @ 0x805BEEB4
    FUN_805E3430(r4); // bl 0x805E3430
    r0 = r3 rlwinm 0x1d; // rlwinm
    r0 = r3 rlwimi 5; // rlwimi
    *(0xb78 + r31) = r0; // stw @ 0x805BEEC4
    /* b 0x805bef50 */ // 0x805BEEC8
    r0 = *(0xb70 + r3); // lwz @ 0x805BEECC
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805BEED0
    if (==) goto 0x0x805beef8;
    /* lis r4, -0x6d44 */ // 0x805BEED8
    r0 = r4 + 0x7d03; // 0x805BEEDC
    *(0xb74 + r3) = r0; // stw @ 0x805BEEE0
    FUN_805E3430(r4); // bl 0x805E3430
    r0 = r3 rlwinm 0x1d; // rlwinm
    r0 = r3 rlwimi 5; // rlwimi
    *(0xb78 + r31) = r0; // stw @ 0x805BEEF0
    /* b 0x805bef50 */ // 0x805BEEF4
    r0 = *(0xb54 + r3); // lwz @ 0x805BEEF8
    if (==) goto 0x0x805bef50;
    /* li r0, 0 */ // 0x805BEF08
    if (<) goto 0x0x805bef1c;
    if (>) goto 0x0x805bef1c;
    /* li r0, 1 */ // 0x805BEF18
}