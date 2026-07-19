/* Function at 0x807B6F84, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B6F84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B6F90
    r31 = r3;
    r4 = *(0x38 + r3); // lwz @ 0x807B6F98
    r3 = *(0 + r4); // lwz @ 0x807B6F9C
    r3 = *(0 + r3); // lwz @ 0x807B6FA0
    r3 = *(4 + r3); // lwz @ 0x807B6FA4
    r0 = *(0x14 + r3); // lwz @ 0x807B6FA8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x807B6FAC
    if (==) goto 0x0x807b6fd4;
    /* li r3, 0x30 */ // 0x807B6FB4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807b6fcc;
}