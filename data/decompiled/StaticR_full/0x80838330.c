/* Function at 0x80838330, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80838330(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8083833C
    r31 = r3;
    FUN_80828F78(); // bl 0x80828F78
    r0 = *(0x78 + r31); // lwz @ 0x80838348
    r3 = r31;
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x80838350
    if (==) goto 0x0x80838374;
    /* lis r5, 0 */ // 0x80838358
    /* li r4, 9 */ // 0x8083835C
    r0 = *(0 + r5); // lbz @ 0x80838360
    if (==) goto 0x0x8083838c;
    /* li r4, 7 */ // 0x8083836C
    /* b 0x8083838c */ // 0x80838370
    /* lis r4, 0 */ // 0x80838374
    r4 = *(0 + r4); // lbz @ 0x80838378
    /* neg r0, r4 */ // 0x8083837C
    r0 = r0 | r4; // 0x80838380
    r4 = r0 >> 0x1f; // srawi
    r4 = r4 + 4; // 0x80838388
    r5 = *(0x1dc + r31); // lbz @ 0x8083838C
    /* li r6, 0 */ // 0x80838390
    FUN_8083BD30(r4, r6); // bl 0x8083BD30
    r0 = *(0x14 + r1); // lwz @ 0x80838398
    r31 = *(0xc + r1); // lwz @ 0x8083839C
    return;
}