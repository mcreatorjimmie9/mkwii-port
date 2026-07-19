/* Function at 0x80847B00, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80847B00(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r3 + 0x8c; // 0x80847B0C
    *(0x1c + r1) = r31; // stw @ 0x80847B10
    *(0x18 + r1) = r30; // stw @ 0x80847B14
    r30 = r3;
    *(0x28c + r3) = r0; // stw @ 0x80847B1C
    /* lfs f0, 0x38(r3) */ // 0x80847B20
    /* lfs f2, 0(r4) */ // 0x80847B24
    /* stfs f2, 0x3c(r3) */ // 0x80847B28
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80847B2C
    /* lfs f0, 4(r4) */ // 0x80847B30
    /* stfs f0, 0x40(r3) */ // 0x80847B34
    /* lfs f0, 8(r4) */ // 0x80847B38
    /* stfs f0, 0x44(r3) */ // 0x80847B3C
    /* stfs f1, 0x60(r3) */ // 0x80847B40
    *(0x64 + r3) = r5; // stw @ 0x80847B44
    /* lfs f0, 0(r4) */ // 0x80847B48
    /* stfs f0, 0x294(r3) */ // 0x80847B4C
    /* lfs f0, 4(r4) */ // 0x80847B50
    /* stfs f0, 0x298(r3) */ // 0x80847B54
    /* lfs f0, 8(r4) */ // 0x80847B58
    /* stfs f0, 0x29c(r3) */ // 0x80847B5C
    /* stfs f1, 0x2a0(r3) */ // 0x80847B60
    if (<=) goto 0x0x80847b90;
    /* lis r8, 0 */ // 0x80847B68
    r7 = *(0 + r8); // lwzu @ 0x80847B6C
    *(8 + r1) = r7; // stw @ 0x80847B70
    r6 = *(4 + r8); // lwz @ 0x80847B78
    r0 = *(8 + r8); // lwz @ 0x80847B7C
    *(0xc + r1) = r6; // stw @ 0x80847B80
    *(0x10 + r1) = r0; // stw @ 0x80847B84
    FUN_8084376C(r5); // bl 0x8084376C
    /* b 0x80847be8 */ // 0x80847B8C
    FUN_80843670(); // bl 0x80843670
    *(0x68 + r30) = r3; // stw @ 0x80847B94
    r31 = r30 + 0x28c; // 0x80847B98
    /* b 0x80847bcc */ // 0x80847B9C
    r3 = *(0x68 + r30); // lwz @ 0x80847BA0
    r4 = *(0x28c + r30); // lwz @ 0x80847BA4
    r0 = *(0 + r3); // lhz @ 0x80847BA8
    r3 = r4 + 2; // 0x80847BAC
    *(0 + r4) = r0; // sth @ 0x80847BB0
    *(0x28c + r30) = r3; // stw @ 0x80847BB8
    if (<) goto 0x0x80847bcc;
    r0 = r3 + -2; // 0x80847BC0
    *(0x28c + r30) = r0; // stw @ 0x80847BC4
    /* b 0x80847be8 */ // 0x80847BC8
    r3 = r30;
    /* li r4, 0 */ // 0x80847BD0
    /* li r5, 0 */ // 0x80847BD4
    /* li r6, 0 */ // 0x80847BD8
    FUN_80846540(r3, r4, r5, r6); // bl 0x80846540
    if (!=) goto 0x0x80847ba0;
    r3 = *(0x28c + r30); // lwz @ 0x80847BE8
    /* li r0, 0 */ // 0x80847BEC
    *(0 + r3) = r0; // sth @ 0x80847BF0
    r31 = *(0x1c + r1); // lwz @ 0x80847BF4
    r30 = *(0x18 + r1); // lwz @ 0x80847BF8
    r0 = *(0x24 + r1); // lwz @ 0x80847BFC
    return;
}