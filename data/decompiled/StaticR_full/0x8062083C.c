/* Function at 0x8062083C, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8062083C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r11, 0 */ // 0x80620844
    /* clrlwi r0, r4, 0x18 */ // 0x8062084C
    r12 = *(0x30 + r1); // lwz @ 0x80620850
    /* mulli r0, r0, 0xf0 */ // 0x80620854
    *(0x1c + r1) = r31; // stw @ 0x80620858
    /* lis r31, 0 */ // 0x8062085C
    *(0x18 + r1) = r30; // stw @ 0x80620860
    r30 = *(0x2c + r1); // lwz @ 0x80620864
    *(0x14 + r1) = r29; // stw @ 0x80620868
    r29 = *(0x28 + r1); // lwz @ 0x8062086C
    *(0x10 + r1) = r28; // stw @ 0x80620870
    r28 = r3;
    *(0 + r3) = r7; // stw @ 0x80620878
    *(4 + r3) = r5; // stw @ 0x8062087C
    *(8 + r3) = r6; // stw @ 0x80620880
    *(0x10 + r3) = r4; // stb @ 0x80620884
    *(0x14 + r3) = r8; // stw @ 0x80620888
    *(0x18 + r3) = r9; // stw @ 0x8062088C
    *(0x1c + r3) = r10; // stw @ 0x80620890
    *(0x20 + r3) = r29; // stw @ 0x80620894
    *(0x24 + r3) = r30; // stw @ 0x80620898
    *(0x28 + r3) = r12; // stw @ 0x8062089C
    *(0x34 + r3) = r11; // stw @ 0x806208A0
    *(0x38 + r3) = r11; // stw @ 0x806208A4
    r3 = *(0 + r31); // lwz @ 0x806208A8
    r3 = r3 + r0; // 0x806208AC
    r0 = *(0x38 + r3); // lwz @ 0x806208B0
    if (!=) goto 0x0x806208e4;
    /* li r3, 0x14 */ // 0x806208BC
    FUN_805E3430(r3); // bl 0x805E3430
    *(0x38 + r28) = r3; // stw @ 0x806208C4
    r3 = *(0 + r31); // lwz @ 0x806208C8
    r0 = *(0xb70 + r3); // lwz @ 0x806208CC
    if (!=) goto 0x0x806208e4;
    /* li r3, 0x1c */ // 0x806208D8
    FUN_805E3430(r3); // bl 0x805E3430
    *(0x34 + r28) = r3; // stw @ 0x806208E0
    r31 = *(0x1c + r1); // lwz @ 0x806208E4
}