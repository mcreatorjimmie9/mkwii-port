/* Function at 0x805CDCE8, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_805CDCE8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805CDCF4
    /* lis r28, 0 */ // 0x805CDCF8
    r30 = r3;
    r4 = *(0 + r28); // lwz @ 0x805CDD00
    r0 = *(0xb74 + r4); // lwz @ 0x805CDD04
    if (!=) goto 0x0x805cdd18;
    /* li r3, 0 */ // 0x805CDD10
    /* b 0x805cddf4 */ // 0x805CDD14
    r3 = *(4 + r3); // lwz @ 0x805CDD18
    /* li r4, 2 */ // 0x805CDD1C
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cdd34;
    /* li r3, 0 */ // 0x805CDD2C
    /* b 0x805cddf4 */ // 0x805CDD30
    r3 = *(4 + r30); // lwz @ 0x805CDD34
    /* li r4, 4 */ // 0x805CDD38
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (==) goto 0x0x805cdd50;
    /* li r3, 0 */ // 0x805CDD48
    /* b 0x805cddf4 */ // 0x805CDD4C
    r0 = *(0x114 + r30); // lbz @ 0x805CDD50
    if (==) goto 0x0x805cdd64;
    /* li r3, 0 */ // 0x805CDD5C
    /* b 0x805cddf4 */ // 0x805CDD60
    /* li r31, 0 */ // 0x805CDD64
    /* lis r29, 0 */ // 0x805CDD68
    r27 = r30 + r31; // 0x805CDD6C
    r0 = *(0x108 + r27); // lbz @ 0x805CDD70
    if (==) goto 0x0x805cdde4;
    /* mulli r0, r0, 0xf0 */ // 0x805CDD7C
    r3 = *(0 + r28); // lwz @ 0x805CDD80
    r3 = r3 + r0; // 0x805CDD84
    r0 = *(0x2e + r3); // lbz @ 0x805CDD88
    /* extsb r0, r0 */ // 0x805CDD90
    if (>) goto 0x0x805cdde4;
    r3 = *(0 + r29); // lwz @ 0x805CDD98
    /* clrlwi r4, r0, 0x18 */ // 0x805CDD9C
    /* li r5, 0x708 */ // 0x805CDDA0
    /* li r6, 0xe10 */ // 0x805CDDA4
    FUN_805B3200(r5, r6); // bl 0x805B3200
    if (==) goto 0x0x805cdde4;
    r3 = *(4 + r30); // lwz @ 0x805CDDB4
    r0 = *(0x108 + r27); // lbz @ 0x805CDDB8
    r3 = *(0xc + r3); // lwz @ 0x805CDDBC
    /* slwi r0, r0, 2 */ // 0x805CDDC0
    /* lwzx r3, r3, r0 */ // 0x805CDDC4
    r0 = *(0x38 + r3); // lwz @ 0x805CDDC8
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CDDCC
    if (!=) goto 0x0x805cdde4;
    /* li r0, 1 */ // 0x805CDDD4
    *(0x114 + r30) = r0; // stb @ 0x805CDDD8
    /* li r3, 1 */ // 0x805CDDDC
    /* b 0x805cddf4 */ // 0x805CDDE0
    r31 = r31 + 1; // 0x805CDDE4
    if (<) goto 0x0x805cdd6c;
    /* li r3, 0 */ // 0x805CDDF0
    r0 = *(0x24 + r1); // lwz @ 0x805CDDF8
    return;
}