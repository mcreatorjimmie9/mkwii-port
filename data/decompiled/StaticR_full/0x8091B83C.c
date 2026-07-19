/* Function at 0x8091B83C, size=220 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8091B83C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x8091B858
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x8091B860
    r28 = r3;
    if (==) goto 0x0x8091b874;
    if (!=) goto 0x0x8091b8a0;
    r0 = *(0x184 + r3); // lbz @ 0x8091B874
    if (==) goto 0x0x8091b8a0;
    r0 = *(0x190 + r3); // lwz @ 0x8091B880
    if (<) goto 0x0x8091b8a0;
    /* lis r4, 0 */ // 0x8091B88C
    /* li r0, 0 */ // 0x8091B890
    /* lfs f0, 0(r4) */ // 0x8091B894
    *(0x190 + r3) = r0; // stw @ 0x8091B898
    /* stfs f0, 0x188(r3) */ // 0x8091B89C
    r0 = *(0x184 + r3); // lbz @ 0x8091B8A0
    /* li r31, 1 */ // 0x8091B8A4
    if (==) goto 0x0x8091b918;
    r3 = r29;
    FUN_8061DA88(r3); // bl 0x8061DA88
    r4 = r3;
    r5 = r28 + 0x30; // 0x8091B8C0
    FUN_805A4498(r3, r4, r3, r5); // bl 0x805A4498
    /* lfs f3, 0xf0(r28) */ // 0x8091B8C8
    /* lis r3, 0 */ // 0x8091B8CC
    /* lfs f2, 8(r1) */ // 0x8091B8D0
    /* lfs f1, 0xf4(r28) */ // 0x8091B8D4
    /* lfs f0, 0xc(r1) */ // 0x8091B8D8
    /* fmuls f3, f3, f2 */ // 0x8091B8DC
    /* lfs f5, 0xf8(r28) */ // 0x8091B8E0
    /* fmuls f2, f1, f0 */ // 0x8091B8E4
    /* lfs f4, 0x10(r1) */ // 0x8091B8E8
    /* lfs f1, 0(r3) */ // 0x8091B8EC
    /* lfs f0, 0xb4(r28) */ // 0x8091B8F0
    /* fmuls f4, f5, f4 */ // 0x8091B8F4
    /* fadds f2, f3, f2 */ // 0x8091B8F8
    /* fsubs f0, f1, f0 */ // 0x8091B8FC
    /* fadds f1, f4, f2 */ // 0x8091B900
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8091B904
    /* mfcr r0 */ // 0x8091B908
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8091B90C
    if (!=) goto 0x0x8091b918;
    /* li r31, 0 */ // 0x8091B914
}