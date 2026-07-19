/* Function at 0x80616E48, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80616E48(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80616E54
    /* li r31, 0 */ // 0x80616E58
    r4 = *(0 + r3); // lwz @ 0x80616E5C
    r4 = *(4 + r4); // lwz @ 0x80616E60
    r0 = *(4 + r4); // lwz @ 0x80616E64
    /* rlwinm. r0, r0, 0, 0xc, 0xc */ // 0x80616E68
    if (!=) goto 0x0x80616e90;
    FUN_8061ECE4(); // bl 0x8061ECE4
    r0 = *(0x1c + r3); // lwz @ 0x80616E74
    r4 = *(0x18 + r3); // lwz @ 0x80616E78
    r0 = r0 rlwinm 0x19; // rlwinm
    r3 = r4 rlwinm 0x19; // rlwinm
    if (==) goto 0x0x80616e90;
    /* li r31, 1 */ // 0x80616E8C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80616E94
    r0 = *(0x14 + r1); // lwz @ 0x80616E98
    return;
}