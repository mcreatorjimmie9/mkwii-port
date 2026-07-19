/* Function at 0x807C6B18, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807C6B18(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807C6B20
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807C6B30
    /* lis r30, 0 */ // 0x807C6B34
    r30 = r30 + 0; // 0x807C6B38
    *(0x14 + r1) = r29; // stw @ 0x807C6B3C
    r5 = *(0x17c + r3); // lwz @ 0x807C6B40
    r3 = *(0 + r4); // lwz @ 0x807C6B44
    r29 = r5 + -1; // 0x807C6B48
    FUN_807BFFB8(); // bl 0x807BFFB8
    if (<) goto 0x0x807c6c18;
    r5 = *(0xec + r31); // lwz @ 0x807C6B58
    /* slwi r0, r29, 3 */ // 0x807C6B5C
    r4 = r31 + r0; // 0x807C6B60
    r4 = *(0x14c + r4); // lwz @ 0x807C6B68
    if (==) goto 0x0x807c6c18;
    /* lfs f1, 0x20(r5) */ // 0x807C6B70
    /* lfs f2, 0x20(r4) */ // 0x807C6B74
    /* lfs f0, 8(r30) */ // 0x807C6B78
    /* fsubs f2, f2, f1 */ // 0x807C6B7C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807C6B80
    if (<=) goto 0x0x807c6c18;
    /* lfs f3, 8(r30) */ // 0x807C6B88
    /* lis r4, 0 */ // 0x807C6B8C
    /* lfs f1, 0xc(r30) */ // 0x807C6B90
    /* fsubs f2, f2, f3 */ // 0x807C6B94
    /* lfs f0, 0(r4) */ // 0x807C6B98
    /* fsubs f1, f1, f3 */ // 0x807C6B9C
    /* fdivs f2, f2, f1 */ // 0x807C6BA0
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807C6BA4
    if (<=) goto 0x0x807c6bb4;
    /* fmr f2, f0 */ // 0x807C6BAC
    /* b 0x807c6bc8 */ // 0x807C6BB0
    /* lis r4, 0 */ // 0x807C6BB4
    /* lfs f0, 0(r4) */ // 0x807C6BB8
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807C6BBC
    if (>=) goto 0x0x807c6bc8;
    /* fmr f2, f0 */ // 0x807C6BC4
    /* slwi r0, r3, 2 */ // 0x807C6BC8
    r3 = r30 + 0x10; // 0x807C6BCC
    /* lfsx f0, r3, r0 */ // 0x807C6BD0
    r4 = r31;
    /* lfs f1, 0xf8(r30) */ // 0x807C6BD8
    /* li r5, 0 */ // 0x807C6BDC
    /* fsubs f0, f0, f1 */ // 0x807C6BE0
    /* fmuls f0, f2, f0 */ // 0x807C6BE4
    /* fadds f1, f1, f0 */ // 0x807C6BE8
    /* b 0x807c6c0c */ // 0x807C6BEC
    r3 = *(0xe8 + r4); // lwz @ 0x807C6BF0
    r4 = r4 + 8; // 0x807C6BF4
    r5 = r5 + 1; // 0x807C6BF8
    r3 = *(0xc + r3); // lwz @ 0x807C6BFC
    /* lfs f0, 0xc(r3) */ // 0x807C6C00
    /* fadds f0, f0, f1 */ // 0x807C6C04
    /* stfs f0, 0xc(r3) */ // 0x807C6C08
    r0 = *(0x178 + r31); // lwz @ 0x807C6C0C
    if (<) goto 0x0x807c6bf0;
    r0 = *(0x24 + r1); // lwz @ 0x807C6C18
    r31 = *(0x1c + r1); // lwz @ 0x807C6C1C
    r30 = *(0x18 + r1); // lwz @ 0x807C6C20
    r29 = *(0x14 + r1); // lwz @ 0x807C6C24
    return;
}