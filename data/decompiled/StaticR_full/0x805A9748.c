/* Function at 0x805A9748, size=536 bytes */
/* Stack frame: 0 bytes */

int FUN_805A9748(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* li r0, 5 */ // 0x805A9748
    /* li r8, -1 */ // 0x805A974C
    /* li r9, 0 */ // 0x805A9750
    /* mtctr r0 */ // 0x805A9754
    /* extsh r0, r8 */ // 0x805A9758
    if (!=) goto 0x0x805a9784;
    r7 = r9 rlwinm 3; // rlwinm
    r7 = r3 + r7; // 0x805A9768
    r7 = *(0x78 + r7); // lwz @ 0x805A976C
    /* addis r7, r7, 1 */ // 0x805A9770
    if (!=) goto 0x0x805a9784;
    /* clrlwi r8, r9, 0x18 */ // 0x805A977C
    /* b 0x805a97a0 */ // 0x805A9780
    r0 = r9 rlwinm 3; // rlwinm
    r7 = r3 + r0; // 0x805A9788
    r0 = *(0x78 + r7); // lwz @ 0x805A978C
    if (!=) goto 0x0x805a97a0;
    /* clrlwi r8, r9, 0x18 */ // 0x805A9798
    /* b 0x805a97f8 */ // 0x805A979C
    /* extsh r0, r8 */ // 0x805A97A0
    r9 = r9 + 1; // 0x805A97A4
    /* clrlwi r0, r9, 0x18 */ // 0x805A97AC
    if (!=) goto 0x0x805a97d4;
    r7 = r9 rlwinm 3; // rlwinm
    r7 = r3 + r7; // 0x805A97B8
    r7 = *(0x78 + r7); // lwz @ 0x805A97BC
    /* addis r7, r7, 1 */ // 0x805A97C0
    if (!=) goto 0x0x805a97d4;
    r8 = r0;
    /* b 0x805a97f0 */ // 0x805A97D0
    r0 = r9 rlwinm 3; // rlwinm
    r7 = r3 + r0; // 0x805A97D8
    r0 = *(0x78 + r7); // lwz @ 0x805A97DC
    if (!=) goto 0x0x805a97f0;
    /* clrlwi r8, r9, 0x18 */ // 0x805A97E8
    /* b 0x805a97f8 */ // 0x805A97EC
    r9 = r9 + 1; // 0x805A97F0
    if (counter-- != 0) goto 0x0x805a9758;
    /* extsh. r0, r8 */ // 0x805A97F8
    if (>=) goto 0x0x805a98d4;
    /* li r0, 2 */ // 0x805A9800
    r9 = r4;
    /* li r10, 0 */ // 0x805A9808
    /* mtctr r0 */ // 0x805A980C
    r0 = r10 rlwinm 3; // rlwinm
    r7 = r3 + r0; // 0x805A9814
    r7 = *(0x78 + r7); // lwz @ 0x805A9818
    if (>=) goto 0x0x805a982c;
    /* clrlwi r8, r10, 0x18 */ // 0x805A9824
    r9 = r7;
    r0 = r10 rlwinm 3; // rlwinm
    r7 = r3 + r0; // 0x805A9834
    r7 = *(0x78 + r7); // lwz @ 0x805A9838
    /* clrlwi r0, r10, 0x18 */ // 0x805A983C
    if (>=) goto 0x0x805a9850;
    r8 = r0;
    r9 = r7;
    r0 = r10 rlwinm 3; // rlwinm
    r7 = r3 + r0; // 0x805A9858
    r7 = *(0x78 + r7); // lwz @ 0x805A985C
    /* clrlwi r0, r10, 0x18 */ // 0x805A9860
    if (>=) goto 0x0x805a9874;
    r8 = r0;
    r9 = r7;
    r0 = r10 rlwinm 3; // rlwinm
    r7 = r3 + r0; // 0x805A987C
    r7 = *(0x78 + r7); // lwz @ 0x805A9880
    /* clrlwi r0, r10, 0x18 */ // 0x805A9884
    if (>=) goto 0x0x805a9898;
    r8 = r0;
    r9 = r7;
    r0 = r10 rlwinm 3; // rlwinm
    r7 = r3 + r0; // 0x805A98A0
    r7 = *(0x78 + r7); // lwz @ 0x805A98A4
    /* clrlwi r0, r10, 0x18 */ // 0x805A98A8
    if (>=) goto 0x0x805a98bc;
    r8 = r0;
    r9 = r7;
    if (counter-- != 0) goto 0x0x805a9810;
    /* extsh. r0, r8 */ // 0x805A98C4
    if (>=) goto 0x0x805a98d4;
    /* li r3, 0 */ // 0x805A98CC
    return;
    /* extsh r0, r8 */ // 0x805A98D4
    r9 = *(4 + r5); // lhz @ 0x805A98D8
    /* slwi r10, r0, 3 */ // 0x805A98DC
    /* li r7, 0x63 */ // 0x805A98E0
    r8 = r3 + r10; // 0x805A98E4
    *(0x78 + r8) = r4; // stw @ 0x805A98EC
    if (>) goto 0x0x805a98f8;
    r7 = r9;
    r0 = *(4 + r5); // lhz @ 0x805A98F8
    r8 = r3 + r10; // 0x805A98FC
    r4 = *(0x7c + r8); // lwz @ 0x805A9900
    r4 = r7 rlwimi 0x18; // rlwimi
    *(0x7c + r8) = r4; // stw @ 0x805A990C
    if (<=) goto 0x0x805a991c;
    /* li r7, 0x3b */ // 0x805A9914
    /* b 0x805a9920 */ // 0x805A9918
    r7 = *(6 + r5); // lbz @ 0x805A991C
    r0 = *(4 + r5); // lhz @ 0x805A9920
    r4 = *(0x7c + r8); // lwz @ 0x805A9924
    r4 = r7 rlwimi 0x11; // rlwimi
    *(0x7c + r8) = r4; // stw @ 0x805A9930
    if (<=) goto 0x0x805a9940;
    /* li r5, 0x3e7 */ // 0x805A9938
    /* b 0x805a9944 */ // 0x805A993C
    r5 = *(8 + r5); // lhz @ 0x805A9940
    r4 = r3 + r10; // 0x805A9944
    /* li r3, 1 */ // 0x805A9948
    r0 = *(0x7c + r4); // lwz @ 0x805A994C
    r0 = r5 rlwimi 7; // rlwimi
    r0 = r6 rlwimi 4; // rlwimi
    *(0x7c + r4) = r0; // stw @ 0x805A9958
    return;
}