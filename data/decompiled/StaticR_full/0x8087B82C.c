/* Function at 0x8087B82C, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8087B82C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x8087B834
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8087B844
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8087B84C
    r3 = *(0 + r5); // lwz @ 0x8087B850
    r0 = *(0xb90 + r3); // lwz @ 0x8087B854
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8087B858
    if (==) goto 0x0x8087b880;
    r4 = *(3 + r30); // lbz @ 0x8087B860
    FUN_805C14C8(); // bl 0x805C14C8
    r0 = r3;
    r3 = r31;
    /* clrlwi r4, r0, 0x18 */ // 0x8087B870
    FUN_8082E474(r3); // bl 0x8082E474
    if (!=) goto 0x0x8087b980;
    r0 = *(0xbc + r30); // lwz @ 0x8087B880
    if (!=) goto 0x0x8087b980;
    r4 = *(0xa4 + r31); // lwz @ 0x8087B88C
    /* lis r3, 0x2020 */ // 0x8087B890
    r0 = r3 + 0x2020; // 0x8087B894
    r3 = *(0x20 + r4); // lwz @ 0x8087B898
    /* and. r0, r3, r0 */ // 0x8087B89C
    if (!=) goto 0x0x8087b980;
    r0 = *(4 + r31); // lwz @ 0x8087B8A4
    if (!=) goto 0x0x8087b8f8;
    /* lis r3, 0 */ // 0x8087B8B0
    r4 = *(3 + r30); // lbz @ 0x8087B8B4
    r3 = *(0 + r3); // lwz @ 0x8087B8B8
    FUN_805C14C8(r3); // bl 0x805C14C8
    r29 = r3;
    r3 = r31;
    FUN_80837CA8(r3); // bl 0x80837CA8
    /* clrlwi r3, r3, 0x18 */ // 0x8087B8CC
    /* extsb r0, r29 */ // 0x8087B8D0
    if (!=) goto 0x0x8087b8f8;
    *(0xbc + r30) = r31; // stw @ 0x8087B8DC
    r0 = *(3 + r30); // lbz @ 0x8087B8E0
    r3 = *(0xa4 + r31); // lwz @ 0x8087B8E4
    /* slwi r0, r0, 2 */ // 0x8087B8E8
    r3 = r3 + r0; // 0x8087B8EC
    /* lfs f0, 0xc(r3) */ // 0x8087B8F0
    /* stfs f0, 0xb4(r30) */ // 0x8087B8F4
    r0 = *(4 + r31); // lwz @ 0x8087B8F8
    if (!=) goto 0x0x8087b94c;
    /* lis r3, 0 */ // 0x8087B904
    r4 = *(3 + r30); // lbz @ 0x8087B908
    r3 = *(0 + r3); // lwz @ 0x8087B90C
    FUN_805C14C8(r3); // bl 0x805C14C8
    r29 = r3;
    r3 = r31;
    FUN_80834C8C(r3); // bl 0x80834C8C
    /* clrlwi r3, r3, 0x18 */ // 0x8087B920
    /* extsb r0, r29 */ // 0x8087B924
    if (!=) goto 0x0x8087b94c;
    *(0xbc + r30) = r31; // stw @ 0x8087B930
    r0 = *(3 + r30); // lbz @ 0x8087B934
    r3 = *(0xa4 + r31); // lwz @ 0x8087B938
    /* slwi r0, r0, 2 */ // 0x8087B93C
    r3 = r3 + r0; // 0x8087B940
    /* lfs f0, 0xc(r3) */ // 0x8087B944
    /* stfs f0, 0xb4(r30) */ // 0x8087B948
    r0 = *(4 + r31); // lwz @ 0x8087B94C
    if (!=) goto 0x0x8087b980;
    r0 = *(3 + r30); // lbz @ 0x8087B958
    r3 = *(0xa4 + r31); // lwz @ 0x8087B95C
    /* slwi r0, r0, 2 */ // 0x8087B960
    /* lfs f0, 0xb4(r30) */ // 0x8087B964
    r3 = r3 + r0; // 0x8087B968
    /* lfs f1, 0xc(r3) */ // 0x8087B96C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8087B970
    if (>=) goto 0x0x8087b980;
    /* stfs f1, 0xb4(r30) */ // 0x8087B978
    *(0xb8 + r30) = r31; // stw @ 0x8087B97C
    r0 = *(0x24 + r1); // lwz @ 0x8087B980
    r31 = *(0x1c + r1); // lwz @ 0x8087B984
    r30 = *(0x18 + r1); // lwz @ 0x8087B988
    r29 = *(0x14 + r1); // lwz @ 0x8087B98C
    return;
}