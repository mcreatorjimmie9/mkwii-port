/* Function at 0x806EE6EC, size=496 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806EE6EC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x806EE6F8
    *(0x2c + r1) = r31; // stw @ 0x806EE700
    r31 = r4;
    /* li r4, 0xc */ // 0x806EE708
    *(0x28 + r1) = r30; // stw @ 0x806EE70C
    *(0x24 + r1) = r29; // stw @ 0x806EE710
    *(0x20 + r1) = r28; // stw @ 0x806EE714
    *(8 + r1) = r0; // stw @ 0x806EE718
    *(0xc + r1) = r0; // stw @ 0x806EE71C
    *(0x10 + r1) = r0; // stw @ 0x806EE720
    FUN_806EBB70(); // bl 0x806EBB70
    /* li r0, 0xc */ // 0x806EE728
    /* li r4, 0 */ // 0x806EE730
    /* li r5, 0 */ // 0x806EE734
    /* li r6, 0 */ // 0x806EE738
    /* li r11, 1 */ // 0x806EE73C
    /* lis r10, 0 */ // 0x806EE740
    /* mtctr r0 */ // 0x806EE744
    r12 = *(0 + r10); // lwz @ 0x806EE748
    r0 = *(0 + r3); // lbz @ 0x806EE74C
    r7 = *(0x291c + r12); // lwz @ 0x806EE750
    r8 = r11 << r0; // slw
    /* mulli r7, r7, 0x58 */ // 0x806EE758
    r9 = r12 + r7; // 0x806EE75C
    r7 = *(0x48 + r9); // lwz @ 0x806EE760
    /* and. r7, r8, r7 */ // 0x806EE764
    if (==) goto 0x0x806ee8b4;
    r7 = *(0x40 + r9); // lwz @ 0x806EE76C
    r6 = r6 + 1; // 0x806EE770
    if (!=) goto 0x0x806ee7f4;
    r12 = r0 rlwinm 1; // rlwinm
    r30 = r0 rlwinm 2; // rlwinm
    /* li r28, 0 */ // 0x806EE784
    /* b 0x806ee7b8 */ // 0x806EE788
    if (<) goto 0x0x806ee7ac;
    r8 = *(0 + r31); // lwz @ 0x806EE794
    r7 = r11 << r12; // slw
    r5 = r5 + 1; // 0x806EE79C
    r7 = r8 | r7; // 0x806EE7A0
    *(0 + r31) = r7; // stw @ 0x806EE7A4
    /* b 0x806ee7b0 */ // 0x806EE7A8
    r4 = r4 + 1; // 0x806EE7AC
    r28 = r28 + 1; // 0x806EE7B4
    r29 = *(0 + r10); // lwz @ 0x806EE7B8
    r7 = *(0x291c + r29); // lwz @ 0x806EE7BC
    /* mulli r9, r7, 0x58 */ // 0x806EE7C0
    r8 = r29 + r9; // 0x806EE7C4
    r7 = *(0x59 + r8); // lbz @ 0x806EE7C8
    if (==) goto 0x0x806ee7e4;
    r7 = r30 + r29; // 0x806EE7D4
    r7 = r9 + r7; // 0x806EE7D8
    r7 = *(0x5b + r7); // lbz @ 0x806EE7DC
    /* b 0x806ee7e8 */ // 0x806EE7E0
    r7 = *(0x58 + r8); // lbz @ 0x806EE7E4
    if (<) goto 0x0x806ee78c;
    /* b 0x806ee8b4 */ // 0x806EE7F0
    if (<) goto 0x0x806ee864;
    r12 = r0 rlwinm 1; // rlwinm
    r30 = r0 rlwinm 2; // rlwinm
    /* li r28, 0 */ // 0x806EE804
    /* b 0x806ee828 */ // 0x806EE808
    r8 = *(0 + r31); // lwz @ 0x806EE80C
    r7 = r11 << r12; // slw
    r28 = r28 + 1; // 0x806EE814
    r5 = r5 + 1; // 0x806EE818
    r7 = r8 | r7; // 0x806EE81C
    *(0 + r31) = r7; // stw @ 0x806EE820
    r29 = *(0 + r10); // lwz @ 0x806EE828
    r7 = *(0x291c + r29); // lwz @ 0x806EE82C
    /* mulli r9, r7, 0x58 */ // 0x806EE830
    r8 = r29 + r9; // 0x806EE834
    r7 = *(0x59 + r8); // lbz @ 0x806EE838
    if (==) goto 0x0x806ee854;
    r7 = r30 + r29; // 0x806EE844
    r7 = r9 + r7; // 0x806EE848
    r7 = *(0x5b + r7); // lbz @ 0x806EE84C
    /* b 0x806ee858 */ // 0x806EE850
    r7 = *(0x58 + r8); // lbz @ 0x806EE854
    if (<) goto 0x0x806ee80c;
    /* b 0x806ee8b4 */ // 0x806EE860
    r7 = r0 rlwinm 2; // rlwinm
    r9 = *(0x59 + r9); // lbz @ 0x806EE868
    r8 = r7 + r12; // 0x806EE86C
    /* li r28, 0 */ // 0x806EE870
    /* b 0x806ee880 */ // 0x806EE874
    r4 = r4 + 1; // 0x806EE878
    r28 = r28 + 1; // 0x806EE87C
    if (==) goto 0x0x806ee89c;
    r7 = *(0x291c + r12); // lwz @ 0x806EE888
    /* mulli r7, r7, 0x58 */ // 0x806EE88C
    r7 = r7 + r8; // 0x806EE890
    r7 = *(0x5b + r7); // lbz @ 0x806EE894
    /* b 0x806ee8ac */ // 0x806EE898
    r7 = *(0x291c + r12); // lwz @ 0x806EE89C
    /* mulli r7, r7, 0x58 */ // 0x806EE8A0
    r7 = r12 + r7; // 0x806EE8A4
    r7 = *(0x58 + r7); // lbz @ 0x806EE8A8
    if (<) goto 0x0x806ee878;
    r3 = r3 + 1; // 0x806EE8B4
    if (counter-- != 0) goto 0x0x806ee748;
    r0 = *(0x34 + r1); // lwz @ 0x806EE8BC
    r31 = *(0x2c + r1); // lwz @ 0x806EE8C0
    r30 = *(0x28 + r1); // lwz @ 0x806EE8C4
    r29 = *(0x24 + r1); // lwz @ 0x806EE8C8
    r28 = *(0x20 + r1); // lwz @ 0x806EE8CC
    return;
}