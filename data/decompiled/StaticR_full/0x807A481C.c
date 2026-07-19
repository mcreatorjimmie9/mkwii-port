/* Function at 0x807A481C, size=120 bytes */
/* Stack frame: 512 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807A481C(int r3, int r4, int r5)
{
    /* Stack frame: -512(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x807A4824
    /* li r0, 1 */ // 0x807A482C
    *(0x1fc + r1) = r31; // stw @ 0x807A4830
    r31 = r3;
    *(0x1f8 + r1) = r30; // stw @ 0x807A4838
    *(0x1f4 + r1) = r29; // stw @ 0x807A483C
    *(0x10 + r3) = r0; // stb @ 0x807A4840
    r4 = *(0 + r5); // lwz @ 0x807A4844
    r0 = *(0x4c + r4); // lbz @ 0x807A4848
    *(0x11 + r3) = r0; // stb @ 0x807A484C
    r3 = *(0 + r5); // lwz @ 0x807A4850
    r0 = *(0x10 + r3); // lwz @ 0x807A4854
    if (>) goto 0x0x807a50b0;
    /* lis r3, 0 */ // 0x807A4860
    /* slwi r0, r0, 2 */ // 0x807A4864
    r3 = r3 + 0; // 0x807A4868
    /* lwzx r3, r3, r0 */ // 0x807A486C
    /* mtctr r3 */ // 0x807A4870
    /* bctr  */ // 0x807A4874
    /* lis r3, 0 */ // 0x807A4878
    /* li r30, 2 */ // 0x807A487C
    r3 = *(0 + r3); // lwz @ 0x807A4880
    r0 = *(0xb90 + r3); // lwz @ 0x807A4884
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x807A4888
    if (==) goto 0x0x807a48c4;
    /* lis r3, 0 */ // 0x807A4890
}