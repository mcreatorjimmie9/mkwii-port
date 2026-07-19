/* Function at 0x80834B80, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80834B80(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0x101 */ // 0x80834B88
    *(0x14 + r1) = r0; // stw @ 0x80834B8C
    r5 = r5 + 0x101; // 0x80834B90
    *(0xc + r1) = r31; // stw @ 0x80834B94
    r31 = r3;
    r4 = *(0xa4 + r3); // lwz @ 0x80834B9C
    r0 = *(0x20 + r4); // lwz @ 0x80834BA0
    /* andc. r0, r5, r0 */ // 0x80834BA4
    if (==) goto 0x0x80834bec;
    r0 = *(0x7c + r31); // lwz @ 0x80834BAC
    /* lis r3, 0 */ // 0x80834BB0
    r3 = *(0 + r3); // lwz @ 0x80834BB4
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80834BB8
    r3 = *(0x74 + r3); // lwz @ 0x80834BBC
    if (==) goto 0x0x80834bcc;
    r4 = r31 + 0x8c; // 0x80834BC4
    /* b 0x80834bd0 */ // 0x80834BC8
    r4 = *(0x98 + r31); // lwz @ 0x80834BCC
    /* lfs f1, 0x68(r31) */ // 0x80834BD0
    FUN_8071D188(r4); // bl 0x8071D188
    /* lis r3, 0 */ // 0x80834BD8
    r4 = *(0xa + r31); // lha @ 0x80834BDC
    r3 = *(0 + r3); // lwz @ 0x80834BE0
    r3 = *(0x74 + r3); // lwz @ 0x80834BE4
    FUN_8071D034(r3); // bl 0x8071D034
    r3 = r31;
    FUN_80828D50(r3); // bl 0x80828D50
    r0 = *(0x14 + r1); // lwz @ 0x80834BF4
    r31 = *(0xc + r1); // lwz @ 0x80834BF8
    return;
}