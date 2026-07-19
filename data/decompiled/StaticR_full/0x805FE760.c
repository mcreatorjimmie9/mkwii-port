/* Function at 0x805FE760, size=508 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 20 function(s) */

int FUN_805FE760(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805FE774
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805FE77C
    r0 = *(0 + r4); // lwz @ 0x805FE780
    /* rlwinm. r0, r0, 0, 7, 7 */ // 0x805FE784
    if (==) goto 0x0x805fe79c;
    r3 = r31;
    /* lis r4, 0x100 */ // 0x805FE790
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x805fe7a0 */ // 0x805FE798
    /* li r3, 0 */ // 0x805FE79C
    if (==) goto 0x0x805fe7c4;
    r3 = r30 + 4; // 0x805FE7A8
    FUN_8061E010(r3, r3); // bl 0x8061E010
    /* lis r4, 0 */ // 0x805FE7B0
    r4 = *(0 + r4); // lwz @ 0x805FE7B4
    r0 = *(4 + r4); // lhz @ 0x805FE7B8
    r4 = r0 rlwinm 0x1b; // rlwinm
    FUN_80796240(r4); // bl 0x80796240
    r3 = r30;
    r4 = r31;
    /* li r5, 0 */ // 0x805FE7CC
    FUN_80600FE8(r3, r4, r5); // bl 0x80600FE8
    r0 = *(0 + r31); // lwz @ 0x805FE7D4
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x805FE7D8
    if (==) goto 0x0x805fe828;
    r3 = r30 + 4; // 0x805FE7E0
    FUN_8061E93C(r3); // bl 0x8061E93C
    /* li r4, 1 */ // 0x805FE7E8
    FUN_807B6034(r3, r4); // bl 0x807B6034
    r3 = r30 + 4; // 0x805FE7F0
    FUN_8061DA88(r3, r4, r3); // bl 0x8061DA88
    r29 = r3;
    r3 = r30 + 4; // 0x805FE7FC
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805FE804
    /* clrlwi r0, r3, 0x18 */ // 0x805FE808
    r3 = *(0 + r4); // lwz @ 0x805FE80C
    /* mulli r0, r0, 0x248 */ // 0x805FE810
    r4 = r29;
    r3 = *(0x14 + r3); // lwz @ 0x805FE818
    r3 = r3 + r0; // 0x805FE81C
    FUN_80823DA0(r4); // bl 0x80823DA0
    /* b 0x805fe838 */ // 0x805FE824
    r3 = r30 + 4; // 0x805FE828
    FUN_8061E93C(r3); // bl 0x8061E93C
    /* li r4, 0 */ // 0x805FE830
    FUN_807B6034(r3, r4); // bl 0x807B6034
    r0 = *(0 + r31); // lwz @ 0x805FE838
    /* rlwinm. r0, r0, 0, 0xe, 0xe */ // 0x805FE83C
    if (==) goto 0x0x805fe854;
    r3 = r31;
    /* lis r4, 2 */ // 0x805FE848
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x805fe858 */ // 0x805FE850
    /* li r3, 0 */ // 0x805FE854
    if (==) goto 0x0x805fe890;
    /* lis r4, 0 */ // 0x805FE860
    r3 = *(4 + r30); // lwz @ 0x805FE864
    r4 = *(0 + r4); // lwz @ 0x805FE868
    r3 = *(4 + r3); // lwz @ 0x805FE86C
    r0 = *(4 + r4); // lhz @ 0x805FE870
    r0 = r0 rlwinm 0x1b; // rlwinm
    *(0x80 + r3) = r0; // stw @ 0x805FE878
    r3 = *(4 + r30); // lwz @ 0x805FE87C
    r3 = *(4 + r3); // lwz @ 0x805FE880
    r0 = *(8 + r3); // lwz @ 0x805FE884
    r0 = r0 | 8; // 0x805FE888
    *(8 + r3) = r0; // stw @ 0x805FE88C
    r0 = *(0 + r31); // lwz @ 0x805FE890
    /* rlwinm. r0, r0, 0, 5, 5 */ // 0x805FE894
    if (==) goto 0x0x805fe8ac;
    r3 = r31;
    /* lis r4, 0x400 */ // 0x805FE8A0
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x805fe8b0 */ // 0x805FE8A8
    /* li r3, 0 */ // 0x805FE8AC
    if (==) goto 0x0x805fe970;
    /* lis r3, 0 */ // 0x805FE8B8
    r3 = *(0 + r3); // lwz @ 0x805FE8BC
    r4 = *(4 + r3); // lhz @ 0x805FE8C0
    r0 = r4 rlwinm 0x1b; // rlwinm
    if (!=) goto 0x0x805fe8dc;
    r3 = r30 + 4; // 0x805FE8D0
    r4 = r4 rlwinm 0x18; // rlwinm
    FUN_8061F1F8(r3); // bl 0x8061F1F8
    /* lis r3, 0 */ // 0x805FE8DC
    r3 = *(0 + r3); // lwz @ 0x805FE8E0
    r0 = *(4 + r3); // lhz @ 0x805FE8E4
    /* rlwinm. r3, r0, 0x1b, 0x1d, 0x1f */ // 0x805FE8E8
    if (!=) goto 0x0x805fe908;
    r3 = r30 + 4; // 0x805FE8F0
    r4 = r0 rlwinm 0x18; // rlwinm
    FUN_8061F1F8(r3); // bl 0x8061F1F8
    r3 = r30 + 4; // 0x805FE8FC
    FUN_8061E65C(r3, r3); // bl 0x8061E65C
    /* b 0x805fe970 */ // 0x805FE904
    if (!=) goto 0x0x805fe938;
    r3 = r30 + 4; // 0x805FE910
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805FE918
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x805FE920
    r4 = r31;
    r3 = *(0x68 + r3); // lwz @ 0x805FE928
    /* lwzx r3, r3, r0 */ // 0x805FE92C
    FUN_8073B4B8(r4); // bl 0x8073B4B8
    /* b 0x805fe970 */ // 0x805FE934
    if (!=) goto 0x0x805fe970;
    r3 = r30 + 4; // 0x805FE940
    FUN_8061F180(r3); // bl 0x8061F180
    /* li r4, 1 */ // 0x805FE948
    FUN_806444CC(r3, r4); // bl 0x806444CC
    r3 = *(4 + r30); // lwz @ 0x805FE950
    r3 = *(4 + r3); // lwz @ 0x805FE954
    r0 = *(0x10 + r3); // lwz @ 0x805FE958
}