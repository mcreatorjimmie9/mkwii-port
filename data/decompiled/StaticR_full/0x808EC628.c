/* Function at 0x808EC628, size=224 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

void FUN_808EC628(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808EC630
    r0 = *(0x240 + r4); // lwz @ 0x808EC634
    if (==) goto 0x0x808ec65c;
    if (==) goto 0x0x808ec678;
    if (==) goto 0x0x808ec69c;
    if (==) goto 0x0x808ec6c0;
    /* b 0x808ec6e4 */ // 0x808EC658
    /* lis r5, 0 */ // 0x808EC65C
    r5 = *(0 + r5); // lwz @ 0x808EC660
    r0 = *(0x1780 + r5); // lwz @ 0x808EC664
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r5) = r0; // stw @ 0x808EC66C
    FUN_808B3CF4(r5); // bl 0x808B3CF4
    /* b 0x808ec6f8 */ // 0x808EC674
    /* lis r6, 0 */ // 0x808EC678
    r5 = r4;
    r6 = *(0 + r6); // lwz @ 0x808EC680
    /* li r4, 0x6b */ // 0x808EC684
    r0 = *(0x1780 + r6); // lwz @ 0x808EC688
    r0 = r0 | 2; // 0x808EC68C
    *(0x1780 + r6) = r0; // stw @ 0x808EC690
    FUN_808B38C8(r4); // bl 0x808B38C8
    /* b 0x808ec6e4 */ // 0x808EC698
    /* lis r6, 0 */ // 0x808EC69C
    r5 = r4;
    r6 = *(0 + r6); // lwz @ 0x808EC6A4
    /* li r4, 0x6b */ // 0x808EC6A8
    r0 = *(0x1780 + r6); // lwz @ 0x808EC6AC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r0; // stw @ 0x808EC6B4
    FUN_808B38C8(r4); // bl 0x808B38C8
    /* b 0x808ec6e4 */ // 0x808EC6BC
    /* lis r6, 0 */ // 0x808EC6C0
    r5 = r4;
    r6 = *(0 + r6); // lwz @ 0x808EC6C8
    /* li r4, 0x73 */ // 0x808EC6CC
    r0 = *(0x1780 + r6); // lwz @ 0x808EC6D0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r0; // stw @ 0x808EC6D8
    FUN_808B38C8(r4); // bl 0x808B38C8
    /* b 0x808ec6f8 */ // 0x808EC6E0
    /* lis r3, 0 */ // 0x808EC6E4
    /* li r0, 0 */ // 0x808EC6E8
    r3 = *(0 + r3); // lwz @ 0x808EC6EC
    r3 = *(0x98 + r3); // lwz @ 0x808EC6F0
    *(0x60 + r3) = r0; // stw @ 0x808EC6F4
    r0 = *(0x14 + r1); // lwz @ 0x808EC6F8
    return;
}