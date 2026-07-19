/* Function at 0x80761B18, size=328 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80761B18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80761B28
    r31 = r31 + 0; // 0x80761B2C
    *(0x58 + r1) = r30; // stw @ 0x80761B30
    r30 = r4;
    *(0x54 + r1) = r29; // stw @ 0x80761B38
    r29 = r3;
    /* lfs f3, 0xf8(r3) */ // 0x80761B40
    /* lfs f2, 0(r4) */ // 0x80761B44
    /* lfs f1, 0xfc(r3) */ // 0x80761B48
    /* lfs f0, 4(r4) */ // 0x80761B4C
    /* fmuls f2, f3, f2 */ // 0x80761B50
    /* lfs f4, 0x100(r3) */ // 0x80761B54
    /* fmuls f0, f1, f0 */ // 0x80761B5C
    /* lfs f3, 8(r4) */ // 0x80761B60
    r4 = r29 + 0xf8; // 0x80761B64
    /* fmuls f1, f4, f3 */ // 0x80761B68
    /* fadds f0, f2, f0 */ // 0x80761B6C
    /* fadds f1, f1, f0 */ // 0x80761B70
    FUN_805A443C(r4); // bl 0x805A443C
    r4 = r30;
    FUN_805A4498(r4, r3, r5); // bl 0x805A4498
    r6 = *(0x20 + r29); // lwz @ 0x80761B88
    r4 = *(6 + r6); // lhz @ 0x80761B90
    r5 = *(8 + r6); // lwz @ 0x80761B94
    r0 = r4 + -1; // 0x80761B98
    r4 = *(8 + r6); // lwz @ 0x80761B9C
    /* slwi r0, r0, 4 */ // 0x80761BA0
    r5 = r5 + r0; // 0x80761BA4
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f1, 0x5c(r31) */ // 0x80761BAC
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f2, 0xdc(r29) */ // 0x80761BBC
    /* lfs f1, 0xe0(r29) */ // 0x80761BC4
    /* lfs f0, 0xe4(r29) */ // 0x80761BCC
    /* stfs f2, 0xec(r29) */ // 0x80761BD4
    /* stfs f1, 0xf0(r29) */ // 0x80761BD8
    /* stfs f0, 0xf4(r29) */ // 0x80761BDC
    FUN_805A4464(r5); // bl 0x805A4464
    r6 = *(0x20 + r29); // lwz @ 0x80761BE4
    r4 = *(6 + r6); // lhz @ 0x80761BEC
    r5 = *(8 + r6); // lwz @ 0x80761BF0
    r0 = r4 + -1; // 0x80761BF4
    r4 = *(8 + r6); // lwz @ 0x80761BF8
    /* slwi r0, r0, 4 */ // 0x80761BFC
    r5 = r5 + r0; // 0x80761C00
    FUN_807434C0(); // bl 0x807434C0
    /* lfs f0, 4(r31) */ // 0x80761C08
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80761C0C
    /* mfcr r0 */ // 0x80761C10
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x80761C14
    if (==) goto 0x0x80761c44;
    /* lfs f2, 0xec(r29) */ // 0x80761C1C
    /* lfs f3, 0x60(r31) */ // 0x80761C20
    /* lfs f1, 0xf0(r29) */ // 0x80761C24
    /* lfs f0, 0xf4(r29) */ // 0x80761C28
    /* fmuls f2, f2, f3 */ // 0x80761C2C
    /* fmuls f1, f1, f3 */ // 0x80761C30
    /* fmuls f0, f0, f3 */ // 0x80761C34
    /* stfs f2, 0xec(r29) */ // 0x80761C38
    /* stfs f1, 0xf0(r29) */ // 0x80761C3C
    /* stfs f0, 0xf4(r29) */ // 0x80761C40
    r0 = *(0x64 + r1); // lwz @ 0x80761C44
    r31 = *(0x5c + r1); // lwz @ 0x80761C48
    r30 = *(0x58 + r1); // lwz @ 0x80761C4C
    r29 = *(0x54 + r1); // lwz @ 0x80761C50
    return;
}