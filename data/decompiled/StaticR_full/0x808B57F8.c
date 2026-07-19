/* Function at 0x808B57F8, size=220 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

void FUN_808B57F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808B5800
    r0 = *(0x240 + r4); // lwz @ 0x808B5804
    if (==) goto 0x0x808b582c;
    if (==) goto 0x0x808b5834;
    if (==) goto 0x0x808b5854;
    if (==) goto 0x0x808b5874;
    /* b 0x808b5884 */ // 0x808B5828
    FUN_808B3CF4(); // bl 0x808B3CF4
    /* b 0x808b58c4 */ // 0x808B5830
    /* lis r5, 0 */ // 0x808B5834
    /* li r0, 1 */ // 0x808B5838
    r6 = *(0 + r5); // lwz @ 0x808B583C
    r5 = r4;
    /* li r4, 0x6b */ // 0x808B5844
    *(0x1768 + r6) = r0; // stw @ 0x808B5848
    FUN_808B38C8(r5, r4); // bl 0x808B38C8
    /* b 0x808b5884 */ // 0x808B5850
    /* lis r5, 0 */ // 0x808B5854
    /* li r0, 0 */ // 0x808B5858
    r6 = *(0 + r5); // lwz @ 0x808B585C
    r5 = r4;
    /* li r4, 0x6b */ // 0x808B5864
    *(0x1768 + r6) = r0; // stw @ 0x808B5868
    FUN_808B38C8(r5, r4); // bl 0x808B38C8
    /* b 0x808b5884 */ // 0x808B5870
    r5 = r4;
    /* li r4, 0x77 */ // 0x808B5878
    FUN_808B38C8(r5, r4); // bl 0x808B38C8
    /* b 0x808b58c4 */ // 0x808B5880
    /* lis r6, 0 */ // 0x808B5884
    /* li r5, 0 */ // 0x808B5888
    r4 = *(0 + r6); // lwz @ 0x808B588C
    /* lis r3, 0 */ // 0x808B5890
    r0 = *(0x1780 + r4); // lwz @ 0x808B5894
    r0 = r0 | 2; // 0x808B5898
    *(0x1780 + r4) = r0; // stw @ 0x808B589C
    r4 = *(0 + r6); // lwz @ 0x808B58A0
    *(0x175c + r4) = r5; // stw @ 0x808B58A4
    r4 = *(0 + r6); // lwz @ 0x808B58A8
    r0 = *(0x1780 + r4); // lwz @ 0x808B58AC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r4) = r0; // stw @ 0x808B58B4
    r3 = *(0 + r3); // lwz @ 0x808B58B8
    r3 = *(0x98 + r3); // lwz @ 0x808B58BC
    *(0x60 + r3) = r5; // stw @ 0x808B58C0
    r0 = *(0x14 + r1); // lwz @ 0x808B58C4
    return;
}