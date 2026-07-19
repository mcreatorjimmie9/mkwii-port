/* Function at 0x808CE77C, size=548 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808CE77C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x808CE784
    *(0x1c + r1) = r31; // stw @ 0x808CE78C
    *(0x18 + r1) = r30; // stw @ 0x808CE790
    r3 = *(0 + r3); // lwz @ 0x808CE794
    r3 = *(0 + r3); // lwz @ 0x808CE798
    r0 = *(0 + r3); // lwz @ 0x808CE79C
    if (<) goto 0x0x808ce7b0;
    if (<=) goto 0x0x808ce7c4;
    if (<) goto 0x0x808ce988;
    if (<=) goto 0x0x808ce8a8;
    /* b 0x808ce988 */ // 0x808CE7C0
    /* lis r3, 0 */ // 0x808CE7C4
    r5 = *(0 + r3); // lwz @ 0x808CE7C8
    r0 = *(0x36 + r5); // lha @ 0x808CE7CC
    if (<) goto 0x0x808ce7f4;
    /* lis r3, 1 */ // 0x808CE7D8
    /* clrlwi r4, r0, 0x18 */ // 0x808CE7DC
    r0 = r3 + -0x6c10; // 0x808CE7E0
    r0 = r0 * r4; // 0x808CE7E4
    r3 = r5 + r0; // 0x808CE7E8
    r30 = r3 + 0x38; // 0x808CE7EC
    /* b 0x808ce7f8 */ // 0x808CE7F0
    /* li r30, 0 */ // 0x808CE7F4
    /* addis r3, r30, 1 */ // 0x808CE7F8
    /* lis r4, 0 */ // 0x808CE7FC
    r0 = *(-0x6fe8 + r3); // lhz @ 0x808CE800
    /* lis r31, 0 */ // 0x808CE804
    r4 = r4 + 0; // 0x808CE808
    *(0x10 + r1) = r4; // stw @ 0x808CE80C
    r3 = *(0 + r31); // lwz @ 0x808CE810
    /* li r4, 0 */ // 0x808CE814
    *(0x14 + r1) = r0; // sth @ 0x808CE818
    FUN_805C14C8(r4, r4); // bl 0x805C14C8
    r0 = r3;
    r3 = *(0 + r31); // lwz @ 0x808CE824
    /* clrlwi r4, r0, 0x18 */ // 0x808CE828
    FUN_805BDDC8(); // bl 0x805BDDC8
    r0 = *(0x14 + r1); // lhz @ 0x808CE830
    /* extsh r3, r3 */ // 0x808CE834
    /* subf r0, r3, r0 */ // 0x808CE838
    if (>=) goto 0x0x808ce84c;
    /* li r0, 1 */ // 0x808CE844
    /* b 0x808ce858 */ // 0x808CE848
    if (<=) goto 0x0x808ce858;
    /* li r0, 0x270f */ // 0x808CE854
    /* addis r3, r30, 1 */ // 0x808CE858
    *(0x14 + r1) = r0; // sth @ 0x808CE85C
    *(-0x6fe8 + r3) = r0; // sth @ 0x808CE860
    r3 = *(-0x6c16 + r3); // lbz @ 0x808CE864
    r0 = r3 + -1; // 0x808CE868
    /* cmpwi cr1, r0, 0x1f */
    if (>=) goto 0x0x808ce894;
    if (>=) goto 0x0x808ce884;
    /* li r0, 0 */ // 0x808CE87C
    /* b 0x808ce88c */ // 0x808CE880
    if (<=) goto 0x0x808ce88c;
    /* li r0, 0x1f */ // 0x808CE888
    /* addis r3, r30, 1 */ // 0x808CE88C
    *(-0x6c16 + r3) = r0; // stb @ 0x808CE890
    /* lis r3, 0 */ // 0x808CE894
    r3 = *(0 + r3); // lwz @ 0x808CE898
    r3 = *(0x90 + r3); // lwz @ 0x808CE89C
    FUN_806845FC(r3); // bl 0x806845FC
    /* b 0x808ce988 */ // 0x808CE8A4
    /* lis r3, 0 */ // 0x808CE8A8
    r5 = *(0 + r3); // lwz @ 0x808CE8AC
    r0 = *(0x36 + r5); // lha @ 0x808CE8B0
    if (<) goto 0x0x808ce8d8;
    /* lis r3, 1 */ // 0x808CE8BC
    /* clrlwi r4, r0, 0x18 */ // 0x808CE8C0
    r0 = r3 + -0x6c10; // 0x808CE8C4
    r0 = r0 * r4; // 0x808CE8C8
    r3 = r5 + r0; // 0x808CE8CC
    r30 = r3 + 0x38; // 0x808CE8D0
    /* b 0x808ce8dc */ // 0x808CE8D4
    /* li r30, 0 */ // 0x808CE8D8
    /* addis r3, r30, 1 */ // 0x808CE8DC
    /* lis r4, 0 */ // 0x808CE8E0
    r0 = *(-0x6fe0 + r3); // lhz @ 0x808CE8E4
    /* lis r31, 0 */ // 0x808CE8E8
    r4 = r4 + 0; // 0x808CE8EC
    *(8 + r1) = r4; // stw @ 0x808CE8F0
    r3 = *(0 + r31); // lwz @ 0x808CE8F4
    /* li r4, 0 */ // 0x808CE8F8
    *(0xc + r1) = r0; // sth @ 0x808CE8FC
    FUN_805C14C8(r4, r4); // bl 0x805C14C8
    r0 = r3;
    r3 = *(0 + r31); // lwz @ 0x808CE908
    /* clrlwi r4, r0, 0x18 */ // 0x808CE90C
    FUN_805BDDC8(); // bl 0x805BDDC8
    r0 = *(0xc + r1); // lhz @ 0x808CE914
    /* extsh r3, r3 */ // 0x808CE918
    /* subf r0, r3, r0 */ // 0x808CE91C
    if (>=) goto 0x0x808ce930;
    /* li r0, 1 */ // 0x808CE928
    /* b 0x808ce93c */ // 0x808CE92C
    if (<=) goto 0x0x808ce93c;
    /* li r0, 0x270f */ // 0x808CE938
    /* addis r3, r30, 1 */ // 0x808CE93C
    *(0xc + r1) = r0; // sth @ 0x808CE940
    *(-0x6fe0 + r3) = r0; // sth @ 0x808CE944
    r3 = *(-0x6c16 + r3); // lbz @ 0x808CE948
    r0 = r3 + -1; // 0x808CE94C
    /* cmpwi cr1, r0, 0x1f */
    if (>=) goto 0x0x808ce978;
    if (>=) goto 0x0x808ce968;
    /* li r0, 0 */ // 0x808CE960
    /* b 0x808ce970 */ // 0x808CE964
    if (<=) goto 0x0x808ce970;
    /* li r0, 0x1f */ // 0x808CE96C
    /* addis r3, r30, 1 */ // 0x808CE970
    *(-0x6c16 + r3) = r0; // stb @ 0x808CE974
    /* lis r3, 0 */ // 0x808CE978
    r3 = *(0 + r3); // lwz @ 0x808CE97C
    r3 = *(0x90 + r3); // lwz @ 0x808CE980
    FUN_806845FC(r3); // bl 0x806845FC
    r0 = *(0x24 + r1); // lwz @ 0x808CE988
    r31 = *(0x1c + r1); // lwz @ 0x808CE98C
    r30 = *(0x18 + r1); // lwz @ 0x808CE990
    return;
}