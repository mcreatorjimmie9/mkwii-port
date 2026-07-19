/* Function at 0x807C6758, size=352 bytes */
/* Stack frame: 64 bytes */

int FUN_807C6758(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* li r0, 0 */ // 0x807C675C
    r6 = r3;
    /* li r8, 0 */ // 0x807C6764
    *(8 + r1) = r0; // stw @ 0x807C6768
    *(0xc + r1) = r0; // stw @ 0x807C6770
    *(0x10 + r1) = r0; // stw @ 0x807C6774
    *(0x14 + r1) = r0; // stw @ 0x807C6778
    *(0x18 + r1) = r0; // stw @ 0x807C677C
    *(0x1c + r1) = r0; // stw @ 0x807C6780
    *(0x20 + r1) = r0; // stw @ 0x807C6784
    *(0x24 + r1) = r0; // stw @ 0x807C6788
    *(0x28 + r1) = r0; // stw @ 0x807C678C
    *(0x2c + r1) = r0; // stw @ 0x807C6790
    *(0x30 + r1) = r0; // stw @ 0x807C6794
    *(0x34 + r1) = r0; // stw @ 0x807C6798
    /* b 0x807c67c4 */ // 0x807C679C
    r7 = *(0xe8 + r6); // lwz @ 0x807C67A0
    r0 = *(0x14 + r7); // lwz @ 0x807C67A4
    if (<) goto 0x0x807c67bc;
    /* slwi r0, r0, 2 */ // 0x807C67B0
    r4 = r5 + r0; // 0x807C67B4
    *(-4 + r4) = r7; // stw @ 0x807C67B8
    r6 = r6 + 8; // 0x807C67BC
    r8 = r8 + 1; // 0x807C67C0
    r0 = *(0x178 + r3); // lwz @ 0x807C67C4
    if (<) goto 0x0x807c67a0;
    /* li r0, 2 */ // 0x807C67D0
    /* li r6, 0 */ // 0x807C67D8
    /* li r7, 0 */ // 0x807C67DC
    /* mtctr r0 */ // 0x807C67E0
    r5 = *(0 + r4); // lwz @ 0x807C67E4
    if (==) goto 0x0x807c6804;
    r0 = r6 + 1; // 0x807C67F0
    *(0x14 + r5) = r0; // stw @ 0x807C67F4
    r6 = r6 + 1; // 0x807C67F8
    *(0xec + r3) = r5; // stw @ 0x807C67FC
    r3 = r3 + 8; // 0x807C6800
    r5 = *(4 + r4); // lwz @ 0x807C6804
    if (==) goto 0x0x807c6824;
    r0 = r6 + 1; // 0x807C6810
    *(0x14 + r5) = r0; // stw @ 0x807C6814
    r6 = r6 + 1; // 0x807C6818
    *(0xec + r3) = r5; // stw @ 0x807C681C
    r3 = r3 + 8; // 0x807C6820
    r5 = *(8 + r4); // lwz @ 0x807C6824
    if (==) goto 0x0x807c6844;
    r0 = r6 + 1; // 0x807C6830
    *(0x14 + r5) = r0; // stw @ 0x807C6834
    r6 = r6 + 1; // 0x807C6838
    *(0xec + r3) = r5; // stw @ 0x807C683C
    r3 = r3 + 8; // 0x807C6840
    r5 = *(0xc + r4); // lwz @ 0x807C6844
    if (==) goto 0x0x807c6864;
    r0 = r6 + 1; // 0x807C6850
    *(0x14 + r5) = r0; // stw @ 0x807C6854
    r6 = r6 + 1; // 0x807C6858
    *(0xec + r3) = r5; // stw @ 0x807C685C
    r3 = r3 + 8; // 0x807C6860
    r5 = *(0x10 + r4); // lwz @ 0x807C6864
    if (==) goto 0x0x807c6884;
    r0 = r6 + 1; // 0x807C6870
    *(0x14 + r5) = r0; // stw @ 0x807C6874
    r6 = r6 + 1; // 0x807C6878
    *(0xec + r3) = r5; // stw @ 0x807C687C
    r3 = r3 + 8; // 0x807C6880
    r5 = *(0x14 + r4); // lwz @ 0x807C6884
    if (==) goto 0x0x807c68a4;
    r0 = r6 + 1; // 0x807C6890
    *(0x14 + r5) = r0; // stw @ 0x807C6894
    r6 = r6 + 1; // 0x807C6898
    *(0xec + r3) = r5; // stw @ 0x807C689C
    r3 = r3 + 8; // 0x807C68A0
    r4 = r4 + 0x18; // 0x807C68A4
    r7 = r7 + 5; // 0x807C68A8
    if (counter-- != 0) goto 0x0x807c67e4;
    return;
}