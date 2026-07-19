/* Function at 0x8074EC7C, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8074EC7C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8074EC88
    r31 = r3;
    FUN_8074ED2C(); // bl 0x8074ED2C
    /* lis r3, 0 */ // 0x8074EC94
    /* li r6, 0 */ // 0x8074EC98
    /* lfs f0, 0(r3) */ // 0x8074EC9C
    /* li r4, 2 */ // 0x8074ECA0
    /* b 0x8074ed08 */ // 0x8074ECA4
    r3 = *(0xb4 + r31); // lwz @ 0x8074ECA8
    r0 = r6 rlwinm 2; // rlwinm
    r5 = *(0xb0 + r31); // lwz @ 0x8074ECB0
    /* lwzx r3, r3, r0 */ // 0x8074ECB4
    /* lfs f3, 0x30(r5) */ // 0x8074ECB8
    /* lfs f4, 0x30(r3) */ // 0x8074ECBC
    /* lfs f2, 0x34(r3) */ // 0x8074ECC0
    /* fsubs f5, f4, f3 */ // 0x8074ECC4
    /* lfs f1, 0x34(r5) */ // 0x8074ECC8
    /* lfs f3, 0x38(r3) */ // 0x8074ECCC
    /* fsubs f4, f2, f1 */ // 0x8074ECD0
    /* lfs f1, 0x38(r5) */ // 0x8074ECD4
    /* fmuls f2, f5, f5 */ // 0x8074ECD8
    /* fsubs f3, f3, f1 */ // 0x8074ECDC
    /* fmuls f1, f4, f4 */ // 0x8074ECE0
    /* fmuls f3, f3, f3 */ // 0x8074ECE4
    /* fadds f1, f2, f1 */ // 0x8074ECE8
    /* fadds f1, f3, f1 */ // 0x8074ECEC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074ECF0
    /* mfcr r0 */ // 0x8074ECF4
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x8074ECF8
    if (==) goto 0x0x8074ed04;
    *(0x130 + r3) = r4; // stw @ 0x8074ED00
    r6 = r6 + 1; // 0x8074ED04
    r0 = *(0xb8 + r31); // lbz @ 0x8074ED08
    /* clrlwi r3, r6, 0x18 */ // 0x8074ED0C
    if (<) goto 0x0x8074eca8;
    r0 = *(0x14 + r1); // lwz @ 0x8074ED18
    r31 = *(0xc + r1); // lwz @ 0x8074ED1C
    return;
}