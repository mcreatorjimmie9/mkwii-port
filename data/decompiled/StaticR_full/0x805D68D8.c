/* Function at 0x805D68D8, size=168 bytes */
/* Stack frame: 0 bytes */

int FUN_805D68D8(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D68D8
    r0 = *(0xa + r4); // lbz @ 0x805D68DC
    r7 = r7 + -0x7340; // 0x805D68E0
    r6 = r6 * r7; // 0x805D68E4
    r7 = r3 + r6; // 0x805D68EC
    if (==) goto 0x0x805d6970;
    r3 = *(4 + r4); // lhz @ 0x805D68F4
    /* li r6, 0x63 */ // 0x805D68F8
    r0 = *(0x1c4 + r7); // lwz @ 0x805D68FC
    r0 = r5 rlwimi 0x19; // rlwimi
    *(0x1c4 + r7) = r0; // stw @ 0x805D6908
    if (>) goto 0x0x805d6914;
    r6 = r3;
    r0 = *(4 + r4); // lhz @ 0x805D6914
    r3 = *(0x1c4 + r7); // lwz @ 0x805D6918
    r3 = r6 rlwimi 0x12; // rlwimi
    *(0x1c4 + r7) = r3; // stw @ 0x805D6924
    if (<=) goto 0x0x805d6934;
    /* li r5, 0x3b */ // 0x805D692C
    /* b 0x805d6938 */ // 0x805D6930
    r5 = *(6 + r4); // lbz @ 0x805D6934
    r0 = *(4 + r4); // lhz @ 0x805D6938
    r3 = *(0x1c4 + r7); // lwz @ 0x805D693C
    r3 = r5 rlwimi 0xb; // rlwimi
    *(0x1c4 + r7) = r3; // stw @ 0x805D6948
    if (<=) goto 0x0x805d6958;
    /* li r3, 0x3e7 */ // 0x805D6950
    /* b 0x805d695c */ // 0x805D6954
    r3 = *(8 + r4); // lhz @ 0x805D6958
    r0 = *(0x1c4 + r7); // lwz @ 0x805D695C
    r0 = r3 rlwimi 1; // rlwimi
    r0 = r0 | 0x8000; // 0x805D6964
    *(0x1c4 + r7) = r0; // stw @ 0x805D6968
    return;
    r0 = *(0x1c4 + r7); // lwz @ 0x805D6970
    /* clrlwi r0, r0, 0x1f */ // 0x805D6974
    *(0x1c4 + r7) = r0; // stw @ 0x805D6978
    return;
}