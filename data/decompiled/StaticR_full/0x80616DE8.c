/* Function at 0x80616DE8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80616DE8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80616DF4
    /* li r31, 0 */ // 0x80616DF8
    r4 = *(0 + r3); // lwz @ 0x80616DFC
    r4 = *(4 + r4); // lwz @ 0x80616E00
    r0 = *(4 + r4); // lwz @ 0x80616E04
    /* rlwinm. r0, r0, 0, 0xc, 0xc */ // 0x80616E08
    if (!=) goto 0x0x80616e30;
    FUN_8061ECE4(); // bl 0x8061ECE4
    r0 = *(0x1c + r3); // lwz @ 0x80616E14
    r4 = *(0x18 + r3); // lwz @ 0x80616E18
    r0 = r0 rlwinm 0x19; // rlwinm
    r3 = r4 rlwinm 0x19; // rlwinm
    if (==) goto 0x0x80616e30;
    /* li r31, 1 */ // 0x80616E2C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80616E34
    r0 = *(0x14 + r1); // lwz @ 0x80616E38
    return;
}