/* Function at 0x806EC460, size=312 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_806EC460(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806EC474
    /* lis r30, 0 */ // 0x806EC478
    *(0x14 + r1) = r29; // stw @ 0x806EC47C
    r3 = *(0 + r30); // lwz @ 0x806EC480
    FUN_806E6B18(); // bl 0x806E6B18
    if (==) goto 0x0x806ec57c;
    r3 = *(0 + r30); // lwz @ 0x806EC490
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806ec4a8;
    /* li r0, 1 */ // 0x806EC4A0
    /* b 0x806ec4e0 */ // 0x806EC4A4
    r3 = *(0 + r30); // lwz @ 0x806EC4A8
    /* li r4, 1 */ // 0x806EC4AC
    r5 = *(0x3e0 + r31); // lwz @ 0x806EC4B0
    r0 = *(0x291c + r3); // lwz @ 0x806EC4B4
    /* mulli r0, r0, 0x58 */ // 0x806EC4B8
    r3 = r3 + r0; // 0x806EC4BC
    r0 = *(0x59 + r3); // lbz @ 0x806EC4C0
    r3 = *(0x48 + r3); // lwz @ 0x806EC4C4
    r0 = r4 << r0; // slw
    r5 = r5 | r0; // 0x806EC4CC
    r0 = r3 & r5; // 0x806EC4D0
    /* subf r0, r3, r0 */ // 0x806EC4D4
    /* cntlzw r0, r0 */ // 0x806EC4D8
    /* srwi r0, r0, 5 */ // 0x806EC4DC
    if (!=) goto 0x0x806ec528;
    /* li r29, 0 */ // 0x806EC4E8
    /* lis r30, 0 */ // 0x806EC4EC
    r5 = *(0 + r30); // lwz @ 0x806EC4F0
    r0 = r29 rlwinm 5; // rlwinm
    r3 = r29 rlwinm 2; // rlwinm
    r4 = r5 + r0; // 0x806EC4FC
    r0 = *(0x27a0 + r4); // lwz @ 0x806EC500
    /* mulli r0, r0, 0x30 */ // 0x806EC504
    r0 = r5 + r0; // 0x806EC508
    r3 = r3 + r0; // 0x806EC50C
    r3 = *(0x150 + r3); // lwz @ 0x806EC510
    r3 = *(4 + r3); // lwz @ 0x806EC514
    FUN_806E9F24(); // bl 0x806E9F24
    r29 = r29 + 1; // 0x806EC51C
    if (<) goto 0x0x806ec4f0;
    r3 = r31;
    FUN_806ED080(r3); // bl 0x806ED080
    r3 = r31;
    FUN_806ED1DC(r3, r3); // bl 0x806ED1DC
    r3 = r31;
    FUN_806ED614(r3, r3, r3); // bl 0x806ED614
    /* lis r31, 0 */ // 0x806EC540
    r3 = *(0 + r31); // lwz @ 0x806EC544
    FUN_806F4C44(r3); // bl 0x806F4C44
    if (!=) goto 0x0x806ec57c;
    r3 = *(0 + r31); // lwz @ 0x806EC554
    FUN_806F4CDC(); // bl 0x806F4CDC
    if (==) goto 0x0x806ec57c;
    r3 = *(0 + r31); // lwz @ 0x806EC564
    FUN_806F4C14(); // bl 0x806F4C14
    if (==) goto 0x0x806ec57c;
    r3 = *(0 + r31); // lwz @ 0x806EC574
    FUN_806F4BA8(); // bl 0x806F4BA8
    r0 = *(0x24 + r1); // lwz @ 0x806EC57C
    r31 = *(0x1c + r1); // lwz @ 0x806EC580
    r30 = *(0x18 + r1); // lwz @ 0x806EC584
    r29 = *(0x14 + r1); // lwz @ 0x806EC588
    return;
}