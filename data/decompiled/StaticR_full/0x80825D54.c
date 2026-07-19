/* Function at 0x80825D54, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80825D54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80825D60
    *(0xc + r1) = r31; // stw @ 0x80825D64
    r31 = *(0x6c + r3); // lbz @ 0x80825D68
    if (==) goto 0x0x80825d78;
    /* li r3, 0x80 */ // 0x80825D70
    /* b 0x80825da4 */ // 0x80825D74
    r0 = *(4 + r3); // lwz @ 0x80825D78
    if (!=) goto 0x0x80825d8c;
    /* li r3, 0 */ // 0x80825D84
    /* b 0x80825da4 */ // 0x80825D88
    /* lis r3, 0 */ // 0x80825D8C
    /* mulli r0, r0, 0x24 */ // 0x80825D90
    r3 = *(0 + r3); // lwz @ 0x80825D94
    r3 = r3 + r0; // 0x80825D98
    r3 = r3 + 0x48; // 0x80825D9C
    FUN_808225B8(r3, r3); // bl 0x808225B8
    r0 = r31 rlwinm 8; // rlwinm
    r31 = *(0xc + r1); // lwz @ 0x80825DA8
    r0 = r0 | r3; // 0x80825DAC
    /* clrlwi r3, r0, 0x10 */ // 0x80825DB0
    r0 = *(0x14 + r1); // lwz @ 0x80825DB4
    return;
}