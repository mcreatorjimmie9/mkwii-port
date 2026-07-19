/* Function at 0x807BE3E8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807BE3E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 4 */ // 0x807BE3F0
    *(0x14 + r1) = r0; // stw @ 0x807BE3F4
    *(0xc + r1) = r31; // stw @ 0x807BE3F8
    r31 = r3;
    r3 = *(0x198 + r3); // lwz @ 0x807BE400
    FUN_807BB884(r4); // bl 0x807BB884
    r0 = *(0x1a0 + r31); // lbz @ 0x807BE408
    if (==) goto 0x0x807be460;
    r0 = *(0x1a4 + r31); // lwz @ 0x807BE414
    if (==) goto 0x0x807be434;
    if (==) goto 0x0x807be444;
    if (==) goto 0x0x807be454;
    /* b 0x807be460 */ // 0x807BE430
    r3 = r31;
    r4 = r31 + 0x38; // 0x807BE438
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807be460 */ // 0x807BE440
    r3 = r31;
    r4 = r31 + 0xe8; // 0x807BE448
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807be460 */ // 0x807BE450
    r3 = r31;
    r4 = r31 + 0x114; // 0x807BE458
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807BE460
    r31 = *(0xc + r1); // lwz @ 0x807BE464
    return;
}