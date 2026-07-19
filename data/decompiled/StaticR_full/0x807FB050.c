/* Function at 0x807FB050, size=96 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807FB050(int r3)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x74 + r1) = r29; // stw @ 0x807FB064
    r29 = r3;
    r30 = *(0x10 + r3); // lwz @ 0x807FB06C
    if (==) goto 0x0x807fb0dc;
    r0 = *(0xb0 + r3); // lwz @ 0x807FB078
    if (!=) goto 0x0x807fb0dc;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 0x30(r29) */ // 0x807FB08C
    /* li r31, 0 */ // 0x807FB090
    /* stfs f0, 0x44(r1) */ // 0x807FB094
    /* lfs f0, 0x34(r29) */ // 0x807FB098
    /* stfs f0, 0x54(r1) */ // 0x807FB09C
    /* lfs f0, 0x38(r29) */ // 0x807FB0A0
    /* stfs f0, 0x64(r1) */ // 0x807FB0A4
    r30 = *(0x10 + r29); // lwz @ 0x807FB0A8
    r3 = *(0x14 + r30); // lwz @ 0x807FB0AC
}