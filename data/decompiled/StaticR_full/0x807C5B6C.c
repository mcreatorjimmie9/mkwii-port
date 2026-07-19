/* Function at 0x807C5B6C, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807C5B6C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807C5B7C
    r3 = *(0x14c + r3); // lwz @ 0x807C5B80
    if (==) goto 0x0x807c5bc8;
    FUN_807C36A8(); // bl 0x807C36A8
    /* lis r31, 0 */ // 0x807C5B90
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x807C5B98
    FUN_805C2BFC(); // bl 0x805C2BFC
    r5 = *(0 + r31); // lwz @ 0x807C5BA0
    /* clrlwi r0, r3, 0x18 */ // 0x807C5BA4
    r4 = r30 rlwinm 2; // rlwinm
    r3 = *(0xc + r5); // lwz @ 0x807C5BAC
    /* lwzx r3, r3, r4 */ // 0x807C5BB0
    r3 = *(0x26 + r3); // lbz @ 0x807C5BB4
    if (!=) goto 0x0x807c5bc8;
    /* li r3, 1 */ // 0x807C5BC0
    /* b 0x807c5bcc */ // 0x807C5BC4
    /* li r3, 0 */ // 0x807C5BC8
    r0 = *(0x14 + r1); // lwz @ 0x807C5BCC
    r31 = *(0xc + r1); // lwz @ 0x807C5BD0
    r30 = *(8 + r1); // lwz @ 0x807C5BD4
    return;
}