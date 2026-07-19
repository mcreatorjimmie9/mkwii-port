/* Function at 0x8070E7F8, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8070E7F8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8070E800
    /* lis r5, 0 */ // 0x8070E804
    *(0x14 + r1) = r0; // stw @ 0x8070E808
    r7 = r7 + 0; // 0x8070E810
    r5 = r5 + 0; // 0x8070E814
    *(0xc + r1) = r31; // stw @ 0x8070E818
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8070E820
    r30 = r3;
    if (==) goto 0x0x8070e890;
    /* addic. r0, r3, 0x104 */ // 0x8070E82C
    /* lfs f0, 0x4c(r5) */ // 0x8070E830
    /* lfs f2, 0x68(r5) */ // 0x8070E834
    /* li r4, 0x21c */ // 0x8070E838
    /* lfs f1, 0x6c(r5) */ // 0x8070E83C
    /* li r0, 0xc8 */ // 0x8070E840
    /* lis r5, 0 */ // 0x8070E844
    /* li r6, 0 */ // 0x8070E848
    *(0 + r5) = r6; // stb @ 0x8070E84C
    /* stfs f2, 0(r7) */ // 0x8070E850
    /* stfs f1, 4(r7) */ // 0x8070E854
    *(8 + r7) = r4; // stw @ 0x8070E858
    /* stfs f0, 0xc(r7) */ // 0x8070E85C
    *(0x10 + r7) = r0; // stw @ 0x8070E860
    /* stfs f0, 0x14(r7) */ // 0x8070E864
    if (==) goto 0x0x8070e880;
    /* lis r4, 0 */ // 0x8070E86C
    r4 = r4 + 0; // 0x8070E870
    *(0x104 + r3) = r4; // stw @ 0x8070E874
    r3 = *(0x118 + r3); // lwz @ 0x8070E878
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8070e890;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8070E894
    r30 = *(8 + r1); // lwz @ 0x8070E898
    r0 = *(0x14 + r1); // lwz @ 0x8070E89C
    return;
}