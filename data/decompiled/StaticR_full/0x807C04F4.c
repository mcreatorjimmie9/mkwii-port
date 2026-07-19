/* Function at 0x807C04F4, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_807C04F4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x807C04FC
    *(0xc + r1) = r31; // stw @ 0x807C0504
    *(8 + r1) = r30; // stw @ 0x807C0508
    r30 = r3;
    FUN_807C0648(r4); // bl 0x807C0648
    r31 = r3;
    r3 = r30;
    /* li r4, 1 */ // 0x807C051C
    FUN_807C0648(r3, r4); // bl 0x807C0648
    /* lis r4, 0 */ // 0x807C0524
    /* subf r5, r3, r31 */ // 0x807C0528
    r3 = *(0 + r4); // lwz @ 0x807C052C
    r0 = *(0xb90 + r3); // lwz @ 0x807C0530
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x807C0534
    if (==) goto 0x0x807c054c;
    r3 = *(0x84 + r30); // lwz @ 0x807C053C
    /* li r4, 2 */ // 0x807C0540
    FUN_807C5828(r4); // bl 0x807C5828
    /* b 0x807c0588 */ // 0x807C0548
    if (>) goto 0x0x807c0564;
    r3 = *(0x84 + r30); // lwz @ 0x807C0554
    /* li r4, 1 */ // 0x807C0558
    FUN_807C5828(r4); // bl 0x807C5828
    /* b 0x807c0588 */ // 0x807C0560
    if (>) goto 0x0x807c057c;
    r3 = *(0x84 + r30); // lwz @ 0x807C056C
    /* li r4, 2 */ // 0x807C0570
    FUN_807C5828(r4); // bl 0x807C5828
    /* b 0x807c0588 */ // 0x807C0578
    r3 = *(0x84 + r30); // lwz @ 0x807C057C
    /* li r4, 3 */ // 0x807C0580
    FUN_807C5828(r4, r4); // bl 0x807C5828
    r0 = *(0x14 + r1); // lwz @ 0x807C0588
    r31 = *(0xc + r1); // lwz @ 0x807C058C
    r30 = *(8 + r1); // lwz @ 0x807C0590
    return;
}