/* Function at 0x8069B77C, size=420 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8069B77C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8069B798
    r28 = r3;
    r5 = *(0x64 + r3); // lwz @ 0x8069B7A0
    r3 = *(0xc + r5); // lwz @ 0x8069B7A4
    r30 = *(0x38 + r3); // lwz @ 0x8069B7A8
    if (!=) goto 0x0x8069b7bc;
    /* li r30, 0 */ // 0x8069B7B4
    /* b 0x8069b810 */ // 0x8069B7B8
    /* lis r31, 0 */ // 0x8069B7BC
    r31 = r31 + 0; // 0x8069B7C0
    if (==) goto 0x0x8069b80c;
    r12 = *(0 + r30); // lwz @ 0x8069B7C8
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x8069B7D0
    /* mtctr r12 */ // 0x8069B7D4
    /* bctrl  */ // 0x8069B7D8
    /* b 0x8069b7f4 */ // 0x8069B7DC
    if (!=) goto 0x0x8069b7f0;
    /* li r0, 1 */ // 0x8069B7E8
    /* b 0x8069b800 */ // 0x8069B7EC
    r3 = *(0 + r3); // lwz @ 0x8069B7F0
    if (!=) goto 0x0x8069b7e0;
    /* li r0, 0 */ // 0x8069B7FC
    if (==) goto 0x0x8069b80c;
    /* b 0x8069b810 */ // 0x8069B808
    /* li r30, 0 */ // 0x8069B80C
    /* li r4, 0 */ // 0x8069B810
    r0 = r28 + 0x174; // 0x8069B814
    if (==) goto 0x0x8069b834;
    r3 = *(0x54 + r30); // lwz @ 0x8069B820
    if (!=) goto 0x0x8069b834;
    /* li r4, 1 */ // 0x8069B82C
    /* b 0x8069b8b0 */ // 0x8069B830
    /* li r3, 1 */ // 0x8069B834
    if (==) goto 0x0x8069b854;
    r3 = *(0xb0 + r30); // lwz @ 0x8069B840
    if (!=) goto 0x0x8069b854;
    /* li r4, 1 */ // 0x8069B84C
    /* b 0x8069b8b0 */ // 0x8069B850
    /* li r3, 2 */ // 0x8069B854
    if (==) goto 0x0x8069b874;
    r3 = *(0x10c + r30); // lwz @ 0x8069B860
    if (!=) goto 0x0x8069b874;
    /* li r4, 1 */ // 0x8069B86C
    /* b 0x8069b8b0 */ // 0x8069B870
    /* li r3, 3 */ // 0x8069B874
    if (==) goto 0x0x8069b894;
    r3 = *(0x168 + r30); // lwz @ 0x8069B880
    if (!=) goto 0x0x8069b894;
    /* li r4, 1 */ // 0x8069B88C
    /* b 0x8069b8b0 */ // 0x8069B890
    /* li r3, 4 */ // 0x8069B894
    if (==) goto 0x0x8069b8b0;
    r3 = *(0x1c4 + r30); // lwz @ 0x8069B8A0
    if (!=) goto 0x0x8069b8b0;
    /* li r4, 1 */ // 0x8069B8AC
    if (!=) goto 0x0x8069b944;
    r3 = r28 + 0x98; // 0x8069B8B8
    /* li r4, 1 */ // 0x8069B8BC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069B8C4
    r30 = r3;
    if (==) goto 0x0x8069b8e0;
    if (==) goto 0x0x8069b934;
    /* b 0x8069b944 */ // 0x8069B8DC
    r3 = *(0 + r3); // lwz @ 0x8069B8E0
    /* slwi r0, r0, 4 */ // 0x8069B8E4
    /* lwzx r3, r3, r0 */ // 0x8069B8E8
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069B8F0
    /* lis r0, 0x4330 */ // 0x8069B8F4
    *(0xc + r1) = r4; // stw @ 0x8069B8F8
    /* lis r3, 0 */ // 0x8069B8FC
    /* lfd f3, 0(r3) */ // 0x8069B900
    /* lis r5, 0 */ // 0x8069B904
    *(8 + r1) = r0; // stw @ 0x8069B908
    r3 = r30;
    /* lfs f1, 0x3c(r30) */ // 0x8069B910
    /* li r4, 3 */ // 0x8069B914
    /* lfd f2, 8(r1) */ // 0x8069B918
    /* lfs f0, 0(r5) */ // 0x8069B91C
}