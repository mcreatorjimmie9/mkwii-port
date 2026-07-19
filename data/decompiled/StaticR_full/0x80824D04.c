/* Function at 0x80824D04, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80824D04(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80824D0C
    r0 = *(0x78 + r4); // lwz @ 0x80824D10
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80824D14
    if (!=) goto 0x0x80824d24;
    /* li r3, 1 */ // 0x80824D1C
    /* b 0x80824d30 */ // 0x80824D20
    r3 = r5;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* li r3, 1 */ // 0x80824D2C
    r0 = *(0x14 + r1); // lwz @ 0x80824D30
    return;
}