/* Function at 0x806A9648, size=276 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

void FUN_806A9648(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806A9650
    /* li r4, -1 */ // 0x806A9654
    *(0x14 + r1) = r0; // stw @ 0x806A9658
    *(0xc + r1) = r31; // stw @ 0x806A965C
    r3 = *(0 + r3); // lwz @ 0x806A9660
    r3 = *(0 + r3); // lwz @ 0x806A9664
    r0 = *(0 + r3); // lwz @ 0x806A9668
    if (==) goto 0x0x806a9720;
    if (>=) goto 0x0x806a96b8;
    if (==) goto 0x0x806a970c;
    if (>=) goto 0x0x806a96ac;
    if (>=) goto 0x0x806a96a0;
    if (>=) goto 0x0x806a9720;
    if (>=) goto 0x0x806a96f4;
    /* b 0x806a9720 */ // 0x806A969C
    if (>=) goto 0x0x806a9720;
    /* b 0x806a96f4 */ // 0x806A96A8
    if (==) goto 0x0x806a9720;
    /* b 0x806a9714 */ // 0x806A96B4
    if (==) goto 0x0x806a970c;
    if (>=) goto 0x0x806a96dc;
    if (==) goto 0x0x806a9714;
    if (>=) goto 0x0x806a9720;
    if (>=) goto 0x0x806a9720;
    /* b 0x806a96fc */ // 0x806A96D8
    if (==) goto 0x0x806a9704;
    if (>=) goto 0x0x806a9720;
    if (>=) goto 0x0x806a9720;
    /* b 0x806a971c */ // 0x806A96F0
    /* li r4, 0x41 */ // 0x806A96F4
    /* b 0x806a9720 */ // 0x806A96F8
    /* li r4, 0x7a */ // 0x806A96FC
    /* b 0x806a9720 */ // 0x806A9700
    /* li r4, 0x9e */ // 0x806A9704
    /* b 0x806a9720 */ // 0x806A9708
    /* li r4, -1 */ // 0x806A970C
    /* b 0x806a9720 */ // 0x806A9710
    /* li r4, 0x7a */ // 0x806A9714
    /* b 0x806a9720 */ // 0x806A9718
    /* li r4, 0x9e */ // 0x806A971C
    if (==) goto 0x0x806a9748;
    /* lis r31, 0 */ // 0x806A9728
    /* li r5, 0 */ // 0x806A972C
    r3 = *(0 + r31); // lwz @ 0x806A9730
    FUN_80698C44(r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806A9738
    /* li r4, 0 */ // 0x806A973C
    /* li r5, 0xff */ // 0x806A9740
    FUN_80698CD0(r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806A9748
    r31 = *(0xc + r1); // lwz @ 0x806A974C
    return;
}